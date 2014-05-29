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

	// ����һ��CThostFtdcTraderApiʵ��
	m_pTdApi = CZQThostFtdcTraderApi::CreateFtdcTraderApi("");

	// ע��һ�¼������ʵ��
	m_pTdApi->RegisterSpi(this);
	
	// ����˽����
	//        TERT_RESTART:�ӱ������տ�ʼ�ش�
	//        TERT_RESUME:���ϴ��յ�������
	//        TERT_QUICK:ֻ���͵�¼��˽����������
	m_pTdApi->SubscribePrivateTopic(ZQTHOST_TERT_QUICK);
	
	// ���Ĺ�����
	//        TERT_RESTART:�ӱ������տ�ʼ�ش�
	//        TERT_RESUME:���ϴ��յ�������
	//        TERT_QUICK:ֻ���͵�¼�󹫹���������
	m_pTdApi->SubscribePublicTopic(ZQTHOST_TERT_QUICK);

	// ���ý����й�ϵͳ����ĵ�ַ������ע������ַ����
	//m_pTdApi->RegisterFront("tcp://192.60.11.203:41205");
	//m_pTdApi->RegisterFront("tcp://192.70.2.71:41205");
	//m_pTdApi->RegisterFront("tcp://180.166.11.40:41205");
//	m_pTdApi->RegisterFront("tcp://192.20.101.99:41205");//
	printf(" in the CZQTD init function houzhen set the tcp for xingye server \n");
	m_pTdApi->RegisterFront("tcp://180.166.11.40:41205"); //houzhen for connect to xingye 
	// ʹ�ͻ��˿�ʼ���̨����������
	m_pTdApi->Init();
} 

void CZQTD::OnFrontConnected()
{
	printf("OnFrontConnected\n");
	CZQThostFtdcReqUserLoginField reqUserLogin;
	memset(&reqUserLogin,0,sizeof(reqUserLogin));

	strcpy_s(reqUserLogin.BrokerID,"2011");//�˴�2011��Ҫ��

	strcpy_s(reqUserLogin.UserID,"20000090");   //houzhen change the id
	strcpy_s(reqUserLogin.Password,"112233");    //houzhen chang the key

	int login=m_pTdApi->ReqUserLogin(&reqUserLogin, 1);
	return;
}


