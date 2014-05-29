// ZQTD.cpp: implementation of the CZQTD class.
//
//////////////////////////////////////////////////////////////////////

#include "StdAfx.h"
#include "ZQTD.h"
#include <windows.h> 
#include <stdio.h>
#include<stdlib.h>
#include <time.h>
#include <iostream>
#include "math.h"

using namespace std;
//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

int time_time( void ) 
{ 
 SYSTEMTIME sys; 
 GetLocalTime( &sys ); 
  return sys.wDay*86400000+sys.wHour*3600000+sys.wMinute*60000+sys.wSecond*1000+sys.wMilliseconds;
}

CZQTD::CZQTD()
{

}

CZQTD::~CZQTD()
{

}

void CZQTD::Init()
{

	// 产生一个CThostFtdcTraderApi实例
	m_pTdApi = CZQThostFtdcTraderApi::CreateFtdcTraderApi("");

	// 注册一事件处理的实例
	m_pTdApi->RegisterSpi(this);
	
	// 订阅私有流
	//        TERT_RESTART:从本交易日开始重传
	//        TERT_RESUME:从上次收到的续传
	//        TERT_QUICK:只传送登录后私有流的内容
	m_pTdApi->SubscribePrivateTopic(ZQTHOST_TERT_QUICK);
	
	// 订阅公共流
	//        TERT_RESTART:从本交易日开始重传
	//        TERT_RESUME:从上次收到的续传
	//        TERT_QUICK:只传送登录后公共流的内容
	m_pTdApi->SubscribePublicTopic(ZQTHOST_TERT_QUICK);

	// 设置交易托管系统服务的地址，可以注册多个地址备用
	//m_pTdApi->RegisterFront("tcp://192.60.11.203:41205");
	//m_pTdApi->RegisterFront("tcp://192.70.2.71:41205");
	//m_pTdApi->RegisterFront("tcp://180.166.11.40:41205");
//	m_pTdApi->RegisterFront("tcp://192.20.101.99:41205");//
	printf(" in the CZQTD init function houzhen set the tcp for xingye server \n");
	m_pTdApi->RegisterFront("tcp://180.166.11.40:41205"); //houzhen for connect to xingye 
	// 使客户端开始与后台服务建立连接
	m_pTdApi->Init();
} 

void CZQTD::OnFrontConnected()
{
	printf("OnFrontConnected\n");
	CZQThostFtdcReqUserLoginField reqUserLogin;
	memset(&reqUserLogin,0,sizeof(reqUserLogin));

	strcpy_s(reqUserLogin.BrokerID,"2011");//此处2011不要改

	strcpy_s(reqUserLogin.UserID,"20000090");   //houzhen change the id
	strcpy_s(reqUserLogin.Password,"112233");    //houzhen chang the key

	int login=m_pTdApi->ReqUserLogin(&reqUserLogin, 1);
	return;
}


