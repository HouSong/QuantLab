// ZQMD.cpp: implementation of the CZQMD class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "ZQMD.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CZQMD::CZQMD()
{

}

CZQMD::~CZQMD()
{
	
}

void CZQMD::Init()
{
	// 产生一个CThostFtdcMdApi实例
	m_pMdApi=CZQThostFtdcMdApi::CreateFtdcMdApi("");
	m_pMdApi->RegisterSpi(this);

	m_pMdApi->RegisterFront("tcp://192.20.101.99:41213");
	m_pMdApi->Init();

}

void CZQMD::OnFrontConnected()
{
	CZQThostFtdcReqUserLoginField reqUserLogin;
	memset(&reqUserLogin,0,sizeof(reqUserLogin));
	strcpy_s(reqUserLogin.BrokerID,"2011");
	strcpy_s(reqUserLogin.UserID,"20000090");//houzhen change the id
	strcpy_s(reqUserLogin.Password,"112233");
	// 发出登陆请求  不登录也可查询行情
	m_pMdApi->ReqUserLogin(&reqUserLogin,1);
}
void CZQMD::OnFrontDisconnected(int nReason)
{
	printf("I am in OnFrontDisconnected!\n");
}
void CZQMD::OnRspUserLogin(CZQThostFtdcRspUserLoginField *pRspUserLogin, CZQThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	printf("I am in OnRspUserLogin!\n");
	//订阅行情
	char * Instruments[10];
	memset(Instruments,0,sizeof(Instruments));
	Instruments[0] = "000001";

	m_pMdApi->SubscribeMarketData (Instruments,10,"SZE");
}
void CZQMD::OnRtnDepthMarketData(CZQThostFtdcDepthMarketDataField *pDepthMarketData) 
{
	printf("行情---证券代码：%s:[数量:%d] [交易所:%s] [最新价:%f]\n",pDepthMarketData->InstrumentID,pDepthMarketData->Volume,pDepthMarketData->ExchangeID,pDepthMarketData->LastPrice);
}
