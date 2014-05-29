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
	// ����һ��CThostFtdcMdApiʵ��
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
	// ������½����  ����¼Ҳ�ɲ�ѯ����
	m_pMdApi->ReqUserLogin(&reqUserLogin,1);
}
void CZQMD::OnFrontDisconnected(int nReason)
{
	printf("I am in OnFrontDisconnected!\n");
}
void CZQMD::OnRspUserLogin(CZQThostFtdcRspUserLoginField *pRspUserLogin, CZQThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
	printf("I am in OnRspUserLogin!\n");
	//��������
	char * Instruments[10];
	memset(Instruments,0,sizeof(Instruments));
	Instruments[0] = "000001";

	m_pMdApi->SubscribeMarketData (Instruments,10,"SZE");
}
void CZQMD::OnRtnDepthMarketData(CZQThostFtdcDepthMarketDataField *pDepthMarketData) 
{
	printf("����---֤ȯ���룺%s:[����:%d] [������:%s] [���¼�:%f]\n",pDepthMarketData->InstrumentID,pDepthMarketData->Volume,pDepthMarketData->ExchangeID,pDepthMarketData->LastPrice);
}