void CZQTD::OnRspUserLogin(CZQThostFtdcRspUserLoginField *pRspUserLogin, CZQThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
    cerr<<"--------------��¼��OnRspUserLogin---------------"<<endl;
	printf("��¼��Ӧ�����OnRspUserLogin��pRspInfo->ErrorID:%d,pRspInfo->ErrorMsg:%s\n",pRspInfo->ErrorID,pRspInfo->ErrorMsg);
	printf("������:%s\n",m_pTdApi->GetTradingDay());
	
	//ծȯ��Ϣ��ѯ
	//CZQThostFtdcQryBondInterestField pQryBondInterest;
	//memset(&pQryBondInterest,0,sizeof(pQryBondInterest));
	//CZQThostFtdcQryBondInterestField *pBI=&pQryBondInterest;
	//strcpy_s(pBI->ExchangeID,"SZE");
	//strcpy_s(pBI->InstrumentID,"100303");
	//int login=m_pTdApi->ReqQryBondInterest(pBI,nRequestID);

	//Ͷ���߲�ѯ
	//CZQThostFtdcQryInvestorField pQryInvestor;
	//memset(&pQryInvestor,0,sizeof(pQryInvestor));
	//CZQThostFtdcQryInvestorField *pI=&pQryInvestor;
	//strcpy_s(pI->BrokerID,"2011");
	//strcpy_s(pI->InvestorID,"20000090"); //houzhen change the id
	//int login=m_pTdApi->ReqQryInvestor(pI,nRequestID);

	//��ѯ�ɽ���
	//CZQThostFtdcQryTradeField pQryTrade;
	//memset(&pQryTrade,0,sizeof(pQryTrade));
	//CZQThostFtdcQryTradeField *pT=&pQryTrade;
	//strcpy_s(pT->BrokerID,"2011");
	//strcpy_s(pT->InvestorID,"20000090");  //houzhen change the id
	//int login=m_pTdApi->ReqQryTrade(pT,nRequestID);

	//���Լ
	//CZQThostFtdcQryInstrumentField pQryInstrument;
	//memset(&pQryInstrument,0,sizeof(pQryInstrument));
	//CZQThostFtdcQryInstrumentField *pInstrument=&pQryInstrument;
	//strcpy_s(pInstrument->ExchangeID,"SSE");
	//strcpy_s(pInstrument->InstrumentID,"600033");
	//int login=m_pTdApi->ReqQryInstrument(pInstrument, nRequestID);

	//��ѯ����
	CZQThostFtdcQryOrderField pInputOrder;
	memset(&pInputOrder,0,sizeof(pInputOrder));
	CZQThostFtdcQryOrderField *pIptOrdFld=&pInputOrder;
	strcpy_s(pIptOrdFld->BrokerID,"2011");
	strcpy_s(pIptOrdFld->InvestorID,"20000002");//houzhen change the id
	//strcpy_s(pIptOrdFld->InstrumentID,"600033");
	//strcpy_s(pIptOrdFld->ExchangeID,"SZE");
	int login=m_pTdApi->ReqQryOrder(pIptOrdFld,++nRequestID);	

	//�޸�����
	//CZQThostFtdcUserPasswordUpdateField pUserPasswordUpdate;
	//memset(&pUserPasswordUpdate,0,sizeof(pUserPasswordUpdate));
    //strcpy_s(pUserPasswordUpdate.BrokerID,"2011");
	//strcpy_s(pUserPasswordUpdate.UserID,"20000090");  //houzhen change the id
	//strcpy_s(pUserPasswordUpdate.OldPassword,"112233");
	//strcpy_s(pUserPasswordUpdate.NewPassword,"332211");
	//int login=m_pTdApi->ReqUserPasswordUpdate(&pUserPasswordUpdate,nRequestID);

	//�ǳ�
	//CZQThostFtdcUserLogoutField reqUserLogout;
	//memset(&reqUserLogout,0,sizeof(reqUserLogout));
	//strcpy_s(reqUserLogout.BrokerID,"2011");
	//strcpy_s(reqUserLogout.UserID,"20000090");  //houzhen change the id
	//int login=m_pTdApi->ReqUserLogout(&reqUserLogout, 1);


	//��ѯ��������
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
	
	//��ֲ�
	
	CZQThostFtdcQryInvestorPositionField pField;
	memset(&pField,0,sizeof(pField));
	CZQThostFtdcQryInvestorPositionField *pFld=&pField;
	strcpy_s(pFld->BrokerID,"2011");
	strcpy_s(pFld->InvestorID,"20000090"); //houzhen changet the id
//	strcpy_s(pFld->InstrumentID,"600002");//��д���������þ���ĳ��֤ȯ�ĳֲ���Ϣ�������ʾ�����гֲ�
	int lo=m_pTdApi->ReqQryInvestorPosition(pFld,nRequestID);
//error ....
	printf("position quiry in nRequestID->ErrorID:%d,nRequestID->ErrorMsg:%s\n",nRequestID->ErrorID,nRequestID->ErrorMsg);


	//�������ܴ���	
	//CZQThostFtdcInputOrderField pInputOrder;
	//memset(&pInputOrder,0,sizeof(pInputOrder));
	//CZQThostFtdcInputOrderField * pIptOrdFld=&pInputOrder;
	////���͹�˾����
	//strcpy_s(pIptOrdFld->BrokerID,"2011");
	////Ͷ���ߴ���
	//strcpy_s(pIptOrdFld->InvestorID,"20000090");  //houzhen change the id
	////֤ȯ����
	//strcpy_s(pIptOrdFld->InstrumentID,"000002");
	////����������  
	//strcpy_s(pIptOrdFld->ExchangeID,"SZE");//SSE�Ͻ��� SZE���
	////�����۸�����  
	//pIptOrdFld->OrderPriceType=THOST_FTDC_OPT_LimitPrice;
	////��������
	//pIptOrdFld->Direction=THOST_FTDC_D_Buy;
	////����
	//pIptOrdFld->VolumeTotalOriginal=100;
 //  //��Ч������
	//pIptOrdFld->TimeCondition = THOST_FTDC_TC_GFD;
	////�ɽ�������
	//pIptOrdFld->VolumeCondition=THOST_FTDC_VC_AV;
	////��������
	//pIptOrdFld->ContingentCondition = THOST_FTDC_CC_Immediately;
	////ǿƽԭ��
	//pIptOrdFld->ForceCloseReason = THOST_FTDC_FCC_NotForceClose;
	////�۸�
	//pIptOrdFld->CombOffsetFlag[0]=THOST_FTDC_OF_Open;
	//pIptOrdFld->CombHedgeFlag[0]=THOST_FTDC_HF_Speculation;
	//strcpy_s(pIptOrdFld->UserID,"20000090"); //houzhen change the id
	////pIptOrdFld->IsAutoSuspend = 0;
	////pIptOrdFld->UserForceClose = 0;
	//strcpy_s(pIptOrdFld->LimitPrice,"9.30");	
	//int resCode=m_pTdApi->ReqOrderInsert(pIptOrdFld,nRequestID);
	//cout<<"1-"<<time_time()<<"-"<<pIptOrdFld->LimitPrice<<"-"<<"(�ѱ���)"<<endl;	
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
	 /*������ʽһ��ͬһ��session*/
	 //pIptOrdFld->FrontID=pOrder->FrontID;
	 //pIptOrdFld->SessionID=pOrder->SessionID;
	 //strcpy_s(pIptOrdFld->OrderRef,pOrder->OrderRef);
	 //pIptOrdFld->ActionFlag=THOST_FTDC_AF_Delete;
	 //strcpy_s(pIptOrdFld->InstrumentID,pOrder->InstrumentID);
	 //strcpy_s(pIptOrdFld->ExchangeID,pOrder->ExchangeID);

	 /*������ʽ��������ͬһ��session*/
	 strcpy_s(pIptOrdFld->OrderLocalID,pOrder->OrderLocalID); 
     strcpy_s(pIptOrdFld->TraderID,pOrder->TraderID);
	 strcpy_s(pIptOrdFld->BrokerID,pOrder->BrokerID);
	 strcpy_s(pIptOrdFld->ExchangeID,pOrder->ExchangeID);
	 pIptOrdFld->ActionFlag=THOST_FTDC_AF_Delete;
	 printf("--��õ�������-Instrument:%s!!localid:%s!!����״̬��%d!!�۸�%d\n",pOrder->InstrumentID,pOrder->OrderLocalID,pOrder->OrderStatus,pOrder->LimitPrice);
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
	printf("�۸�%s",pTrade->Price);
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