void CZQTD::OnRspUserLogin(CZQThostFtdcRspUserLoginField *pRspUserLogin, CZQThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
    cerr<<"--------------登录，OnRspUserLogin---------------"<<endl;
	printf("登录响应及结果OnRspUserLogin：pRspInfo->ErrorID:%d,pRspInfo->ErrorMsg:%s\n",pRspInfo->ErrorID,pRspInfo->ErrorMsg);
	printf("交易日:%s\n",m_pTdApi->GetTradingDay());
	
	//债券利息查询
	//CZQThostFtdcQryBondInterestField pQryBondInterest;
	//memset(&pQryBondInterest,0,sizeof(pQryBondInterest));
	//CZQThostFtdcQryBondInterestField *pBI=&pQryBondInterest;
	//strcpy_s(pBI->ExchangeID,"SZE");
	//strcpy_s(pBI->InstrumentID,"100303");
	//int login=m_pTdApi->ReqQryBondInterest(pBI,nRequestID);

	//投资者查询
	//CZQThostFtdcQryInvestorField pQryInvestor;
	//memset(&pQryInvestor,0,sizeof(pQryInvestor));
	//CZQThostFtdcQryInvestorField *pI=&pQryInvestor;
	//strcpy_s(pI->BrokerID,"2011");
	//strcpy_s(pI->InvestorID,"20000090"); //houzhen change the id
	//int login=m_pTdApi->ReqQryInvestor(pI,nRequestID);

	//查询成交单
	//CZQThostFtdcQryTradeField pQryTrade;
	//memset(&pQryTrade,0,sizeof(pQryTrade));
	//CZQThostFtdcQryTradeField *pT=&pQryTrade;
	//strcpy_s(pT->BrokerID,"2011");
	//strcpy_s(pT->InvestorID,"20000090");  //houzhen change the id
	//int login=m_pTdApi->ReqQryTrade(pT,nRequestID);

	//查合约
	//CZQThostFtdcQryInstrumentField pQryInstrument;
	//memset(&pQryInstrument,0,sizeof(pQryInstrument));
	//CZQThostFtdcQryInstrumentField *pInstrument=&pQryInstrument;
	//strcpy_s(pInstrument->ExchangeID,"SSE");
	//strcpy_s(pInstrument->InstrumentID,"600033");
	//int login=m_pTdApi->ReqQryInstrument(pInstrument, nRequestID);

	//查询报单
	CZQThostFtdcQryOrderField pInputOrder;
	memset(&pInputOrder,0,sizeof(pInputOrder));
	CZQThostFtdcQryOrderField *pIptOrdFld=&pInputOrder;
	strcpy_s(pIptOrdFld->BrokerID,"2011");
	strcpy_s(pIptOrdFld->InvestorID,"20000002");//houzhen change the id
	//strcpy_s(pIptOrdFld->InstrumentID,"600033");
	//strcpy_s(pIptOrdFld->ExchangeID,"SZE");
	int login=m_pTdApi->ReqQryOrder(pIptOrdFld,++nRequestID);	

	//修改密码
	//CZQThostFtdcUserPasswordUpdateField pUserPasswordUpdate;
	//memset(&pUserPasswordUpdate,0,sizeof(pUserPasswordUpdate));
    //strcpy_s(pUserPasswordUpdate.BrokerID,"2011");
	//strcpy_s(pUserPasswordUpdate.UserID,"20000090");  //houzhen change the id
	//strcpy_s(pUserPasswordUpdate.OldPassword,"112233");
	//strcpy_s(pUserPasswordUpdate.NewPassword,"332211");
	//int login=m_pTdApi->ReqUserPasswordUpdate(&pUserPasswordUpdate,nRequestID);

	//登出
	//CZQThostFtdcUserLogoutField reqUserLogout;
	//memset(&reqUserLogout,0,sizeof(reqUserLogout));
	//strcpy_s(reqUserLogout.BrokerID,"2011");
	//strcpy_s(reqUserLogout.UserID,"20000090");  //houzhen change the id
	//int login=m_pTdApi->ReqUserLogout(&reqUserLogout, 1);


	//查询手续费率
	/*
	CZQThostFtdcQryInstrumentCommissionRateField pInputComm;
	memset(&pInputComm,0,sizeof(pInputComm));
	CZQThostFtdcQryInstrumentCommissionRateField *pInputComm1=&pInputComm;
	strcpy_s(pInputComm1->ExchangeID,"SSE");
	strcpy_s(pInputComm1->BrokerID,"2011");
	strcpy_s(pInputComm1->InvestorID,"20000090");  //houzhen change the id
	strcpy_s(pInputComm1->InstrumentID,"600020");
	m_pTdApi->ReqQryInstrumentCommissionRate(&pInputComm1,nRequestID);	
	*/
	
	//查持仓
	
	CZQThostFtdcQryInvestorPositionField pField;
	memset(&pField,0,sizeof(pField));
	CZQThostFtdcQryInvestorPositionField *pFld=&pField;
	strcpy_s(pFld->BrokerID,"2011");
	strcpy_s(pFld->InvestorID,"20000090"); //houzhen changet the id
//	strcpy_s(pFld->InstrumentID,"600002");//填写此项标明查得具体某个证券的持仓信息，不填表示查所有持仓
	int lo=m_pTdApi->ReqQryInvestorPosition(pFld,nRequestID);
//error ....
	printf("position quiry in nRequestID->ErrorID:%d,nRequestID->ErrorMsg:%s\n",nRequestID->ErrorID,nRequestID->ErrorMsg);


	//报单功能代码	
	//CZQThostFtdcInputOrderField pInputOrder;
	//memset(&pInputOrder,0,sizeof(pInputOrder));
	//CZQThostFtdcInputOrderField * pIptOrdFld=&pInputOrder;
	////经纪公司代码
	//strcpy_s(pIptOrdFld->BrokerID,"2011");
	////投资者代码
	//strcpy_s(pIptOrdFld->InvestorID,"20000090");  //houzhen change the id
	////证券代码
	//strcpy_s(pIptOrdFld->InstrumentID,"000002");
	////交易所代码  
	//strcpy_s(pIptOrdFld->ExchangeID,"SZE");//SSE上交所 SZE深交所
	////报单价格条件  
	//pIptOrdFld->OrderPriceType=THOST_FTDC_OPT_LimitPrice;
	////买卖方向
	//pIptOrdFld->Direction=THOST_FTDC_D_Buy;
	////数量
	//pIptOrdFld->VolumeTotalOriginal=100;
 //  //有效期类型
	//pIptOrdFld->TimeCondition = THOST_FTDC_TC_GFD;
	////成交量类型
	//pIptOrdFld->VolumeCondition=THOST_FTDC_VC_AV;
	////触发条件
	//pIptOrdFld->ContingentCondition = THOST_FTDC_CC_Immediately;
	////强平原因
	//pIptOrdFld->ForceCloseReason = THOST_FTDC_FCC_NotForceClose;
	////价格
	//pIptOrdFld->CombOffsetFlag[0]=THOST_FTDC_OF_Open;
	//pIptOrdFld->CombHedgeFlag[0]=THOST_FTDC_HF_Speculation;
	//strcpy_s(pIptOrdFld->UserID,"20000090"); //houzhen change the id
	////pIptOrdFld->IsAutoSuspend = 0;
	////pIptOrdFld->UserForceClose = 0;
	//strcpy_s(pIptOrdFld->LimitPrice,"9.30");	
	//int resCode=m_pTdApi->ReqOrderInsert(pIptOrdFld,nRequestID);
	//cout<<"1-"<<time_time()<<"-"<<pIptOrdFld->LimitPrice<<"-"<<"(已报出)"<<endl;	
	printf("quiting OnRspUserLogin \n");
	return;
}
void CZQTD::OnRspQryInvestor(CZQThostFtdcInvestorField *pInvestor, CZQThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	return;
};

void CZQTD::OnRspQryTrade(CZQThostFtdcTradeField *pTrade, CZQThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{

	printf("--OnRspQryTrade--:%s--------%s\n",pTrade->InstrumentID,pTrade->TradeID);

};

void CZQTD::OnRspQryBondInterest(CZQThostFtdcBondInterestField *pBondInterest, CZQThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("--OnRspQryBondInterest--:%s--------%f\n",pBondInterest->InstrumentID,pBondInterest->Interest);
  return;

}
void CZQTD::OnRspQryInvestorPosition(CZQThostFtdcInvestorPositionField *pInvestorPosition, CZQThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
  //printf("--OnRspError--:%s\n",pRspInfo->ErrorMsg);
  return;

}
void CZQTD::OnRtnOrder(CZQThostFtdcOrderField *pOrder)
{
	printf("Instrument:%s;Name:%s!\n",pOrder->InstrumentID,pOrder->LimitPrice);
	return;
}

void CZQTD::OnRspQryInstrument(CZQThostFtdcInstrumentField *pInstrument, CZQThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if(pInstrument!=NULL)
	printf("Instrument:%s;Name:%s!\n",pInstrument->InstrumentID,pInstrument->InstrumentName);
	return;
}
void CZQTD::OnRspOrderInsert(CZQThostFtdcInputOrderField *pInputOrder2, CZQThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
 {
	return;
}
void CZQTD::OnRspQryOrder(CZQThostFtdcOrderField *pOrder, CZQThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
 {
	 if(pOrder!=NULL){
     CZQThostFtdcInputOrderActionField pInputOrder;
	 memset(&pInputOrder,0,sizeof(pInputOrder));
	 CZQThostFtdcInputOrderActionField *pIptOrdFld=&pInputOrder;
	 /*撤单方式一，同一个session*/
	 //pIptOrdFld->FrontID=pOrder->FrontID;
	 //pIptOrdFld->SessionID=pOrder->SessionID;
	 //strcpy_s(pIptOrdFld->OrderRef,pOrder->OrderRef);
	 //pIptOrdFld->ActionFlag=THOST_FTDC_AF_Delete;
	 //strcpy_s(pIptOrdFld->InstrumentID,pOrder->InstrumentID);
	 //strcpy_s(pIptOrdFld->ExchangeID,pOrder->ExchangeID);

	 /*撤单方式二，不是同一个session*/
	 strcpy_s(pIptOrdFld->OrderLocalID,pOrder->OrderLocalID); 
     strcpy_s(pIptOrdFld->TraderID,pOrder->TraderID);
	 strcpy_s(pIptOrdFld->BrokerID,pOrder->BrokerID);
	 strcpy_s(pIptOrdFld->ExchangeID,pOrder->ExchangeID);
	 pIptOrdFld->ActionFlag=THOST_FTDC_AF_Delete;
	 printf("--查得单子数据-Instrument:%s!!localid:%s!!订单状态：%d!!价格：%d\n",pOrder->InstrumentID,pOrder->OrderLocalID,pOrder->OrderStatus,pOrder->LimitPrice);
	if(pOrder->OrderStatus!='0'){
	int resCode2=m_pTdApi->ReqOrderAction(pIptOrdFld, ++nRequestID);
    }
	 }
	return;
}
void CZQTD::OnRspQryTradingCode(CZQThostFtdcTradingCodeField *pTradingCode, CZQThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("InvestorID:%d   ClientID:%d\n",pTradingCode->InvestorID,pTradingCode->ClientID);
	return;
}
void CZQTD::OnRspQryInstrumentCommissionRate(CZQThostFtdcInstrumentCommissionRateField *pInstrumentCommissionRate, CZQThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	//printf("--OnRspQryInstrumentCommissionRate--:%s\n",pRspInfo->ErrorMsg);
	return;
}
//ErrRSP&Rtn/////////////////////////////////////////////////////////////////////
void CZQTD::OnRspError(CZQThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("--OnRspError--:%s\n",pRspInfo->ErrorMsg);
	return;
}
void CZQTD::OnErrRtnOrderInsert(CZQThostFtdcInputOrderField *pInputOrder, CZQThostFtdcRspInfoField *pRspInfo)
{
	printf("--OnErrRtnOrderInsert--:%s\n",pRspInfo->ErrorMsg);
	return;
}
void CZQTD::OnErrRtnOrderAction(CZQThostFtdcOrderActionField *pOrderAction, CZQThostFtdcRspInfoField *pRspInfo)
{
	printf("--OnErrRtnOrderAction--:%s--\n",pRspInfo->ErrorMsg);
	return;
}
void CZQTD::OnRspOrderAction(CZQThostFtdcInputOrderActionField *pInputOrderAction, CZQThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	return;
}
void CZQTD::OnRtnTrade(CZQThostFtdcTradeField *pTrade)
{
	printf("价格：%s",pTrade->Price);
	return;
}
void CZQTD::OnRtnInstrumentStatus(CZQThostFtdcInstrumentStatusField *pInstrumentStatus)
{
	return;
}
double CZQTD::getPrice(TZQThostFtdcStockPriceType price)
{
	
	return sizeof(price) / sizeof(price[0]);
}
