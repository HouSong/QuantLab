/////////////////////////////////////////////////////////////////////////
///@system ��һ��������ϵͳ
///@company �Ϻ��ڻ���Ϣ�������޹�˾
///@file ThostFtdcUserApiStruct.h
///@brief �����˿ͻ��˽ӿ�ʹ�õ�ҵ�����ݽṹ
///@history 
///20060106	�Ժ��		�������ļ�
/////////////////////////////////////////////////////////////////////////

#if !defined(SSE_THOST_FTDCSTRUCT_H)
#define SSE_THOST_FTDCSTRUCT_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "shfe_stock_ns.h"
#include "ThostFtdcUserApiDataTypeSSE.h"
_SHFE_NS_STOCK_BEGIN_

///��Ϣ�ַ�
struct CZQThostFtdcDisseminationField
{
	///����ϵ�к�
	TZQThostFtdcSequenceSeriesType	SequenceSeries;
	///���к�
	TZQThostFtdcSequenceNoType	SequenceNo;
};

///�û���¼����
struct CZQThostFtdcReqUserLoginField
{
	///������
	TZQThostFtdcDateType	TradingDay;
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///����
	TZQThostFtdcPasswordType	Password;
	///�û��˲�Ʒ��Ϣ
	TZQThostFtdcProductInfoType	UserProductInfo;
	///�ӿڶ˲�Ʒ��Ϣ
	TZQThostFtdcProductInfoType	InterfaceProductInfo;
	///Э����Ϣ
	TZQThostFtdcProtocolInfoType	ProtocolInfo;
	///Mac��ַ
	TZQThostFtdcMacAddressType	MacAddress;
	///��̬����
	TZQThostFtdcPasswordType	OneTimePassword;
	///�ն�IP��ַ
	TZQThostFtdcIPAddressType	ClientIPAddress;
};

///�û���¼Ӧ��
struct CZQThostFtdcRspUserLoginField
{
	///������
	TZQThostFtdcDateType	TradingDay;
	///��¼�ɹ�ʱ��
	TZQThostFtdcTimeType	LoginTime;
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///����ϵͳ����
	TZQThostFtdcSystemNameType	SystemName;
	///ǰ�ñ��
	TZQThostFtdcFrontIDType	FrontID;
	///�Ự���
	TZQThostFtdcSessionIDType	SessionID;
	///��󱨵�����
	TZQThostFtdcOrderRefType	MaxOrderRef;
	///������ʱ��
	TZQThostFtdcTimeType	SHFETime;
	///������ʱ��
	TZQThostFtdcTimeType	DCETime;
	///֣����ʱ��
	TZQThostFtdcTimeType	CZCETime;
	///�н���ʱ��
	TZQThostFtdcTimeType	FFEXTime;
};

///�û��ǳ�����
struct CZQThostFtdcUserLogoutField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
};

///ǿ�ƽ���Ա�˳�
struct CZQThostFtdcForceUserLogoutField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
};

///�ͻ�����֤����
struct CZQThostFtdcReqAuthenticateField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///�û��˲�Ʒ��Ϣ
	TZQThostFtdcProductInfoType	UserProductInfo;
	///��֤��
	TZQThostFtdcAuthCodeType	AuthCode;
};

///�ͻ�����֤��Ӧ
struct CZQThostFtdcRspAuthenticateField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///�û��˲�Ʒ��Ϣ
	TZQThostFtdcProductInfoType	UserProductInfo;
};

///�ͻ�����֤��Ϣ
struct CZQThostFtdcAuthenticationInfoField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///�û��˲�Ʒ��Ϣ
	TZQThostFtdcProductInfoType	UserProductInfo;
	///��֤��Ϣ
	TZQThostFtdcAuthInfoType	AuthInfo;
	///�Ƿ�Ϊ��֤���
	TZQThostFtdcBoolType	IsResult;
};

///����ת�ʱ���ͷ
struct CZQThostFtdcTransferHeaderField
{
	///�汾�ţ�������1.0
	TZQThostFtdcVersionType	Version;
	///���״��룬����
	TZQThostFtdcTradeCodeType	TradeCode;
	///�������ڣ������ʽ��yyyymmdd
	TZQThostFtdcTradeDateType	TradeDate;
	///����ʱ�䣬�����ʽ��hhmmss
	TZQThostFtdcTradeTimeType	TradeTime;
	///������ˮ�ţ�N/A
	TZQThostFtdcTradeSerialType	TradeSerial;
	///�ڻ���˾���룬����
	TZQThostFtdcFutureIDType	FutureID;
	///���д��룬���ݲ�ѯ���еõ�������
	TZQThostFtdcBankIDType	BankID;
	///���з����Ĵ��룬���ݲ�ѯ���еõ�������
	TZQThostFtdcBankBrchIDType	BankBrchID;
	///����Ա��N/A
	TZQThostFtdcOperNoType	OperNo;
	///�����豸���ͣ�N/A
	TZQThostFtdcDeviceIDType	DeviceID;
	///��¼����N/A
	TZQThostFtdcRecordNumType	RecordNum;
	///�Ự��ţ�N/A
	TZQThostFtdcSessionIDType	SessionID;
	///�����ţ�N/A
	TZQThostFtdcRequestIDType	RequestID;
};

///�����ʽ�ת�ڻ�����TradeCode=202001
struct CZQThostFtdcTransferBankToFutureReqField
{
	///�ڻ��ʽ��˻�
	TZQThostFtdcAccountIDType	FutureAccount;
	///�����־
	TZQThostFtdcFuturePwdFlagType	FuturePwdFlag;
	///����
	TZQThostFtdcFutureAccPwdType	FutureAccPwd;
	///ת�˽��
	TZQThostFtdcMoneyType	TradeAmt;
	///�ͻ�������
	TZQThostFtdcMoneyType	CustFee;
	///���֣�RMB-����� USD-��Բ HKD-��Ԫ
	TZQThostFtdcCurrencyCodeType	CurrencyCode;
};

///�����ʽ�ת�ڻ�������Ӧ
struct CZQThostFtdcTransferBankToFutureRspField
{
	///��Ӧ����
	TZQThostFtdcRetCodeType	RetCode;
	///��Ӧ��Ϣ
	TZQThostFtdcRetInfoType	RetInfo;
	///�ʽ��˻�
	TZQThostFtdcAccountIDType	FutureAccount;
	///ת�ʽ��
	TZQThostFtdcMoneyType	TradeAmt;
	///Ӧ�տͻ�������
	TZQThostFtdcMoneyType	CustFee;
	///����
	TZQThostFtdcCurrencyCodeType	CurrencyCode;
};

///�ڻ��ʽ�ת��������TradeCode=202002
struct CZQThostFtdcTransferFutureToBankReqField
{
	///�ڻ��ʽ��˻�
	TZQThostFtdcAccountIDType	FutureAccount;
	///�����־
	TZQThostFtdcFuturePwdFlagType	FuturePwdFlag;
	///����
	TZQThostFtdcFutureAccPwdType	FutureAccPwd;
	///ת�˽��
	TZQThostFtdcMoneyType	TradeAmt;
	///�ͻ�������
	TZQThostFtdcMoneyType	CustFee;
	///���֣�RMB-����� USD-��Բ HKD-��Ԫ
	TZQThostFtdcCurrencyCodeType	CurrencyCode;
};

///�ڻ��ʽ�ת����������Ӧ
struct CZQThostFtdcTransferFutureToBankRspField
{
	///��Ӧ����
	TZQThostFtdcRetCodeType	RetCode;
	///��Ӧ��Ϣ
	TZQThostFtdcRetInfoType	RetInfo;
	///�ʽ��˻�
	TZQThostFtdcAccountIDType	FutureAccount;
	///ת�ʽ��
	TZQThostFtdcMoneyType	TradeAmt;
	///Ӧ�տͻ�������
	TZQThostFtdcMoneyType	CustFee;
	///����
	TZQThostFtdcCurrencyCodeType	CurrencyCode;
};

///��ѯ�����ʽ�����TradeCode=204002
struct CZQThostFtdcTransferQryBankReqField
{
	///�ڻ��ʽ��˻�
	TZQThostFtdcAccountIDType	FutureAccount;
	///�����־
	TZQThostFtdcFuturePwdFlagType	FuturePwdFlag;
	///����
	TZQThostFtdcFutureAccPwdType	FutureAccPwd;
	///���֣�RMB-����� USD-��Բ HKD-��Ԫ
	TZQThostFtdcCurrencyCodeType	CurrencyCode;
};

///��ѯ�����ʽ�������Ӧ
struct CZQThostFtdcTransferQryBankRspField
{
	///��Ӧ����
	TZQThostFtdcRetCodeType	RetCode;
	///��Ӧ��Ϣ
	TZQThostFtdcRetInfoType	RetInfo;
	///�ʽ��˻�
	TZQThostFtdcAccountIDType	FutureAccount;
	///�������
	TZQThostFtdcMoneyType	TradeAmt;
	///���п������
	TZQThostFtdcMoneyType	UseAmt;
	///���п�ȡ���
	TZQThostFtdcMoneyType	FetchAmt;
	///����
	TZQThostFtdcCurrencyCodeType	CurrencyCode;
};

///��ѯ���н�����ϸ����TradeCode=204999
struct CZQThostFtdcTransferQryDetailReqField
{
	///�ڻ��ʽ��˻�
	TZQThostFtdcAccountIDType	FutureAccount;
};

///��ѯ���н�����ϸ������Ӧ
struct CZQThostFtdcTransferQryDetailRspField
{
	///��������
	TZQThostFtdcDateType	TradeDate;
	///����ʱ��
	TZQThostFtdcTradeTimeType	TradeTime;
	///���״���
	TZQThostFtdcTradeCodeType	TradeCode;
	///�ڻ���ˮ��
	TZQThostFtdcTradeSerialNoType	FutureSerial;
	///�ڻ���˾����
	TZQThostFtdcFutureIDType	FutureID;
	///�ʽ��ʺ�
	TZQThostFtdcFutureAccountType	FutureAccount;
	///������ˮ��
	TZQThostFtdcTradeSerialNoType	BankSerial;
	///���д���
	TZQThostFtdcBankIDType	BankID;
	///���з����Ĵ���
	TZQThostFtdcBankBrchIDType	BankBrchID;
	///�����˺�
	TZQThostFtdcBankAccountType	BankAccount;
	///֤������
	TZQThostFtdcCertCodeType	CertCode;
	///���Ҵ���
	TZQThostFtdcCurrencyCodeType	CurrencyCode;
	///�������
	TZQThostFtdcMoneyType	TxAmount;
	///��Ч��־
	TZQThostFtdcTransferValidFlagType	Flag;
};

///��Ӧ��Ϣ
struct CZQThostFtdcRspInfoField
{
	///�������
	TZQThostFtdcErrorIDType	ErrorID;
	///������Ϣ
	TZQThostFtdcErrorMsgType	ErrorMsg;
};

///������
struct CZQThostFtdcExchangeField
{
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///����������
	TZQThostFtdcExchangeNameType	ExchangeName;
	///����������
	TZQThostFtdcExchangePropertyType	ExchangeProperty;
};

///��Ʒ
struct CZQThostFtdcProductField
{
	///��Ʒ����
	TZQThostFtdcInstrumentIDType	ProductID;
	///��Ʒ����
	TZQThostFtdcProductNameType	ProductName;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///��Ʒ����
	TZQThostFtdcProductClassType	ProductClass;
	///��Լ��������
	TZQThostFtdcVolumeMultipleType	VolumeMultiple;
	///��С�䶯��λ
	TZQThostFtdcPriceType	PriceTick;
	///�м۵�����µ���
	TZQThostFtdcVolumeType	MaxMarketOrderVolume;
	///�м۵���С�µ���
	TZQThostFtdcVolumeType	MinMarketOrderVolume;
	///�޼۵�����µ���
	TZQThostFtdcVolumeType	MaxLimitOrderVolume;
	///�޼۵���С�µ���
	TZQThostFtdcVolumeType	MinLimitOrderVolume;
	///�ֲ�����
	TZQThostFtdcPositionTypeType	PositionType;
	///�ֲ���������
	TZQThostFtdcPositionDateTypeType	PositionDateType;
	///ETF��С���׵�λ
	TZQThostFtdcVolumeType	EFTMinTradeVolume;
};

///��Լ
struct CZQThostFtdcInstrumentField
{
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TZQThostFtdcInstrumentNameType	InstrumentName;
	///��Լ�ڽ������Ĵ���
	TZQThostFtdcExchangeInstIDType	ExchangeInstID;
	///��Ʒ����
	TZQThostFtdcInstrumentIDType	ProductID;
	///��Ʒ����
	TZQThostFtdcProductClassType	ProductClass;
	///�������
	TZQThostFtdcYearType	DeliveryYear;
	///������
	TZQThostFtdcMonthType	DeliveryMonth;
	///�м۵�����µ���
	TZQThostFtdcVolumeType	MaxMarketOrderVolume;
	///�м۵���С�µ���
	TZQThostFtdcVolumeType	MinMarketOrderVolume;
	///�޼۵�����µ���
	TZQThostFtdcVolumeType	MaxLimitOrderVolume;
	///�޼۵���С�µ���
	TZQThostFtdcVolumeType	MinLimitOrderVolume;
	///��Լ��������
	TZQThostFtdcVolumeMultipleType	VolumeMultiple;
	///��С�䶯��λ
	TZQThostFtdcPriceType	PriceTick;
	///������
	TZQThostFtdcDateType	CreateDate;
	///������
	TZQThostFtdcDateType	OpenDate;
	///������
	TZQThostFtdcDateType	ExpireDate;
	///��ʼ������
	TZQThostFtdcDateType	StartDelivDate;
	///����������
	TZQThostFtdcDateType	EndDelivDate;
	///��Լ��������״̬
	TZQThostFtdcInstLifePhaseType	InstLifePhase;
	///��ǰ�Ƿ���
	TZQThostFtdcBoolType	IsTrading;
	///�ֲ�����
	TZQThostFtdcPositionTypeType	PositionType;
	///�ֲ���������
	TZQThostFtdcPositionDateTypeType	PositionDateType;
	///�����ܷ񳷵�
	TZQThostFtdcBoolType	OrderCanBeWithdraw;
	///��С���µ���λ
	TZQThostFtdcVolumeType	MinBuyVolume;
	///��С���µ���λ
	TZQThostFtdcVolumeType	MinSellVolume;
	///��ƱȨ��ģ�����
	TZQThostFtdcRightModelIDType	RightModelID;
};

///���͹�˾
struct CZQThostFtdcBrokerField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///���͹�˾���
	TZQThostFtdcBrokerAbbrType	BrokerAbbr;
	///���͹�˾����
	TZQThostFtdcBrokerNameType	BrokerName;
	///�Ƿ��Ծ
	TZQThostFtdcBoolType	IsActive;
};

///����������Ա
struct CZQThostFtdcTraderField
{
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///����������Ա����
	TZQThostFtdcTraderIDType	TraderID;
	///��Ա����
	TZQThostFtdcParticipantIDType	ParticipantID;
	///����
	TZQThostFtdcPasswordType	Password;
	///��װ����
	TZQThostFtdcInstallCountType	InstallCount;
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ӫҵ�����
	TZQThostFtdcBranchIDType	BranchID;
};

///Ͷ����
struct CZQThostFtdcInvestorField
{
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���߷������
	TZQThostFtdcInvestorIDType	InvestorGroupID;
	///Ͷ��������
	TZQThostFtdcPartyNameType	InvestorName;
	///֤������
	TZQThostFtdcIdCardTypeType	IdentifiedCardType;
	///֤������
	TZQThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�Ƿ��Ծ
	TZQThostFtdcBoolType	IsActive;
	///��ϵ�绰
	TZQThostFtdcTelephoneType	Telephone;
	///ͨѶ��ַ
	TZQThostFtdcAddressType	Address;
	///��������
	TZQThostFtdcDateType	OpenDate;
	///�ֻ�
	TZQThostFtdcMobileType	Mobile;
	///�Ϻ�Ӫҵ�����
	TZQThostFtdcBranchIDType	SHBranchID;
	///����Ӫҵ�����
	TZQThostFtdcBranchIDType	SZBranchID;
	///�Ƿ������˻�
	TZQThostFtdcBoolType	IsCreditAccount;
};

///���ױ���
struct CZQThostFtdcTradingCodeField
{
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�ͻ�����
	TZQThostFtdcClientIDType	ClientID;
	///�Ƿ��Ծ
	TZQThostFtdcBoolType	IsActive;
};

///��Ա����;��͹�˾������ձ�
struct CZQThostFtdcPartBrokerField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///��Ա����
	TZQThostFtdcParticipantIDType	ParticipantID;
	///�Ƿ��Ծ
	TZQThostFtdcBoolType	IsActive;
};

///�����û�
struct CZQThostFtdcSuperUserField
{
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///�û�����
	TZQThostFtdcUserNameType	UserName;
	///����
	TZQThostFtdcPasswordType	Password;
	///�Ƿ��Ծ
	TZQThostFtdcBoolType	IsActive;
};

///�����û�����Ȩ��
struct CZQThostFtdcSuperUserFunctionField
{
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///���ܴ���
	TZQThostFtdcFunctionCodeType	FunctionCode;
};

///Ͷ������
struct CZQThostFtdcInvestorGroupField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���߷������
	TZQThostFtdcInvestorIDType	InvestorGroupID;
	///Ͷ���߷�������
	TZQThostFtdcInvestorGroupNameType	InvestorGroupName;
};

///�ʽ��˻�
struct CZQThostFtdcTradingAccountField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ�����ʺ�
	TZQThostFtdcAccountIDType	AccountID;
	///�ϴ���Ѻ���
	TZQThostFtdcMoneyType	PreMortgage;
	///�ϴ����ö��
	TZQThostFtdcMoneyType	PreCredit;
	///�ϴδ���
	TZQThostFtdcMoneyType	PreDeposit;
	///�ϴν���׼����
	TZQThostFtdcMoneyType	PreBalance;
	///�ϴ�ռ�õı�֤��
	TZQThostFtdcMoneyType	PreMargin;
	///��Ϣ����
	TZQThostFtdcMoneyType	InterestBase;
	///��Ϣ����
	TZQThostFtdcMoneyType	Interest;
	///�����
	TZQThostFtdcMoneyType	Deposit;
	///������
	TZQThostFtdcMoneyType	Withdraw;
	///����ı�֤��
	TZQThostFtdcMoneyType	FrozenMargin;
	///������ʽ�
	TZQThostFtdcMoneyType	FrozenCash;
	///�����������
	TZQThostFtdcMoneyType	FrozenCommission;
	///��ǰ��֤���ܶ�
	TZQThostFtdcMoneyType	CurrMargin;
	///�ʽ���
	TZQThostFtdcMoneyType	CashIn;
	///������
	TZQThostFtdcMoneyType	Commission;
	///��ȯ�ֲ�ӯ��
	TZQThostFtdcMoneyType	CloseProfit;
	///���ʳֲ�ӯ��
	TZQThostFtdcMoneyType	PositionProfit;
	///�ڻ�����׼����
	TZQThostFtdcMoneyType	Balance;
	///�ֽ�
	TZQThostFtdcMoneyType	Available;
	///��ȡ�ʽ�
	TZQThostFtdcMoneyType	WithdrawQuota;
	///����׼����
	TZQThostFtdcMoneyType	Reserve;
	///������
	TZQThostFtdcDateType	TradingDay;
	///������
	TZQThostFtdcSettlementIDType	SettlementID;
	///��֤��������
	TZQThostFtdcMoneyType	Credit;
	///��Ѻ���
	TZQThostFtdcMoneyType	Mortgage;
	///��������֤��
	TZQThostFtdcMoneyType	ExchangeMargin;
	///Ͷ���߽��֤��
	TZQThostFtdcMoneyType	DeliveryMargin;
	///���������֤��
	TZQThostFtdcMoneyType	ExchangeDeliveryMargin;
	///����Ĺ�����
	TZQThostFtdcMoneyType	FrozenTransferFee;
	///�����ӡ��˰
	TZQThostFtdcMoneyType	FrozenStampTax;
	///������
	TZQThostFtdcMoneyType	TransferFee;
	///ӡ��˰
	TZQThostFtdcMoneyType	StampTax;
	///������
	TZQThostFtdcMoneyType	ConversionAmount;
	///���Ŷ��
	TZQThostFtdcMoneyType	CreditAmount;
	///���ά�ֵ�������
	TZQThostFtdcRatioType	LowLimitRatio;
	///����������
	TZQThostFtdcMoneyType	MarginTradingAmount;
	///��ȯ�������
	TZQThostFtdcMoneyType	ShortSellingAmount;
	///����������ý��
	TZQThostFtdcMoneyType	MarginTradingAvail;
	///��ȯ�������ý��
	TZQThostFtdcMoneyType	ShortSellingAvail;
	///ά�ֵ�������
	TZQThostFtdcRatioType	CreditRatio;
	///֤ȯ�ܼ�ֵ
	TZQThostFtdcMoneyType	StockValue;
	///��ȯ����ֵ
	TZQThostFtdcMoneyType	SSStockValue;
	///ծȯ���ع��ʽ�
	TZQThostFtdcMoneyType	BondRepurchaseAmount;
	///ծȯ��ع�ռ���ʽ�
	TZQThostFtdcMoneyType	ReverseRepurchaseAmount;
};

///Ͷ���ֲ߳�
struct CZQThostFtdcInvestorPositionField
{
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///�ֲֶ�շ���
	TZQThostFtdcPosiDirectionType	PosiDirection;
	///Ͷ���ױ���־
	TZQThostFtdcHedgeFlagType	HedgeFlag;
	///�ֲ�����
	TZQThostFtdcPositionDateType	PositionDate;
	///���ճֲ�
	TZQThostFtdcVolumeType	YdPosition;
	///���ճֲ�
	TZQThostFtdcVolumeType	Position;
	///��ͷ����
	TZQThostFtdcVolumeType	LongFrozen;
	///��ͷ����
	TZQThostFtdcVolumeType	ShortFrozen;
	///���ֶ�����
	TZQThostFtdcMoneyType	LongFrozenAmount;
	///���ֶ�����
	TZQThostFtdcMoneyType	ShortFrozenAmount;
	///������
	TZQThostFtdcVolumeType	OpenVolume;
	///ƽ����
	TZQThostFtdcVolumeType	CloseVolume;
	///���ֽ��
	TZQThostFtdcMoneyType	OpenAmount;
	///ƽ�ֽ��
	TZQThostFtdcMoneyType	CloseAmount;
	///�ֲֳɱ�
	TZQThostFtdcMoneyType	PositionCost;
	///������ʽ�
	TZQThostFtdcMoneyType	FrozenCash;
	///�ʽ���
	TZQThostFtdcMoneyType	CashIn;
	///������
	TZQThostFtdcMoneyType	Commission;
	///ƽ��ӯ��
	TZQThostFtdcMoneyType	CloseProfit;
	///�ֲ�ӯ��
	TZQThostFtdcMoneyType	PositionProfit;
	///�ϴν����
	TZQThostFtdcPriceType	PreSettlementPrice;
	///���ν����
	TZQThostFtdcPriceType	SettlementPrice;
	///������
	TZQThostFtdcDateType	TradingDay;
	///������
	TZQThostFtdcSettlementIDType	SettlementID;
	///���ֳɱ�
	TZQThostFtdcMoneyType	OpenCost;
	///��������֤��
	TZQThostFtdcMoneyType	ExchangeMargin;
	///���ճֲ�
	TZQThostFtdcVolumeType	TodayPosition;
	///������
	TZQThostFtdcMoneyType	TransferFee;
	///ӡ��˰
	TZQThostFtdcMoneyType	StampTax;
	///�����깺�������
	TZQThostFtdcVolumeType	TodayPurRedVolume;
	///������
	TZQThostFtdcRatioType	ConversionRate;
	///������
	TZQThostFtdcMoneyType	ConversionAmount;
	///�������������
	TZQThostFtdcVolumeType	MarginTradeVolume;
	///����������
	TZQThostFtdcMoneyType	MarginTradeAmount;
	///�������붳������
	TZQThostFtdcVolumeType	MarginTradeFrozenVolume;
	///�������붳����
	TZQThostFtdcMoneyType	MarginTradeFrozenAmount;
	///��������ӯ��
	TZQThostFtdcMoneyType	MarginTradeConversionAmount;
	///��ȯ��������
	TZQThostFtdcVolumeType	ShortSellVolume;
	///��ȯ�������
	TZQThostFtdcMoneyType	ShortSellAmount;
	///��ȯ����ӯ��
	TZQThostFtdcMoneyType	ShortSellConversionAmount;
	///��ȯ������������
	TZQThostFtdcVolumeType	ShortSellFrozenVolume;
	///��ȯ����������
	TZQThostFtdcMoneyType	ShortSellFrozenAmount;
	///֤ȯ��ֵ
	TZQThostFtdcMoneyType	StockValue;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�������ʳֲ�
	TZQThostFtdcVolumeType	TodayMTPosition;
	///������ȯ�ֲ�
	TZQThostFtdcVolumeType	TodaySSPosition;
	///��ȯ����ֵ
	TZQThostFtdcMoneyType	SSStockValue;
	///��Ѻ�������
	TZQThostFtdcVolumeType	PledgeInPosition;
	///������Ѻ��ⶳ������
	TZQThostFtdcVolumeType	PledgeInFrozenPosition;
	///���ع�ʹ�õı�׼ȯ����
	TZQThostFtdcVolumeType	RepurchasePosition;
};

///��Լ��֤����
struct CZQThostFtdcInstrumentMarginRateField
{
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///Ͷ���߷�Χ
	TZQThostFtdcInvestorRangeType	InvestorRange;
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///Ͷ���ױ���־
	TZQThostFtdcHedgeFlagType	HedgeFlag;
	///��ͷ��֤����
	TZQThostFtdcRatioType	LongMarginRatioByMoney;
	///��ͷ��֤���
	TZQThostFtdcMoneyType	LongMarginRatioByVolume;
	///��ͷ��֤����
	TZQThostFtdcRatioType	ShortMarginRatioByMoney;
	///��ͷ��֤���
	TZQThostFtdcMoneyType	ShortMarginRatioByVolume;
	///�Ƿ���Խ�������ȡ
	TZQThostFtdcBoolType	IsRelative;
};

///��Լ��������
struct CZQThostFtdcInstrumentCommissionRateField
{
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///Ͷ���߷�Χ
	TZQThostFtdcInvestorRangeType	InvestorRange;
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///��������
	TZQThostFtdcDirectionType	Direction;
	///ӡ��˰��
	TZQThostFtdcRatioType	StampTaxRateByMoney;
	///ӡ��˰��(������)
	TZQThostFtdcRatioType	StampTaxRateByVolume;
	///��������
	TZQThostFtdcRatioType	TransferFeeRateByMoney;
	///��������(������)
	TZQThostFtdcRatioType	TransferFeeRateByVolume;
	///���׷�
	TZQThostFtdcRatioType	TradeFeeByMoney;
	///���׷�(������)
	TZQThostFtdcRatioType	TradeFeeByVolume;
	///���׸��ӷ���
	TZQThostFtdcRatioType	MarginByMoney;
	///��С������
	TZQThostFtdcPriceType	MinTradeFee;
};

///�������
struct CZQThostFtdcDepthMarketDataField
{
	///������
	TZQThostFtdcDateType	TradingDay;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///��Լ�ڽ������Ĵ���
	TZQThostFtdcExchangeInstIDType	ExchangeInstID;
	///���¼�
	TZQThostFtdcPriceType	LastPrice;
	///�ϴν����
	TZQThostFtdcPriceType	PreSettlementPrice;
	///������
	TZQThostFtdcPriceType	PreClosePrice;
	///��ֲ���
	TZQThostFtdcLargeVolumeType	PreOpenInterest;
	///����
	TZQThostFtdcPriceType	OpenPrice;
	///��߼�
	TZQThostFtdcPriceType	HighestPrice;
	///��ͼ�
	TZQThostFtdcPriceType	LowestPrice;
	///����
	TZQThostFtdcVolumeType	Volume;
	///�ɽ����
	TZQThostFtdcMoneyType	Turnover;
	///�ֲ���
	TZQThostFtdcLargeVolumeType	OpenInterest;
	///������
	TZQThostFtdcPriceType	ClosePrice;
	///���ν����
	TZQThostFtdcPriceType	SettlementPrice;
	///��ͣ���
	TZQThostFtdcPriceType	UpperLimitPrice;
	///��ͣ���
	TZQThostFtdcPriceType	LowerLimitPrice;
	///����ʵ��
	TZQThostFtdcRatioType	PreDelta;
	///����ʵ��
	TZQThostFtdcRatioType	CurrDelta;
	///����޸�ʱ��
	TZQThostFtdcTimeType	UpdateTime;
	///����޸ĺ���
	TZQThostFtdcMillisecType	UpdateMillisec;
	///�����һ
	TZQThostFtdcPriceType	BidPrice1;
	///������һ
	TZQThostFtdcVolumeType	BidVolume1;
	///������һ
	TZQThostFtdcPriceType	AskPrice1;
	///������һ
	TZQThostFtdcVolumeType	AskVolume1;
	///����۶�
	TZQThostFtdcPriceType	BidPrice2;
	///��������
	TZQThostFtdcVolumeType	BidVolume2;
	///�����۶�
	TZQThostFtdcPriceType	AskPrice2;
	///��������
	TZQThostFtdcVolumeType	AskVolume2;
	///�������
	TZQThostFtdcPriceType	BidPrice3;
	///��������
	TZQThostFtdcVolumeType	BidVolume3;
	///��������
	TZQThostFtdcPriceType	AskPrice3;
	///��������
	TZQThostFtdcVolumeType	AskVolume3;
	///�������
	TZQThostFtdcPriceType	BidPrice4;
	///��������
	TZQThostFtdcVolumeType	BidVolume4;
	///��������
	TZQThostFtdcPriceType	AskPrice4;
	///��������
	TZQThostFtdcVolumeType	AskVolume4;
	///�������
	TZQThostFtdcPriceType	BidPrice5;
	///��������
	TZQThostFtdcVolumeType	BidVolume5;
	///��������
	TZQThostFtdcPriceType	AskPrice5;
	///��������
	TZQThostFtdcVolumeType	AskVolume5;
	///���վ���
	TZQThostFtdcPriceType	AveragePrice;
};

///Ͷ���ߺ�Լ����Ȩ��
struct CZQThostFtdcInstrumentTradingRightField
{
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///Ͷ���߷�Χ
	TZQThostFtdcInvestorRangeType	InvestorRange;
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///����
	TZQThostFtdcDirectionType	Direction;
	///����Ȩ��
	TZQThostFtdcTradingRightType	TradingRight;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///��ƱȨ�޷���
	TZQThostFtdcInstrumentRangeType	InstrumentRange;
};

///���͹�˾�û�
struct CZQThostFtdcBrokerUserField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///�û�����
	TZQThostFtdcUserNameType	UserName;
	///�û�����
	TZQThostFtdcUserTypeType	UserType;
	///�Ƿ��Ծ
	TZQThostFtdcBoolType	IsActive;
	///�Ƿ�ʹ������
	TZQThostFtdcBoolType	IsUsingOTP;
};

///���͹�˾�û�����
struct CZQThostFtdcBrokerUserPasswordField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///����
	TZQThostFtdcPasswordType	Password;
};

///���͹�˾�û�����Ȩ��
struct CZQThostFtdcBrokerUserFunctionField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///���͹�˾���ܴ���
	TZQThostFtdcBrokerFunctionCodeType	BrokerFunctionCode;
};

///����������Ա���̻�
struct CZQThostFtdcTraderOfferField
{
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///����������Ա����
	TZQThostFtdcTraderIDType	TraderID;
	///��Ա����
	TZQThostFtdcParticipantIDType	ParticipantID;
	///����
	TZQThostFtdcPasswordType	Password;
	///��װ���
	TZQThostFtdcInstallIDType	InstallID;
	///���ر������
	TZQThostFtdcOrderLocalIDType	OrderLocalID;
	///����������Ա����״̬
	TZQThostFtdcTraderConnectStatusType	TraderConnectStatus;
	///�����������������
	TZQThostFtdcDateType	ConnectRequestDate;
	///�������������ʱ��
	TZQThostFtdcTimeType	ConnectRequestTime;
	///�ϴα�������
	TZQThostFtdcDateType	LastReportDate;
	///�ϴα���ʱ��
	TZQThostFtdcTimeType	LastReportTime;
	///�����������
	TZQThostFtdcDateType	ConnectDate;
	///�������ʱ��
	TZQThostFtdcTimeType	ConnectTime;
	///��������
	TZQThostFtdcDateType	StartDate;
	///����ʱ��
	TZQThostFtdcTimeType	StartTime;
	///������
	TZQThostFtdcDateType	TradingDay;
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ӫҵ�����
	TZQThostFtdcBranchIDType	BranchID;
};

///Ͷ���߽�����
struct CZQThostFtdcSettlementInfoField
{
	///������
	TZQThostFtdcDateType	TradingDay;
	///������
	TZQThostFtdcSettlementIDType	SettlementID;
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///���
	TZQThostFtdcSequenceNoType	SequenceNo;
	///��Ϣ����
	TZQThostFtdcContentType	Content;
};

///��Լ��֤���ʵ���
struct CZQThostFtdcInstrumentMarginRateAdjustField
{
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///Ͷ���߷�Χ
	TZQThostFtdcInvestorRangeType	InvestorRange;
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///Ͷ���ױ���־
	TZQThostFtdcHedgeFlagType	HedgeFlag;
	///��ͷ��֤����
	TZQThostFtdcRatioType	LongMarginRatioByMoney;
	///��ͷ��֤���
	TZQThostFtdcMoneyType	LongMarginRatioByVolume;
	///��ͷ��֤����
	TZQThostFtdcRatioType	ShortMarginRatioByMoney;
	///��ͷ��֤���
	TZQThostFtdcMoneyType	ShortMarginRatioByVolume;
	///�Ƿ���Խ�������ȡ
	TZQThostFtdcBoolType	IsRelative;
};

///��������֤����
struct CZQThostFtdcExchangeMarginRateField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///Ͷ���ױ���־
	TZQThostFtdcHedgeFlagType	HedgeFlag;
	///��ͷ��֤����
	TZQThostFtdcRatioType	LongMarginRatioByMoney;
	///��ͷ��֤���
	TZQThostFtdcMoneyType	LongMarginRatioByVolume;
	///��ͷ��֤����
	TZQThostFtdcRatioType	ShortMarginRatioByMoney;
	///��ͷ��֤���
	TZQThostFtdcMoneyType	ShortMarginRatioByVolume;
};

///��������֤���ʵ���
struct CZQThostFtdcExchangeMarginRateAdjustField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///Ͷ���ױ���־
	TZQThostFtdcHedgeFlagType	HedgeFlag;
	///���潻����Ͷ���߶�ͷ��֤����
	TZQThostFtdcRatioType	LongMarginRatioByMoney;
	///���潻����Ͷ���߶�ͷ��֤���
	TZQThostFtdcMoneyType	LongMarginRatioByVolume;
	///���潻����Ͷ���߿�ͷ��֤����
	TZQThostFtdcRatioType	ShortMarginRatioByMoney;
	///���潻����Ͷ���߿�ͷ��֤���
	TZQThostFtdcMoneyType	ShortMarginRatioByVolume;
	///��������ͷ��֤����
	TZQThostFtdcRatioType	ExchLongMarginRatioByMoney;
	///��������ͷ��֤���
	TZQThostFtdcMoneyType	ExchLongMarginRatioByVolume;
	///��������ͷ��֤����
	TZQThostFtdcRatioType	ExchShortMarginRatioByMoney;
	///��������ͷ��֤���
	TZQThostFtdcMoneyType	ExchShortMarginRatioByVolume;
	///�����潻����Ͷ���߶�ͷ��֤����
	TZQThostFtdcRatioType	NoLongMarginRatioByMoney;
	///�����潻����Ͷ���߶�ͷ��֤���
	TZQThostFtdcMoneyType	NoLongMarginRatioByVolume;
	///�����潻����Ͷ���߿�ͷ��֤����
	TZQThostFtdcRatioType	NoShortMarginRatioByMoney;
	///�����潻����Ͷ���߿�ͷ��֤���
	TZQThostFtdcMoneyType	NoShortMarginRatioByVolume;
};

///��������
struct CZQThostFtdcSettlementRefField
{
	///������
	TZQThostFtdcDateType	TradingDay;
	///������
	TZQThostFtdcSettlementIDType	SettlementID;
};

///��ǰʱ��
struct CZQThostFtdcCurrentTimeField
{
	///��ǰ����
	TZQThostFtdcDateType	CurrDate;
	///��ǰʱ��
	TZQThostFtdcTimeType	CurrTime;
	///��ǰʱ�䣨���룩
	TZQThostFtdcMillisecType	CurrMillisec;
};

///ͨѶ�׶�
struct CZQThostFtdcCommPhaseField
{
	///������
	TZQThostFtdcDateType	TradingDay;
	///ͨѶʱ�α��
	TZQThostFtdcCommPhaseNoType	CommPhaseNo;
};

///��¼��Ϣ
struct CZQThostFtdcLoginInfoField
{
	///ǰ�ñ��
	TZQThostFtdcFrontIDType	FrontID;
	///�Ự���
	TZQThostFtdcSessionIDType	SessionID;
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///��¼����
	TZQThostFtdcDateType	LoginDate;
	///��¼ʱ��
	TZQThostFtdcTimeType	LoginTime;
	///IP��ַ
	TZQThostFtdcIPAddressType	IPAddress;
	///�û��˲�Ʒ��Ϣ
	TZQThostFtdcProductInfoType	UserProductInfo;
	///�ӿڶ˲�Ʒ��Ϣ
	TZQThostFtdcProductInfoType	InterfaceProductInfo;
	///Э����Ϣ
	TZQThostFtdcProtocolInfoType	ProtocolInfo;
	///ϵͳ����
	TZQThostFtdcSystemNameType	SystemName;
	///����
	TZQThostFtdcPasswordType	Password;
	///��󱨵�����
	TZQThostFtdcOrderRefType	MaxOrderRef;
	///Mac��ַ
	TZQThostFtdcMacAddressType	MacAddress;
	///��̬����
	TZQThostFtdcPasswordType	OneTimePassword;
};

///��¼��Ϣ
struct CZQThostFtdcLogoutAllField
{
	///ǰ�ñ��
	TZQThostFtdcFrontIDType	FrontID;
	///�Ự���
	TZQThostFtdcSessionIDType	SessionID;
	///ϵͳ����
	TZQThostFtdcSystemNameType	SystemName;
};

///ǰ��״̬
struct CZQThostFtdcFrontStatusField
{
	///ǰ�ñ��
	TZQThostFtdcFrontIDType	FrontID;
	///�ϴα�������
	TZQThostFtdcDateType	LastReportDate;
	///�ϴα���ʱ��
	TZQThostFtdcTimeType	LastReportTime;
	///�Ƿ��Ծ
	TZQThostFtdcBoolType	IsActive;
};

///�û�������
struct CZQThostFtdcUserPasswordUpdateField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///ԭ���Ŀ���
	TZQThostFtdcPasswordType	OldPassword;
	///�µĿ���
	TZQThostFtdcPasswordType	NewPassword;
};

///���뱨��
struct CZQThostFtdcInputOrderField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///��������
	TZQThostFtdcOrderRefType	OrderRef;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�����۸�����
	TZQThostFtdcOrderPriceTypeType	OrderPriceType;
	///��������
	TZQThostFtdcDirectionType	Direction;
	///��Ͽ�ƽ��־
	TZQThostFtdcCombOffsetFlagType	CombOffsetFlag;
	///���Ͷ���ױ���־
	TZQThostFtdcCombHedgeFlagType	CombHedgeFlag;
	///�۸�
	TZQThostFtdcStockPriceType	LimitPrice;
	///����
	TZQThostFtdcVolumeType	VolumeTotalOriginal;
	///��Ч������
	TZQThostFtdcTimeConditionType	TimeCondition;
	///GTD����
	TZQThostFtdcDateType	GTDDate;
	///�ɽ�������
	TZQThostFtdcVolumeConditionType	VolumeCondition;
	///��С�ɽ���
	TZQThostFtdcVolumeType	MinVolume;
	///��������
	TZQThostFtdcContingentConditionType	ContingentCondition;
	///ֹ���
	TZQThostFtdcPriceType	StopPrice;
	///ǿƽԭ��
	TZQThostFtdcForceCloseReasonType	ForceCloseReason;
	///�Զ������־
	TZQThostFtdcBoolType	IsAutoSuspend;
	///ҵ��Ԫ
	TZQThostFtdcBusinessUnitType	BusinessUnit;
	///������
	TZQThostFtdcRequestIDType	RequestID;
	///�û�ǿ����־
	TZQThostFtdcBoolType	UserForceClose;
};

///����
struct CZQThostFtdcOrderField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///��������
	TZQThostFtdcOrderRefType	OrderRef;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�����۸�����
	TZQThostFtdcOrderPriceTypeType	OrderPriceType;
	///��������
	TZQThostFtdcDirectionType	Direction;
	///��Ͽ�ƽ��־
	TZQThostFtdcCombOffsetFlagType	CombOffsetFlag;
	///���Ͷ���ױ���־
	TZQThostFtdcCombHedgeFlagType	CombHedgeFlag;
	///�۸�
	TZQThostFtdcStockPriceType	LimitPrice;
	///����
	TZQThostFtdcVolumeType	VolumeTotalOriginal;
	///��Ч������
	TZQThostFtdcTimeConditionType	TimeCondition;
	///GTD����
	TZQThostFtdcDateType	GTDDate;
	///�ɽ�������
	TZQThostFtdcVolumeConditionType	VolumeCondition;
	///��С�ɽ���
	TZQThostFtdcVolumeType	MinVolume;
	///��������
	TZQThostFtdcContingentConditionType	ContingentCondition;
	///ֹ���
	TZQThostFtdcPriceType	StopPrice;
	///ǿƽԭ��
	TZQThostFtdcForceCloseReasonType	ForceCloseReason;
	///�Զ������־
	TZQThostFtdcBoolType	IsAutoSuspend;
	///ҵ��Ԫ
	TZQThostFtdcBusinessUnitType	BusinessUnit;
	///������
	TZQThostFtdcRequestIDType	RequestID;
	///���ر������
	TZQThostFtdcOrderLocalIDType	OrderLocalID;
	///��Ա����
	TZQThostFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TZQThostFtdcClientIDType	ClientID;
	///��Լ�ڽ������Ĵ���
	TZQThostFtdcExchangeInstIDType	ExchangeInstID;
	///����������Ա����
	TZQThostFtdcTraderIDType	TraderID;
	///��װ���
	TZQThostFtdcInstallIDType	InstallID;
	///�����ύ״̬
	TZQThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
	///������ʾ���
	TZQThostFtdcSequenceNoType	NotifySequence;
	///������
	TZQThostFtdcDateType	TradingDay;
	///������
	TZQThostFtdcSettlementIDType	SettlementID;
	///�������
	TZQThostFtdcOrderSysIDType	OrderSysID;
	///������Դ
	TZQThostFtdcOrderSourceType	OrderSource;
	///����״̬
	TZQThostFtdcOrderStatusType	OrderStatus;
	///��������
	TZQThostFtdcOrderTypeType	OrderType;
	///��ɽ�����
	TZQThostFtdcVolumeType	VolumeTraded;
	///ʣ������
	TZQThostFtdcVolumeType	VolumeTotal;
	///��������
	TZQThostFtdcDateType	InsertDate;
	///ί��ʱ��
	TZQThostFtdcTimeType	InsertTime;
	///����ʱ��
	TZQThostFtdcTimeType	ActiveTime;
	///����ʱ��
	TZQThostFtdcTimeType	SuspendTime;
	///����޸�ʱ��
	TZQThostFtdcTimeType	UpdateTime;
	///����ʱ��
	TZQThostFtdcTimeType	CancelTime;
	///����޸Ľ���������Ա����
	TZQThostFtdcTraderIDType	ActiveTraderID;
	///�����Ա���
	TZQThostFtdcParticipantIDType	ClearingPartID;
	///���
	TZQThostFtdcSequenceNoType	SequenceNo;
	///ǰ�ñ��
	TZQThostFtdcFrontIDType	FrontID;
	///�Ự���
	TZQThostFtdcSessionIDType	SessionID;
	///�û��˲�Ʒ��Ϣ
	TZQThostFtdcProductInfoType	UserProductInfo;
	///״̬��Ϣ
	TZQThostFtdcErrorMsgType	StatusMsg;
	///�û�ǿ����־
	TZQThostFtdcBoolType	UserForceClose;
	///�����û�����
	TZQThostFtdcUserIDType	ActiveUserID;
	///���͹�˾�������
	TZQThostFtdcSequenceNoType	BrokerOrderSeq;
	///��ر���
	TZQThostFtdcOrderSysIDType	RelativeOrderSysID;
	///Ӫҵ�����
	TZQThostFtdcBranchIDType	BranchID;
	///�ɽ�����
	TZQThostFtdcMoneyType	TradeAmount;
	///�Ƿ�ETF
	TZQThostFtdcBoolType	IsETF;
	///�ʽ��ʺ�
	TZQThostFtdcAccountIDType	AccountID;
};

///����������
struct CZQThostFtdcExchangeOrderField
{
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�����۸�����
	TZQThostFtdcOrderPriceTypeType	OrderPriceType;
	///��������
	TZQThostFtdcDirectionType	Direction;
	///��Ͽ�ƽ��־
	TZQThostFtdcCombOffsetFlagType	CombOffsetFlag;
	///���Ͷ���ױ���־
	TZQThostFtdcCombHedgeFlagType	CombHedgeFlag;
	///�۸�
	TZQThostFtdcStockPriceType	LimitPrice;
	///����
	TZQThostFtdcVolumeType	VolumeTotalOriginal;
	///��Ч������
	TZQThostFtdcTimeConditionType	TimeCondition;
	///GTD����
	TZQThostFtdcDateType	GTDDate;
	///�ɽ�������
	TZQThostFtdcVolumeConditionType	VolumeCondition;
	///��С�ɽ���
	TZQThostFtdcVolumeType	MinVolume;
	///��������
	TZQThostFtdcContingentConditionType	ContingentCondition;
	///ֹ���
	TZQThostFtdcPriceType	StopPrice;
	///ǿƽԭ��
	TZQThostFtdcForceCloseReasonType	ForceCloseReason;
	///�Զ������־
	TZQThostFtdcBoolType	IsAutoSuspend;
	///ҵ��Ԫ
	TZQThostFtdcBusinessUnitType	BusinessUnit;
	///������
	TZQThostFtdcRequestIDType	RequestID;
	///���ر������
	TZQThostFtdcOrderLocalIDType	OrderLocalID;
	///��Ա����
	TZQThostFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TZQThostFtdcClientIDType	ClientID;
	///��Լ�ڽ������Ĵ���
	TZQThostFtdcExchangeInstIDType	ExchangeInstID;
	///����������Ա����
	TZQThostFtdcTraderIDType	TraderID;
	///��װ���
	TZQThostFtdcInstallIDType	InstallID;
	///�����ύ״̬
	TZQThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
	///������ʾ���
	TZQThostFtdcSequenceNoType	NotifySequence;
	///������
	TZQThostFtdcDateType	TradingDay;
	///������
	TZQThostFtdcSettlementIDType	SettlementID;
	///�������
	TZQThostFtdcOrderSysIDType	OrderSysID;
	///������Դ
	TZQThostFtdcOrderSourceType	OrderSource;
	///����״̬
	TZQThostFtdcOrderStatusType	OrderStatus;
	///��������
	TZQThostFtdcOrderTypeType	OrderType;
	///��ɽ�����
	TZQThostFtdcVolumeType	VolumeTraded;
	///ʣ������
	TZQThostFtdcVolumeType	VolumeTotal;
	///��������
	TZQThostFtdcDateType	InsertDate;
	///ί��ʱ��
	TZQThostFtdcTimeType	InsertTime;
	///����ʱ��
	TZQThostFtdcTimeType	ActiveTime;
	///����ʱ��
	TZQThostFtdcTimeType	SuspendTime;
	///����޸�ʱ��
	TZQThostFtdcTimeType	UpdateTime;
	///����ʱ��
	TZQThostFtdcTimeType	CancelTime;
	///����޸Ľ���������Ա����
	TZQThostFtdcTraderIDType	ActiveTraderID;
	///�����Ա���
	TZQThostFtdcParticipantIDType	ClearingPartID;
	///���
	TZQThostFtdcSequenceNoType	SequenceNo;
	///Ӫҵ�����
	TZQThostFtdcBranchIDType	BranchID;
};

///��������������ʧ��
struct CZQThostFtdcExchangeOrderInsertErrorField
{
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///��Ա����
	TZQThostFtdcParticipantIDType	ParticipantID;
	///����������Ա����
	TZQThostFtdcTraderIDType	TraderID;
	///��װ���
	TZQThostFtdcInstallIDType	InstallID;
	///���ر������
	TZQThostFtdcOrderLocalIDType	OrderLocalID;
	///�������
	TZQThostFtdcErrorIDType	ErrorID;
	///������Ϣ
	TZQThostFtdcErrorMsgType	ErrorMsg;
};

///���뱨������
struct CZQThostFtdcInputOrderActionField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///������������
	TZQThostFtdcOrderActionRefType	OrderActionRef;
	///��������
	TZQThostFtdcOrderRefType	OrderRef;
	///������
	TZQThostFtdcRequestIDType	RequestID;
	///ǰ�ñ��
	TZQThostFtdcFrontIDType	FrontID;
	///�Ự���
	TZQThostFtdcSessionIDType	SessionID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///������־
	TZQThostFtdcActionFlagType	ActionFlag;
	///�۸�
	TZQThostFtdcPriceType	LimitPrice;
	///�����仯
	TZQThostFtdcVolumeType	VolumeChange;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///����������Ա����
	TZQThostFtdcTraderIDType	TraderID;
	///���ر������
	TZQThostFtdcOrderLocalIDType	OrderLocalID;
};

///��������
struct CZQThostFtdcOrderActionField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///������������
	TZQThostFtdcOrderActionRefType	OrderActionRef;
	///��������
	TZQThostFtdcOrderRefType	OrderRef;
	///������
	TZQThostFtdcRequestIDType	RequestID;
	///ǰ�ñ��
	TZQThostFtdcFrontIDType	FrontID;
	///�Ự���
	TZQThostFtdcSessionIDType	SessionID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///������־
	TZQThostFtdcActionFlagType	ActionFlag;
	///�۸�
	TZQThostFtdcPriceType	LimitPrice;
	///�����仯
	TZQThostFtdcVolumeType	VolumeChange;
	///��������
	TZQThostFtdcDateType	ActionDate;
	///����ʱ��
	TZQThostFtdcTimeType	ActionTime;
	///����������Ա����
	TZQThostFtdcTraderIDType	TraderID;
	///��װ���
	TZQThostFtdcInstallIDType	InstallID;
	///���ر������
	TZQThostFtdcOrderLocalIDType	OrderLocalID;
	///�������ر��
	TZQThostFtdcOrderLocalIDType	ActionLocalID;
	///��Ա����
	TZQThostFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TZQThostFtdcClientIDType	ClientID;
	///ҵ��Ԫ
	TZQThostFtdcBusinessUnitType	BusinessUnit;
	///��������״̬
	TZQThostFtdcOrderActionStatusType	OrderActionStatus;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///Ӫҵ�����
	TZQThostFtdcBranchIDType	BranchID;
	///״̬��Ϣ
	TZQThostFtdcErrorMsgType	StatusMsg;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
};

///��������������
struct CZQThostFtdcExchangeOrderActionField
{
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///������־
	TZQThostFtdcActionFlagType	ActionFlag;
	///�۸�
	TZQThostFtdcPriceType	LimitPrice;
	///�����仯
	TZQThostFtdcVolumeType	VolumeChange;
	///��������
	TZQThostFtdcDateType	ActionDate;
	///����ʱ��
	TZQThostFtdcTimeType	ActionTime;
	///����������Ա����
	TZQThostFtdcTraderIDType	TraderID;
	///��װ���
	TZQThostFtdcInstallIDType	InstallID;
	///���ر������
	TZQThostFtdcOrderLocalIDType	OrderLocalID;
	///�������ر��
	TZQThostFtdcOrderLocalIDType	ActionLocalID;
	///��Ա����
	TZQThostFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TZQThostFtdcClientIDType	ClientID;
	///ҵ��Ԫ
	TZQThostFtdcBusinessUnitType	BusinessUnit;
	///��������״̬
	TZQThostFtdcOrderActionStatusType	OrderActionStatus;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///Ӫҵ�����
	TZQThostFtdcBranchIDType	BranchID;
};

///��������������ʧ��
struct CZQThostFtdcExchangeOrderActionErrorField
{
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�������
	TZQThostFtdcOrderSysIDType	OrderSysID;
	///����������Ա����
	TZQThostFtdcTraderIDType	TraderID;
	///��װ���
	TZQThostFtdcInstallIDType	InstallID;
	///���ر������
	TZQThostFtdcOrderLocalIDType	OrderLocalID;
	///�������ر��
	TZQThostFtdcOrderLocalIDType	ActionLocalID;
	///�������
	TZQThostFtdcErrorIDType	ErrorID;
	///������Ϣ
	TZQThostFtdcErrorMsgType	ErrorMsg;
};

///�������ɽ�
struct CZQThostFtdcExchangeTradeField
{
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�ɽ����
	TZQThostFtdcTradeIDType	TradeID;
	///��������
	TZQThostFtdcDirectionType	Direction;
	///�������
	TZQThostFtdcOrderSysIDType	OrderSysID;
	///��Ա����
	TZQThostFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TZQThostFtdcClientIDType	ClientID;
	///���׽�ɫ
	TZQThostFtdcTradingRoleType	TradingRole;
	///��Լ�ڽ������Ĵ���
	TZQThostFtdcExchangeInstIDType	ExchangeInstID;
	///��ƽ��־
	TZQThostFtdcOffsetFlagType	OffsetFlag;
	///Ͷ���ױ���־
	TZQThostFtdcHedgeFlagType	HedgeFlag;
	///�۸�
	TZQThostFtdcStockPriceType	Price;
	///����
	TZQThostFtdcVolumeType	Volume;
	///�ɽ�ʱ��
	TZQThostFtdcDateType	TradeDate;
	///�ɽ�ʱ��
	TZQThostFtdcTimeType	TradeTime;
	///�ɽ�����
	TZQThostFtdcTradeTypeType	TradeType;
	///�ɽ�����Դ
	TZQThostFtdcPriceSourceType	PriceSource;
	///����������Ա����
	TZQThostFtdcTraderIDType	TraderID;
	///���ر������
	TZQThostFtdcOrderLocalIDType	OrderLocalID;
	///�����Ա���
	TZQThostFtdcParticipantIDType	ClearingPartID;
	///ҵ��Ԫ
	TZQThostFtdcBusinessUnitType	BusinessUnit;
	///���
	TZQThostFtdcSequenceNoType	SequenceNo;
};

///�ɽ�
struct CZQThostFtdcTradeField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///��������
	TZQThostFtdcOrderRefType	OrderRef;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�ɽ����
	TZQThostFtdcTradeIDType	TradeID;
	///��������
	TZQThostFtdcDirectionType	Direction;
	///�������
	TZQThostFtdcOrderSysIDType	OrderSysID;
	///��Ա����
	TZQThostFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TZQThostFtdcClientIDType	ClientID;
	///���׽�ɫ
	TZQThostFtdcTradingRoleType	TradingRole;
	///��Լ�ڽ������Ĵ���
	TZQThostFtdcExchangeInstIDType	ExchangeInstID;
	///��ƽ��־
	TZQThostFtdcOffsetFlagType	OffsetFlag;
	///Ͷ���ױ���־
	TZQThostFtdcHedgeFlagType	HedgeFlag;
	///�۸�
	TZQThostFtdcStockPriceType	Price;
	///����
	TZQThostFtdcVolumeType	Volume;
	///�ɽ�ʱ��
	TZQThostFtdcDateType	TradeDate;
	///�ɽ�ʱ��
	TZQThostFtdcTimeType	TradeTime;
	///�ɽ�����
	TZQThostFtdcTradeTypeType	TradeType;
	///�ɽ�����Դ
	TZQThostFtdcPriceSourceType	PriceSource;
	///����������Ա����
	TZQThostFtdcTraderIDType	TraderID;
	///���ر������
	TZQThostFtdcOrderLocalIDType	OrderLocalID;
	///�����Ա���
	TZQThostFtdcParticipantIDType	ClearingPartID;
	///ҵ��Ԫ
	TZQThostFtdcBusinessUnitType	BusinessUnit;
	///���
	TZQThostFtdcSequenceNoType	SequenceNo;
	///������
	TZQThostFtdcDateType	TradingDay;
	///������
	TZQThostFtdcSettlementIDType	SettlementID;
	///���͹�˾�������
	TZQThostFtdcSequenceNoType	BrokerOrderSeq;
};

///�û��Ự
struct CZQThostFtdcUserSessionField
{
	///ǰ�ñ��
	TZQThostFtdcFrontIDType	FrontID;
	///�Ự���
	TZQThostFtdcSessionIDType	SessionID;
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///��¼����
	TZQThostFtdcDateType	LoginDate;
	///��¼ʱ��
	TZQThostFtdcTimeType	LoginTime;
	///IP��ַ
	TZQThostFtdcIPAddressType	IPAddress;
	///�û��˲�Ʒ��Ϣ
	TZQThostFtdcProductInfoType	UserProductInfo;
	///�ӿڶ˲�Ʒ��Ϣ
	TZQThostFtdcProductInfoType	InterfaceProductInfo;
	///Э����Ϣ
	TZQThostFtdcProtocolInfoType	ProtocolInfo;
	///Mac��ַ
	TZQThostFtdcMacAddressType	MacAddress;
};

///��ѯ��󱨵�����
struct CZQThostFtdcQueryMaxOrderVolumeField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///��������
	TZQThostFtdcDirectionType	Direction;
	///��ƽ��־
	TZQThostFtdcOffsetFlagType	OffsetFlag;
	///Ͷ���ױ���־
	TZQThostFtdcHedgeFlagType	HedgeFlag;
	///�������������
	TZQThostFtdcVolumeType	MaxVolume;
};

///Ͷ���߽�����ȷ����Ϣ
struct CZQThostFtdcSettlementInfoConfirmField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///ȷ������
	TZQThostFtdcDateType	ConfirmDate;
	///ȷ��ʱ��
	TZQThostFtdcTimeType	ConfirmTime;
};

///�����ͬ��
struct CZQThostFtdcSyncDepositField
{
	///�������ˮ��
	TZQThostFtdcDepositSeqNoType	DepositSeqNo;
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///�����
	TZQThostFtdcMoneyType	Deposit;
	///�Ƿ�ǿ�ƽ���
	TZQThostFtdcBoolType	IsForce;
};

///���͹�˾ͬ��
struct CZQThostFtdcBrokerSyncField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
};

///����ͬ���е�Ͷ����
struct CZQThostFtdcSyncingInvestorField
{
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���߷������
	TZQThostFtdcInvestorIDType	InvestorGroupID;
	///Ͷ��������
	TZQThostFtdcPartyNameType	InvestorName;
	///֤������
	TZQThostFtdcIdCardTypeType	IdentifiedCardType;
	///֤������
	TZQThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�Ƿ��Ծ
	TZQThostFtdcBoolType	IsActive;
	///��ϵ�绰
	TZQThostFtdcTelephoneType	Telephone;
	///ͨѶ��ַ
	TZQThostFtdcAddressType	Address;
	///��������
	TZQThostFtdcDateType	OpenDate;
	///�ֻ�
	TZQThostFtdcMobileType	Mobile;
	///�Ϻ�Ӫҵ�����
	TZQThostFtdcBranchIDType	SHBranchID;
	///����Ӫҵ�����
	TZQThostFtdcBranchIDType	SZBranchID;
	///�Ƿ������˻�
	TZQThostFtdcBoolType	IsCreditAccount;
};

///����ͬ���еĽ��״���
struct CZQThostFtdcSyncingTradingCodeField
{
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�ͻ�����
	TZQThostFtdcClientIDType	ClientID;
	///�Ƿ��Ծ
	TZQThostFtdcBoolType	IsActive;
};

///����ͬ���е�Ͷ���߷���
struct CZQThostFtdcSyncingInvestorGroupField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���߷������
	TZQThostFtdcInvestorIDType	InvestorGroupID;
	///Ͷ���߷�������
	TZQThostFtdcInvestorGroupNameType	InvestorGroupName;
};

///����ͬ���еĽ����˺�
struct CZQThostFtdcSyncingTradingAccountField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ�����ʺ�
	TZQThostFtdcAccountIDType	AccountID;
	///�ϴ���Ѻ���
	TZQThostFtdcMoneyType	PreMortgage;
	///�ϴ����ö��
	TZQThostFtdcMoneyType	PreCredit;
	///�ϴδ���
	TZQThostFtdcMoneyType	PreDeposit;
	///�ϴν���׼����
	TZQThostFtdcMoneyType	PreBalance;
	///�ϴ�ռ�õı�֤��
	TZQThostFtdcMoneyType	PreMargin;
	///��Ϣ����
	TZQThostFtdcMoneyType	InterestBase;
	///��Ϣ����
	TZQThostFtdcMoneyType	Interest;
	///�����
	TZQThostFtdcMoneyType	Deposit;
	///������
	TZQThostFtdcMoneyType	Withdraw;
	///����ı�֤��
	TZQThostFtdcMoneyType	FrozenMargin;
	///������ʽ�
	TZQThostFtdcMoneyType	FrozenCash;
	///�����������
	TZQThostFtdcMoneyType	FrozenCommission;
	///��ǰ��֤���ܶ�
	TZQThostFtdcMoneyType	CurrMargin;
	///�ʽ���
	TZQThostFtdcMoneyType	CashIn;
	///������
	TZQThostFtdcMoneyType	Commission;
	///��ȯ�ֲ�ӯ��
	TZQThostFtdcMoneyType	CloseProfit;
	///���ʳֲ�ӯ��
	TZQThostFtdcMoneyType	PositionProfit;
	///�ڻ�����׼����
	TZQThostFtdcMoneyType	Balance;
	///�ֽ�
	TZQThostFtdcMoneyType	Available;
	///��ȡ�ʽ�
	TZQThostFtdcMoneyType	WithdrawQuota;
	///����׼����
	TZQThostFtdcMoneyType	Reserve;
	///������
	TZQThostFtdcDateType	TradingDay;
	///������
	TZQThostFtdcSettlementIDType	SettlementID;
	///��֤��������
	TZQThostFtdcMoneyType	Credit;
	///��Ѻ���
	TZQThostFtdcMoneyType	Mortgage;
	///��������֤��
	TZQThostFtdcMoneyType	ExchangeMargin;
	///Ͷ���߽��֤��
	TZQThostFtdcMoneyType	DeliveryMargin;
	///���������֤��
	TZQThostFtdcMoneyType	ExchangeDeliveryMargin;
	///����Ĺ�����
	TZQThostFtdcMoneyType	FrozenTransferFee;
	///�����ӡ��˰
	TZQThostFtdcMoneyType	FrozenStampTax;
	///������
	TZQThostFtdcMoneyType	TransferFee;
	///ӡ��˰
	TZQThostFtdcMoneyType	StampTax;
	///������
	TZQThostFtdcMoneyType	ConversionAmount;
	///���Ŷ��
	TZQThostFtdcMoneyType	CreditAmount;
	///���ά�ֵ�������
	TZQThostFtdcRatioType	LowLimitRatio;
	///����������
	TZQThostFtdcMoneyType	MarginTradingAmount;
	///��ȯ�������
	TZQThostFtdcMoneyType	ShortSellingAmount;
	///����������ý��
	TZQThostFtdcMoneyType	MarginTradingAvail;
	///��ȯ�������ý��
	TZQThostFtdcMoneyType	ShortSellingAvail;
	///ά�ֵ�������
	TZQThostFtdcRatioType	CreditRatio;
	///֤ȯ�ܼ�ֵ
	TZQThostFtdcMoneyType	StockValue;
	///��ȯ����ֵ
	TZQThostFtdcMoneyType	SSStockValue;
	///ծȯ���ع��ʽ�
	TZQThostFtdcMoneyType	BondRepurchaseAmount;
	///ծȯ��ع�ռ���ʽ�
	TZQThostFtdcMoneyType	ReverseRepurchaseAmount;
};

///����ͬ���е�Ͷ���ֲ߳�
struct CZQThostFtdcSyncingInvestorPositionField
{
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///�ֲֶ�շ���
	TZQThostFtdcPosiDirectionType	PosiDirection;
	///Ͷ���ױ���־
	TZQThostFtdcHedgeFlagType	HedgeFlag;
	///�ֲ�����
	TZQThostFtdcPositionDateType	PositionDate;
	///���ճֲ�
	TZQThostFtdcVolumeType	YdPosition;
	///���ճֲ�
	TZQThostFtdcVolumeType	Position;
	///��ͷ����
	TZQThostFtdcVolumeType	LongFrozen;
	///��ͷ����
	TZQThostFtdcVolumeType	ShortFrozen;
	///���ֶ�����
	TZQThostFtdcMoneyType	LongFrozenAmount;
	///���ֶ�����
	TZQThostFtdcMoneyType	ShortFrozenAmount;
	///������
	TZQThostFtdcVolumeType	OpenVolume;
	///ƽ����
	TZQThostFtdcVolumeType	CloseVolume;
	///���ֽ��
	TZQThostFtdcMoneyType	OpenAmount;
	///ƽ�ֽ��
	TZQThostFtdcMoneyType	CloseAmount;
	///�ֲֳɱ�
	TZQThostFtdcMoneyType	PositionCost;
	///������ʽ�
	TZQThostFtdcMoneyType	FrozenCash;
	///�ʽ���
	TZQThostFtdcMoneyType	CashIn;
	///������
	TZQThostFtdcMoneyType	Commission;
	///ƽ��ӯ��
	TZQThostFtdcMoneyType	CloseProfit;
	///�ֲ�ӯ��
	TZQThostFtdcMoneyType	PositionProfit;
	///�ϴν����
	TZQThostFtdcPriceType	PreSettlementPrice;
	///���ν����
	TZQThostFtdcPriceType	SettlementPrice;
	///������
	TZQThostFtdcDateType	TradingDay;
	///������
	TZQThostFtdcSettlementIDType	SettlementID;
	///���ֳɱ�
	TZQThostFtdcMoneyType	OpenCost;
	///��������֤��
	TZQThostFtdcMoneyType	ExchangeMargin;
	///���ճֲ�
	TZQThostFtdcVolumeType	TodayPosition;
	///������
	TZQThostFtdcMoneyType	TransferFee;
	///ӡ��˰
	TZQThostFtdcMoneyType	StampTax;
	///�����깺�������
	TZQThostFtdcVolumeType	TodayPurRedVolume;
	///������
	TZQThostFtdcRatioType	ConversionRate;
	///������
	TZQThostFtdcMoneyType	ConversionAmount;
	///�������������
	TZQThostFtdcVolumeType	MarginTradeVolume;
	///����������
	TZQThostFtdcMoneyType	MarginTradeAmount;
	///�������붳������
	TZQThostFtdcVolumeType	MarginTradeFrozenVolume;
	///�������붳����
	TZQThostFtdcMoneyType	MarginTradeFrozenAmount;
	///��������ӯ��
	TZQThostFtdcMoneyType	MarginTradeConversionAmount;
	///��ȯ��������
	TZQThostFtdcVolumeType	ShortSellVolume;
	///��ȯ�������
	TZQThostFtdcMoneyType	ShortSellAmount;
	///��ȯ����ӯ��
	TZQThostFtdcMoneyType	ShortSellConversionAmount;
	///��ȯ������������
	TZQThostFtdcVolumeType	ShortSellFrozenVolume;
	///��ȯ����������
	TZQThostFtdcMoneyType	ShortSellFrozenAmount;
	///֤ȯ��ֵ
	TZQThostFtdcMoneyType	StockValue;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�������ʳֲ�
	TZQThostFtdcVolumeType	TodayMTPosition;
	///������ȯ�ֲ�
	TZQThostFtdcVolumeType	TodaySSPosition;
	///��ȯ����ֵ
	TZQThostFtdcMoneyType	SSStockValue;
	///��Ѻ�������
	TZQThostFtdcVolumeType	PledgeInPosition;
	///������Ѻ��ⶳ������
	TZQThostFtdcVolumeType	PledgeInFrozenPosition;
	///���ع�ʹ�õı�׼ȯ����
	TZQThostFtdcVolumeType	RepurchasePosition;
};

///����ͬ���еĺ�Լ��֤����
struct CZQThostFtdcSyncingInstrumentMarginRateField
{
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///Ͷ���߷�Χ
	TZQThostFtdcInvestorRangeType	InvestorRange;
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///Ͷ���ױ���־
	TZQThostFtdcHedgeFlagType	HedgeFlag;
	///��ͷ��֤����
	TZQThostFtdcRatioType	LongMarginRatioByMoney;
	///��ͷ��֤���
	TZQThostFtdcMoneyType	LongMarginRatioByVolume;
	///��ͷ��֤����
	TZQThostFtdcRatioType	ShortMarginRatioByMoney;
	///��ͷ��֤���
	TZQThostFtdcMoneyType	ShortMarginRatioByVolume;
	///�Ƿ���Խ�������ȡ
	TZQThostFtdcBoolType	IsRelative;
};

///����ͬ���еĺ�Լ��������
struct CZQThostFtdcSyncingInstrumentCommissionRateField
{
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///Ͷ���߷�Χ
	TZQThostFtdcInvestorRangeType	InvestorRange;
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///��������
	TZQThostFtdcDirectionType	Direction;
	///ӡ��˰��
	TZQThostFtdcRatioType	StampTaxRateByMoney;
	///ӡ��˰��(������)
	TZQThostFtdcRatioType	StampTaxRateByVolume;
	///��������
	TZQThostFtdcRatioType	TransferFeeRateByMoney;
	///��������(������)
	TZQThostFtdcRatioType	TransferFeeRateByVolume;
	///���׷�
	TZQThostFtdcRatioType	TradeFeeByMoney;
	///���׷�(������)
	TZQThostFtdcRatioType	TradeFeeByVolume;
	///���׸��ӷ���
	TZQThostFtdcRatioType	MarginByMoney;
	///��С������
	TZQThostFtdcPriceType	MinTradeFee;
};

///����ͬ���еĺ�Լ����Ȩ��
struct CZQThostFtdcSyncingInstrumentTradingRightField
{
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///Ͷ���߷�Χ
	TZQThostFtdcInvestorRangeType	InvestorRange;
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///����
	TZQThostFtdcDirectionType	Direction;
	///����Ȩ��
	TZQThostFtdcTradingRightType	TradingRight;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///��ƱȨ�޷���
	TZQThostFtdcInstrumentRangeType	InstrumentRange;
};

///��ѯ����
struct CZQThostFtdcQryOrderField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�������
	TZQThostFtdcOrderSysIDType	OrderSysID;
	///��ʼʱ��
	TZQThostFtdcTimeType	InsertTimeStart;
	///����ʱ��
	TZQThostFtdcTimeType	InsertTimeEnd;
};

///��ѯ�ɽ�
struct CZQThostFtdcQryTradeField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�ɽ����
	TZQThostFtdcTradeIDType	TradeID;
	///��ʼʱ��
	TZQThostFtdcTimeType	TradeTimeStart;
	///����ʱ��
	TZQThostFtdcTimeType	TradeTimeEnd;
};

///��ѯͶ���ֲ߳�
struct CZQThostFtdcQryInvestorPositionField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
};

///��ѯ�ʽ��˻�
struct CZQThostFtdcQryTradingAccountField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
};

///��ѯͶ����
struct CZQThostFtdcQryInvestorField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
};

///��ѯ���ױ���
struct CZQThostFtdcQryTradingCodeField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�ͻ�����
	TZQThostFtdcClientIDType	ClientID;
};

///��ѯ���ױ���
struct CZQThostFtdcQryInvestorGroupField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
};

///��ѯ���ױ���
struct CZQThostFtdcQryInstrumentMarginRateField
{
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///Ͷ���ױ���־
	TZQThostFtdcHedgeFlagType	HedgeFlag;
};

///��ѯ���ױ���
struct CZQThostFtdcQryInstrumentCommissionRateField
{
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
};

///��ѯ���ױ���
struct CZQThostFtdcQryInstrumentTradingRightField
{
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
};

///��ѯ���͹�˾
struct CZQThostFtdcQryBrokerField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
};

///��ѯ����Ա
struct CZQThostFtdcQryTraderField
{
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///��Ա����
	TZQThostFtdcParticipantIDType	ParticipantID;
	///����������Ա����
	TZQThostFtdcTraderIDType	TraderID;
};

///��ѯ���͹�˾��Ա����
struct CZQThostFtdcQryPartBrokerField
{
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///��Ա����
	TZQThostFtdcParticipantIDType	ParticipantID;
};

///��ѯ�����û�����Ȩ��
struct CZQThostFtdcQrySuperUserFunctionField
{
	///�û�����
	TZQThostFtdcUserIDType	UserID;
};

///��ѯ�û��Ự
struct CZQThostFtdcQryUserSessionField
{
	///ǰ�ñ��
	TZQThostFtdcFrontIDType	FrontID;
	///�Ự���
	TZQThostFtdcSessionIDType	SessionID;
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
};

///��ѯǰ��״̬
struct CZQThostFtdcQryFrontStatusField
{
	///ǰ�ñ��
	TZQThostFtdcFrontIDType	FrontID;
};

///��ѯ����������
struct CZQThostFtdcQryExchangeOrderField
{
	///��Ա����
	TZQThostFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TZQThostFtdcClientIDType	ClientID;
	///��Լ�ڽ������Ĵ���
	TZQThostFtdcExchangeInstIDType	ExchangeInstID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///����������Ա����
	TZQThostFtdcTraderIDType	TraderID;
};

///��ѯ��������
struct CZQThostFtdcQryOrderActionField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
};

///��ѯ��������������
struct CZQThostFtdcQryExchangeOrderActionField
{
	///��Ա����
	TZQThostFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TZQThostFtdcClientIDType	ClientID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///����������Ա����
	TZQThostFtdcTraderIDType	TraderID;
};

///��ѯ�����û�
struct CZQThostFtdcQrySuperUserField
{
	///�û�����
	TZQThostFtdcUserIDType	UserID;
};

///��ѯ������
struct CZQThostFtdcQryExchangeField
{
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
};

///��ѯ��Ʒ
struct CZQThostFtdcQryProductField
{
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///��Ʒ����
	TZQThostFtdcInstrumentIDType	ProductID;
};

///��ѯ��Լ
struct CZQThostFtdcQryInstrumentField
{
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///��Լ�ڽ������Ĵ���
	TZQThostFtdcExchangeInstIDType	ExchangeInstID;
	///��Ʒ����
	TZQThostFtdcInstrumentIDType	ProductID;
};

///��ѯ����
struct CZQThostFtdcQryDepthMarketDataField
{
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
};

///��ѯ���͹�˾�û�
struct CZQThostFtdcQryBrokerUserField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
};

///��ѯ���͹�˾�û�Ȩ��
struct CZQThostFtdcQryBrokerUserFunctionField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
};

///��ѯ����Ա���̻�
struct CZQThostFtdcQryTraderOfferField
{
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///��Ա����
	TZQThostFtdcParticipantIDType	ParticipantID;
	///����������Ա����
	TZQThostFtdcTraderIDType	TraderID;
};

///��ѯ�������ˮ
struct CZQThostFtdcQrySyncDepositField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///�������ˮ��
	TZQThostFtdcDepositSeqNoType	DepositSeqNo;
};

///��ѯͶ���߽�����
struct CZQThostFtdcQrySettlementInfoField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///������
	TZQThostFtdcDateType	TradingDay;
};

///��ѯ����
struct CZQThostFtdcQryHisOrderField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�������
	TZQThostFtdcOrderSysIDType	OrderSysID;
	///��ʼʱ��
	TZQThostFtdcTimeType	InsertTimeStart;
	///����ʱ��
	TZQThostFtdcTimeType	InsertTimeEnd;
	///������
	TZQThostFtdcDateType	TradingDay;
	///������
	TZQThostFtdcSettlementIDType	SettlementID;
};

///�г�����
struct CZQThostFtdcMarketDataField
{
	///������
	TZQThostFtdcDateType	TradingDay;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///��Լ�ڽ������Ĵ���
	TZQThostFtdcExchangeInstIDType	ExchangeInstID;
	///���¼�
	TZQThostFtdcPriceType	LastPrice;
	///�ϴν����
	TZQThostFtdcPriceType	PreSettlementPrice;
	///������
	TZQThostFtdcPriceType	PreClosePrice;
	///��ֲ���
	TZQThostFtdcLargeVolumeType	PreOpenInterest;
	///����
	TZQThostFtdcPriceType	OpenPrice;
	///��߼�
	TZQThostFtdcPriceType	HighestPrice;
	///��ͼ�
	TZQThostFtdcPriceType	LowestPrice;
	///����
	TZQThostFtdcVolumeType	Volume;
	///�ɽ����
	TZQThostFtdcMoneyType	Turnover;
	///�ֲ���
	TZQThostFtdcLargeVolumeType	OpenInterest;
	///������
	TZQThostFtdcPriceType	ClosePrice;
	///���ν����
	TZQThostFtdcPriceType	SettlementPrice;
	///��ͣ���
	TZQThostFtdcPriceType	UpperLimitPrice;
	///��ͣ���
	TZQThostFtdcPriceType	LowerLimitPrice;
	///����ʵ��
	TZQThostFtdcRatioType	PreDelta;
	///����ʵ��
	TZQThostFtdcRatioType	CurrDelta;
	///����޸�ʱ��
	TZQThostFtdcTimeType	UpdateTime;
	///����޸ĺ���
	TZQThostFtdcMillisecType	UpdateMillisec;
};

///���齻������������
struct CZQThostFtdcMarketDataExchangeField
{
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
};

///�����������
struct CZQThostFtdcMarketDataBaseField
{
	///������
	TZQThostFtdcDateType	TradingDay;
	///�ϴν����
	TZQThostFtdcPriceType	PreSettlementPrice;
	///������
	TZQThostFtdcPriceType	PreClosePrice;
	///��ֲ���
	TZQThostFtdcLargeVolumeType	PreOpenInterest;
	///����ʵ��
	TZQThostFtdcRatioType	PreDelta;
};

///���龲̬����
struct CZQThostFtdcMarketDataStaticField
{
	///����
	TZQThostFtdcPriceType	OpenPrice;
	///��߼�
	TZQThostFtdcPriceType	HighestPrice;
	///��ͼ�
	TZQThostFtdcPriceType	LowestPrice;
	///������
	TZQThostFtdcPriceType	ClosePrice;
	///��ͣ���
	TZQThostFtdcPriceType	UpperLimitPrice;
	///��ͣ���
	TZQThostFtdcPriceType	LowerLimitPrice;
	///���ν����
	TZQThostFtdcPriceType	SettlementPrice;
	///����ʵ��
	TZQThostFtdcRatioType	CurrDelta;
};

///�������³ɽ�����
struct CZQThostFtdcMarketDataLastMatchField
{
	///���¼�
	TZQThostFtdcPriceType	LastPrice;
	///����
	TZQThostFtdcVolumeType	Volume;
	///�ɽ����
	TZQThostFtdcMoneyType	Turnover;
	///�ֲ���
	TZQThostFtdcLargeVolumeType	OpenInterest;
};

///�������ż�����
struct CZQThostFtdcMarketDataBestPriceField
{
	///�����һ
	TZQThostFtdcPriceType	BidPrice1;
	///������һ
	TZQThostFtdcVolumeType	BidVolume1;
	///������һ
	TZQThostFtdcPriceType	AskPrice1;
	///������һ
	TZQThostFtdcVolumeType	AskVolume1;
};

///�����������������
struct CZQThostFtdcMarketDataBid23Field
{
	///����۶�
	TZQThostFtdcPriceType	BidPrice2;
	///��������
	TZQThostFtdcVolumeType	BidVolume2;
	///�������
	TZQThostFtdcPriceType	BidPrice3;
	///��������
	TZQThostFtdcVolumeType	BidVolume3;
};

///������������������
struct CZQThostFtdcMarketDataAsk23Field
{
	///�����۶�
	TZQThostFtdcPriceType	AskPrice2;
	///��������
	TZQThostFtdcVolumeType	AskVolume2;
	///��������
	TZQThostFtdcPriceType	AskPrice3;
	///��������
	TZQThostFtdcVolumeType	AskVolume3;
};

///���������ġ�������
struct CZQThostFtdcMarketDataBid45Field
{
	///�������
	TZQThostFtdcPriceType	BidPrice4;
	///��������
	TZQThostFtdcVolumeType	BidVolume4;
	///�������
	TZQThostFtdcPriceType	BidPrice5;
	///��������
	TZQThostFtdcVolumeType	BidVolume5;
};

///���������ġ�������
struct CZQThostFtdcMarketDataAsk45Field
{
	///��������
	TZQThostFtdcPriceType	AskPrice4;
	///��������
	TZQThostFtdcVolumeType	AskVolume4;
	///��������
	TZQThostFtdcPriceType	AskPrice5;
	///��������
	TZQThostFtdcVolumeType	AskVolume5;
};

///�������ʱ������
struct CZQThostFtdcMarketDataUpdateTimeField
{
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///����޸�ʱ��
	TZQThostFtdcTimeType	UpdateTime;
	///����޸ĺ���
	TZQThostFtdcMillisecType	UpdateMillisec;
};

///ָ���ĺ�Լ
struct CZQThostFtdcSpecificInstrumentField
{
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
};

///��Լ״̬
struct CZQThostFtdcInstrumentStatusField
{
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///��Լ�ڽ������Ĵ���
	TZQThostFtdcExchangeInstIDType	ExchangeInstID;
	///���������
	TZQThostFtdcSettlementGroupIDType	SettlementGroupID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///��Լ����״̬
	TZQThostFtdcInstrumentStatusType	InstrumentStatus;
	///���׽׶α��
	TZQThostFtdcTradingSegmentSNType	TradingSegmentSN;
	///���뱾״̬ʱ��
	TZQThostFtdcTimeType	EnterTime;
	///���뱾״̬ԭ��
	TZQThostFtdcInstStatusEnterReasonType	EnterReason;
};

///��ѯ��Լ״̬
struct CZQThostFtdcQryInstrumentStatusField
{
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///��Լ�ڽ������Ĵ���
	TZQThostFtdcExchangeInstIDType	ExchangeInstID;
};

///Ͷ�����˻�
struct CZQThostFtdcInvestorAccountField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///Ͷ�����ʺ�
	TZQThostFtdcAccountIDType	AccountID;
};

///����ӯ���㷨
struct CZQThostFtdcPositionProfitAlgorithmField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ�����ʺ�
	TZQThostFtdcAccountIDType	AccountID;
	///ӯ���㷨
	TZQThostFtdcAlgorithmType	Algorithm;
	///��ע
	TZQThostFtdcMemoType	Memo;
};

///��Ա�ʽ��ۿ�
struct CZQThostFtdcDiscountField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���߷�Χ
	TZQThostFtdcInvestorRangeType	InvestorRange;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///�ʽ��ۿ۱���
	TZQThostFtdcRatioType	Discount;
};

///��ѯת������
struct CZQThostFtdcQryTransferBankField
{
	///���д���
	TZQThostFtdcBankIDType	BankID;
	///���з����Ĵ���
	TZQThostFtdcBankBrchIDType	BankBrchID;
};

///ת������
struct CZQThostFtdcTransferBankField
{
	///���д���
	TZQThostFtdcBankIDType	BankID;
	///���з����Ĵ���
	TZQThostFtdcBankBrchIDType	BankBrchID;
	///��������
	TZQThostFtdcBankNameType	BankName;
	///�Ƿ��Ծ
	TZQThostFtdcBoolType	IsActive;
};

///��ѯͶ���ֲ߳���ϸ
struct CZQThostFtdcQryInvestorPositionDetailField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
};

///Ͷ���ֲ߳���ϸ
struct CZQThostFtdcInvestorPositionDetailField
{
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///Ͷ���ױ���־
	TZQThostFtdcHedgeFlagType	HedgeFlag;
	///����
	TZQThostFtdcDirectionType	Direction;
	///��������
	TZQThostFtdcDateType	OpenDate;
	///�ɽ����
	TZQThostFtdcTradeIDType	TradeID;
	///����
	TZQThostFtdcVolumeType	Volume;
	///���ּ�
	TZQThostFtdcPriceType	OpenPrice;
	///������
	TZQThostFtdcDateType	TradingDay;
	///������
	TZQThostFtdcSettlementIDType	SettlementID;
	///�ɽ�����
	TZQThostFtdcTradeTypeType	TradeType;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///Ͷ���߱�֤��
	TZQThostFtdcMoneyType	Margin;
	///��������֤��
	TZQThostFtdcMoneyType	ExchMargin;
	///������
	TZQThostFtdcPriceType	LastSettlementPrice;
	///�����
	TZQThostFtdcPriceType	SettlementPrice;
	///ƽ����
	TZQThostFtdcVolumeType	CloseVolume;
	///ƽ�ֽ��
	TZQThostFtdcMoneyType	CloseAmount;
	///������
	TZQThostFtdcMoneyType	TransferFee;
	///ӡ��˰
	TZQThostFtdcMoneyType	StampTax;
	///������
	TZQThostFtdcMoneyType	Commission;
	///������ȯ���
	TZQThostFtdcMoneyType	Amount;
	///��Ѻ�������
	TZQThostFtdcVolumeType	PledgeInPosition;
	///������Ѻ��ⶳ������
	TZQThostFtdcVolumeType	PledgeInFrozenPosition;
	///���ع�ʹ�õı�׼ȯ����
	TZQThostFtdcVolumeType	RepurchasePosition;
};

///�ʽ��˻�������
struct CZQThostFtdcTradingAccountPasswordField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ�����ʺ�
	TZQThostFtdcAccountIDType	AccountID;
	///����
	TZQThostFtdcPasswordType	Password;
};

///���������鱨�̻�
struct CZQThostFtdcMDTraderOfferField
{
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///����������Ա����
	TZQThostFtdcTraderIDType	TraderID;
	///��Ա����
	TZQThostFtdcParticipantIDType	ParticipantID;
	///����
	TZQThostFtdcPasswordType	Password;
	///��װ���
	TZQThostFtdcInstallIDType	InstallID;
	///���ر������
	TZQThostFtdcOrderLocalIDType	OrderLocalID;
	///����������Ա����״̬
	TZQThostFtdcTraderConnectStatusType	TraderConnectStatus;
	///�����������������
	TZQThostFtdcDateType	ConnectRequestDate;
	///�������������ʱ��
	TZQThostFtdcTimeType	ConnectRequestTime;
	///�ϴα�������
	TZQThostFtdcDateType	LastReportDate;
	///�ϴα���ʱ��
	TZQThostFtdcTimeType	LastReportTime;
	///�����������
	TZQThostFtdcDateType	ConnectDate;
	///�������ʱ��
	TZQThostFtdcTimeType	ConnectTime;
	///��������
	TZQThostFtdcDateType	StartDate;
	///����ʱ��
	TZQThostFtdcTimeType	StartTime;
	///������
	TZQThostFtdcDateType	TradingDay;
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ӫҵ�����
	TZQThostFtdcBranchIDType	BranchID;
};

///��ѯ���鱨�̻�
struct CZQThostFtdcQryMDTraderOfferField
{
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///��Ա����
	TZQThostFtdcParticipantIDType	ParticipantID;
	///����������Ա����
	TZQThostFtdcTraderIDType	TraderID;
};

///��ѯ�ͻ�֪ͨ
struct CZQThostFtdcQryNoticeField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
};

///�ͻ�֪ͨ
struct CZQThostFtdcNoticeField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///��Ϣ����
	TZQThostFtdcContentType	Content;
	///���͹�˾֪ͨ�������к�
	TZQThostFtdcSequenceLabelType	SequenceLabel;
};

///�û�Ȩ��
struct CZQThostFtdcUserRightField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///�ͻ�Ȩ������
	TZQThostFtdcUserRightTypeType	UserRightType;
	///�Ƿ��ֹ
	TZQThostFtdcBoolType	IsForbidden;
};

///��ѯ������Ϣȷ����
struct CZQThostFtdcQrySettlementInfoConfirmField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
};

///װ�ؽ�����Ϣ
struct CZQThostFtdcLoadSettlementInfoField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
};

///���͹�˾�����ʽ��㷨��
struct CZQThostFtdcBrokerWithdrawAlgorithmField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///�����ʽ��㷨
	TZQThostFtdcAlgorithmType	WithdrawAlgorithm;
	///�ʽ�ʹ����
	TZQThostFtdcRatioType	UsingRatio;
	///�����Ƿ����ƽ��ӯ��
	TZQThostFtdcIncludeCloseProfitType	IncludeCloseProfit;
	///�����޲����޳ɽ��ͻ��Ƿ��ܿ����������
	TZQThostFtdcAllWithoutTradeType	AllWithoutTrade;
	///�����Ƿ����ƽ��ӯ��
	TZQThostFtdcIncludeCloseProfitType	AvailIncludeCloseProfit;
	///�Ƿ������û��¼�
	TZQThostFtdcBoolType	IsBrokerUserEvent;
};

///�ʽ��˻���������
struct CZQThostFtdcTradingAccountPasswordUpdateV1Field
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///ԭ���Ŀ���
	TZQThostFtdcPasswordType	OldPassword;
	///�µĿ���
	TZQThostFtdcPasswordType	NewPassword;
};

///�ʽ��˻���������
struct CZQThostFtdcTradingAccountPasswordUpdateField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ�����ʺ�
	TZQThostFtdcAccountIDType	AccountID;
	///ԭ���Ŀ���
	TZQThostFtdcPasswordType	OldPassword;
	///�µĿ���
	TZQThostFtdcPasswordType	NewPassword;
};

///��ѯ��Ϻ�Լ����
struct CZQThostFtdcQryCombinationLegField
{
	///��Ϻ�Լ����
	TZQThostFtdcInstrumentIDType	CombInstrumentID;
	///���ȱ��
	TZQThostFtdcLegIDType	LegID;
	///���Ⱥ�Լ����
	TZQThostFtdcInstrumentIDType	LegInstrumentID;
};

///��ѯ��Ϻ�Լ����
struct CZQThostFtdcQrySyncStatusField
{
	///������
	TZQThostFtdcDateType	TradingDay;
};

///��Ͻ��׺�Լ�ĵ���
struct CZQThostFtdcCombinationLegField
{
	///��Ϻ�Լ����
	TZQThostFtdcInstrumentIDType	CombInstrumentID;
	///���ȱ��
	TZQThostFtdcLegIDType	LegID;
	///���Ⱥ�Լ����
	TZQThostFtdcInstrumentIDType	LegInstrumentID;
	///��������
	TZQThostFtdcDirectionType	Direction;
	///���ȳ���
	TZQThostFtdcLegMultipleType	LegMultiple;
	///��������
	TZQThostFtdcImplyLevelType	ImplyLevel;
};

///����ͬ��״̬
struct CZQThostFtdcSyncStatusField
{
	///������
	TZQThostFtdcDateType	TradingDay;
	///����ͬ��״̬
	TZQThostFtdcDataSyncStatusType	DataSyncStatus;
};

///��ѯ��ϵ��
struct CZQThostFtdcQryLinkManField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
};

///��ϵ��
struct CZQThostFtdcLinkManField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///��ϵ������
	TZQThostFtdcPersonTypeType	PersonType;
	///֤������
	TZQThostFtdcIdCardTypeType	IdentifiedCardType;
	///֤������
	TZQThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///����
	TZQThostFtdcPartyNameType	PersonName;
	///��ϵ�绰
	TZQThostFtdcTelephoneType	Telephone;
	///ͨѶ��ַ
	TZQThostFtdcAddressType	Address;
	///��������
	TZQThostFtdcZipCodeType	ZipCode;
	///���ȼ�
	TZQThostFtdcPriorityType	Priority;
};

///��ѯ���͹�˾�û��¼�
struct CZQThostFtdcQryBrokerUserEventField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///�û��¼�����
	TZQThostFtdcUserEventTypeType	UserEventType;
};

///��ѯ���͹�˾�û��¼�
struct CZQThostFtdcBrokerUserEventField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///�û��¼�����
	TZQThostFtdcUserEventTypeType	UserEventType;
	///�û��¼����
	TZQThostFtdcSequenceNoType	EventSequenceNo;
	///�¼���������
	TZQThostFtdcDateType	EventDate;
	///�¼�����ʱ��
	TZQThostFtdcTimeType	EventTime;
	///�û��¼���Ϣ
	TZQThostFtdcUserEventInfoType	UserEventInfo;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
};

///��ѯǩԼ��������
struct CZQThostFtdcQryContractBankField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///���д���
	TZQThostFtdcBankIDType	BankID;
	///���з����Ĵ���
	TZQThostFtdcBankBrchIDType	BankBrchID;
};

///��ѯǩԼ������Ӧ
struct CZQThostFtdcContractBankField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///���д���
	TZQThostFtdcBankIDType	BankID;
	///���з����Ĵ���
	TZQThostFtdcBankBrchIDType	BankBrchID;
	///��������
	TZQThostFtdcBankNameType	BankName;
};

///Ͷ������ϳֲ���ϸ
struct CZQThostFtdcInvestorPositionCombineDetailField
{
	///������
	TZQThostFtdcDateType	TradingDay;
	///��������
	TZQThostFtdcDateType	OpenDate;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///������
	TZQThostFtdcSettlementIDType	SettlementID;
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///��ϱ��
	TZQThostFtdcTradeIDType	ComTradeID;
	///��ϱ��
	TZQThostFtdcTradeIDType	TradeID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///Ͷ���ױ���־
	TZQThostFtdcHedgeFlagType	HedgeFlag;
	///����
	TZQThostFtdcDirectionType	Direction;
	///�ֲ���
	TZQThostFtdcVolumeType	TotalAmt;
	///Ͷ���߱�֤��
	TZQThostFtdcMoneyType	Margin;
	///��������֤��
	TZQThostFtdcMoneyType	ExchMargin;
	///��֤����
	TZQThostFtdcRatioType	MarginRateByMoney;
	///��֤����(������)
	TZQThostFtdcRatioType	MarginRateByVolume;
	///���ȱ��
	TZQThostFtdcLegIDType	LegID;
	///���ȳ���
	TZQThostFtdcLegMultipleType	LegMultiple;
	///��ϳֲֺ�Լ����
	TZQThostFtdcInstrumentIDType	CombInstrumentID;
};

///Ԥ��
struct CZQThostFtdcParkedOrderField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///��������
	TZQThostFtdcOrderRefType	OrderRef;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�����۸�����
	TZQThostFtdcOrderPriceTypeType	OrderPriceType;
	///��������
	TZQThostFtdcDirectionType	Direction;
	///��Ͽ�ƽ��־
	TZQThostFtdcCombOffsetFlagType	CombOffsetFlag;
	///���Ͷ���ױ���־
	TZQThostFtdcCombHedgeFlagType	CombHedgeFlag;
	///�۸�
	TZQThostFtdcStockPriceType	LimitPrice;
	///����
	TZQThostFtdcVolumeType	VolumeTotalOriginal;
	///��Ч������
	TZQThostFtdcTimeConditionType	TimeCondition;
	///GTD����
	TZQThostFtdcDateType	GTDDate;
	///�ɽ�������
	TZQThostFtdcVolumeConditionType	VolumeCondition;
	///��С�ɽ���
	TZQThostFtdcVolumeType	MinVolume;
	///��������
	TZQThostFtdcContingentConditionType	ContingentCondition;
	///ֹ���
	TZQThostFtdcPriceType	StopPrice;
	///ǿƽԭ��
	TZQThostFtdcForceCloseReasonType	ForceCloseReason;
	///�Զ������־
	TZQThostFtdcBoolType	IsAutoSuspend;
	///ҵ��Ԫ
	TZQThostFtdcBusinessUnitType	BusinessUnit;
	///������
	TZQThostFtdcRequestIDType	RequestID;
	///�û�ǿ����־
	TZQThostFtdcBoolType	UserForceClose;
	///Ԥ�񱨵����
	TZQThostFtdcParkedOrderIDType	ParkedOrderID;
	///�û�����
	TZQThostFtdcUserTypeType	UserType;
	///Ԥ��״̬
	TZQThostFtdcParkedOrderStatusType	Status;
	///�������
	TZQThostFtdcErrorIDType	ErrorID;
	///������Ϣ
	TZQThostFtdcErrorMsgType	ErrorMsg;
};

///����Ԥ�񵥲���
struct CZQThostFtdcParkedOrderActionField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///������������
	TZQThostFtdcOrderActionRefType	OrderActionRef;
	///��������
	TZQThostFtdcOrderRefType	OrderRef;
	///������
	TZQThostFtdcRequestIDType	RequestID;
	///ǰ�ñ��
	TZQThostFtdcFrontIDType	FrontID;
	///�Ự���
	TZQThostFtdcSessionIDType	SessionID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///������־
	TZQThostFtdcActionFlagType	ActionFlag;
	///�۸�
	TZQThostFtdcPriceType	LimitPrice;
	///�����仯
	TZQThostFtdcVolumeType	VolumeChange;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///Ԥ�񳷵������
	TZQThostFtdcParkedOrderActionIDType	ParkedOrderActionID;
	///�û�����
	TZQThostFtdcUserTypeType	UserType;
	///Ԥ�񳷵�״̬
	TZQThostFtdcParkedOrderStatusType	Status;
	///�������
	TZQThostFtdcErrorIDType	ErrorID;
	///������Ϣ
	TZQThostFtdcErrorMsgType	ErrorMsg;
};

///��ѯԤ��
struct CZQThostFtdcQryParkedOrderField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
};

///��ѯԤ�񳷵�
struct CZQThostFtdcQryParkedOrderActionField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
};

///ɾ��Ԥ��
struct CZQThostFtdcRemoveParkedOrderField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///Ԥ�񱨵����
	TZQThostFtdcParkedOrderIDType	ParkedOrderID;
};

///ɾ��Ԥ�񳷵�
struct CZQThostFtdcRemoveParkedOrderActionField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///Ԥ�񳷵����
	TZQThostFtdcParkedOrderActionIDType	ParkedOrderActionID;
};

///���͹�˾�����ʽ��㷨��
struct CZQThostFtdcInvestorWithdrawAlgorithmField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���߷�Χ
	TZQThostFtdcInvestorRangeType	InvestorRange;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///�����ʽ����
	TZQThostFtdcRatioType	UsingRatio;
};

///��ѯ��ϳֲ���ϸ
struct CZQThostFtdcQryInvestorPositionCombineDetailField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///��ϳֲֺ�Լ����
	TZQThostFtdcInstrumentIDType	CombInstrumentID;
};

///�ɽ�����
struct CZQThostFtdcMarketDataAveragePriceField
{
	///���վ���
	TZQThostFtdcPriceType	AveragePrice;
};

///У��Ͷ��������
struct CZQThostFtdcVerifyInvestorPasswordField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///����
	TZQThostFtdcPasswordType	Password;
};

///�û�IP
struct CZQThostFtdcUserIPField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///IP��ַ
	TZQThostFtdcIPAddressType	IPAddress;
	///IP��ַ����
	TZQThostFtdcIPAddressType	IPMask;
	///Mac��ַ
	TZQThostFtdcMacAddressType	MacAddress;
};

///�û��¼�֪ͨ��Ϣ
struct CZQThostFtdcTradingNoticeInfoField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///����ʱ��
	TZQThostFtdcTimeType	SendTime;
	///��Ϣ����
	TZQThostFtdcContentType	FieldContent;
	///����ϵ�к�
	TZQThostFtdcSequenceSeriesType	SequenceSeries;
	///���к�
	TZQThostFtdcSequenceNoType	SequenceNo;
};

///�û��¼�֪ͨ
struct CZQThostFtdcTradingNoticeField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���߷�Χ
	TZQThostFtdcInvestorRangeType	InvestorRange;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///����ϵ�к�
	TZQThostFtdcSequenceSeriesType	SequenceSeries;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///����ʱ��
	TZQThostFtdcTimeType	SendTime;
	///���к�
	TZQThostFtdcSequenceNoType	SequenceNo;
	///��Ϣ����
	TZQThostFtdcContentType	FieldContent;
};

///��ѯ�����¼�֪ͨ
struct CZQThostFtdcQryTradingNoticeField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
};

///��ѯ���󱨵�
struct CZQThostFtdcQryErrOrderField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
};

///���󱨵�
struct CZQThostFtdcErrOrderField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///��������
	TZQThostFtdcOrderRefType	OrderRef;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�����۸�����
	TZQThostFtdcOrderPriceTypeType	OrderPriceType;
	///��������
	TZQThostFtdcDirectionType	Direction;
	///��Ͽ�ƽ��־
	TZQThostFtdcCombOffsetFlagType	CombOffsetFlag;
	///���Ͷ���ױ���־
	TZQThostFtdcCombHedgeFlagType	CombHedgeFlag;
	///�۸�
	TZQThostFtdcStockPriceType	LimitPrice;
	///����
	TZQThostFtdcVolumeType	VolumeTotalOriginal;
	///��Ч������
	TZQThostFtdcTimeConditionType	TimeCondition;
	///GTD����
	TZQThostFtdcDateType	GTDDate;
	///�ɽ�������
	TZQThostFtdcVolumeConditionType	VolumeCondition;
	///��С�ɽ���
	TZQThostFtdcVolumeType	MinVolume;
	///��������
	TZQThostFtdcContingentConditionType	ContingentCondition;
	///ֹ���
	TZQThostFtdcPriceType	StopPrice;
	///ǿƽԭ��
	TZQThostFtdcForceCloseReasonType	ForceCloseReason;
	///�Զ������־
	TZQThostFtdcBoolType	IsAutoSuspend;
	///ҵ��Ԫ
	TZQThostFtdcBusinessUnitType	BusinessUnit;
	///������
	TZQThostFtdcRequestIDType	RequestID;
	///�û�ǿ����־
	TZQThostFtdcBoolType	UserForceClose;
	///�������
	TZQThostFtdcErrorIDType	ErrorID;
	///������Ϣ
	TZQThostFtdcErrorMsgType	ErrorMsg;
};

///��ѯ���󱨵�����
struct CZQThostFtdcErrorConditionalOrderField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///��������
	TZQThostFtdcOrderRefType	OrderRef;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�����۸�����
	TZQThostFtdcOrderPriceTypeType	OrderPriceType;
	///��������
	TZQThostFtdcDirectionType	Direction;
	///��Ͽ�ƽ��־
	TZQThostFtdcCombOffsetFlagType	CombOffsetFlag;
	///���Ͷ���ױ���־
	TZQThostFtdcCombHedgeFlagType	CombHedgeFlag;
	///�۸�
	TZQThostFtdcStockPriceType	LimitPrice;
	///����
	TZQThostFtdcVolumeType	VolumeTotalOriginal;
	///��Ч������
	TZQThostFtdcTimeConditionType	TimeCondition;
	///GTD����
	TZQThostFtdcDateType	GTDDate;
	///�ɽ�������
	TZQThostFtdcVolumeConditionType	VolumeCondition;
	///��С�ɽ���
	TZQThostFtdcVolumeType	MinVolume;
	///��������
	TZQThostFtdcContingentConditionType	ContingentCondition;
	///ֹ���
	TZQThostFtdcPriceType	StopPrice;
	///ǿƽԭ��
	TZQThostFtdcForceCloseReasonType	ForceCloseReason;
	///�Զ������־
	TZQThostFtdcBoolType	IsAutoSuspend;
	///ҵ��Ԫ
	TZQThostFtdcBusinessUnitType	BusinessUnit;
	///������
	TZQThostFtdcRequestIDType	RequestID;
	///���ر������
	TZQThostFtdcOrderLocalIDType	OrderLocalID;
	///��Ա����
	TZQThostFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TZQThostFtdcClientIDType	ClientID;
	///��Լ�ڽ������Ĵ���
	TZQThostFtdcExchangeInstIDType	ExchangeInstID;
	///����������Ա����
	TZQThostFtdcTraderIDType	TraderID;
	///��װ���
	TZQThostFtdcInstallIDType	InstallID;
	///�����ύ״̬
	TZQThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
	///������ʾ���
	TZQThostFtdcSequenceNoType	NotifySequence;
	///������
	TZQThostFtdcDateType	TradingDay;
	///������
	TZQThostFtdcSettlementIDType	SettlementID;
	///�������
	TZQThostFtdcOrderSysIDType	OrderSysID;
	///������Դ
	TZQThostFtdcOrderSourceType	OrderSource;
	///����״̬
	TZQThostFtdcOrderStatusType	OrderStatus;
	///��������
	TZQThostFtdcOrderTypeType	OrderType;
	///��ɽ�����
	TZQThostFtdcVolumeType	VolumeTraded;
	///ʣ������
	TZQThostFtdcVolumeType	VolumeTotal;
	///��������
	TZQThostFtdcDateType	InsertDate;
	///ί��ʱ��
	TZQThostFtdcTimeType	InsertTime;
	///����ʱ��
	TZQThostFtdcTimeType	ActiveTime;
	///����ʱ��
	TZQThostFtdcTimeType	SuspendTime;
	///����޸�ʱ��
	TZQThostFtdcTimeType	UpdateTime;
	///����ʱ��
	TZQThostFtdcTimeType	CancelTime;
	///����޸Ľ���������Ա����
	TZQThostFtdcTraderIDType	ActiveTraderID;
	///�����Ա���
	TZQThostFtdcParticipantIDType	ClearingPartID;
	///���
	TZQThostFtdcSequenceNoType	SequenceNo;
	///ǰ�ñ��
	TZQThostFtdcFrontIDType	FrontID;
	///�Ự���
	TZQThostFtdcSessionIDType	SessionID;
	///�û��˲�Ʒ��Ϣ
	TZQThostFtdcProductInfoType	UserProductInfo;
	///״̬��Ϣ
	TZQThostFtdcErrorMsgType	StatusMsg;
	///�û�ǿ����־
	TZQThostFtdcBoolType	UserForceClose;
	///�����û�����
	TZQThostFtdcUserIDType	ActiveUserID;
	///���͹�˾�������
	TZQThostFtdcSequenceNoType	BrokerOrderSeq;
	///��ر���
	TZQThostFtdcOrderSysIDType	RelativeOrderSysID;
	///Ӫҵ�����
	TZQThostFtdcBranchIDType	BranchID;
	///�ɽ�����
	TZQThostFtdcMoneyType	TradeAmount;
	///�Ƿ�ETF
	TZQThostFtdcBoolType	IsETF;
	///�ʽ��ʺ�
	TZQThostFtdcAccountIDType	AccountID;
	///�������
	TZQThostFtdcErrorIDType	ErrorID;
	///������Ϣ
	TZQThostFtdcErrorMsgType	ErrorMsg;
};

///��ѯ���󱨵�����
struct CZQThostFtdcQryErrOrderActionField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
};

///���󱨵�����
struct CZQThostFtdcErrOrderActionField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///������������
	TZQThostFtdcOrderActionRefType	OrderActionRef;
	///��������
	TZQThostFtdcOrderRefType	OrderRef;
	///������
	TZQThostFtdcRequestIDType	RequestID;
	///ǰ�ñ��
	TZQThostFtdcFrontIDType	FrontID;
	///�Ự���
	TZQThostFtdcSessionIDType	SessionID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///������־
	TZQThostFtdcActionFlagType	ActionFlag;
	///�۸�
	TZQThostFtdcPriceType	LimitPrice;
	///�����仯
	TZQThostFtdcVolumeType	VolumeChange;
	///��������
	TZQThostFtdcDateType	ActionDate;
	///����ʱ��
	TZQThostFtdcTimeType	ActionTime;
	///����������Ա����
	TZQThostFtdcTraderIDType	TraderID;
	///��װ���
	TZQThostFtdcInstallIDType	InstallID;
	///���ر������
	TZQThostFtdcOrderLocalIDType	OrderLocalID;
	///�������ر��
	TZQThostFtdcOrderLocalIDType	ActionLocalID;
	///��Ա����
	TZQThostFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TZQThostFtdcClientIDType	ClientID;
	///ҵ��Ԫ
	TZQThostFtdcBusinessUnitType	BusinessUnit;
	///��������״̬
	TZQThostFtdcOrderActionStatusType	OrderActionStatus;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///Ӫҵ�����
	TZQThostFtdcBranchIDType	BranchID;
	///״̬��Ϣ
	TZQThostFtdcErrorMsgType	StatusMsg;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///�������
	TZQThostFtdcErrorIDType	ErrorID;
	///������Ϣ
	TZQThostFtdcErrorMsgType	ErrorMsg;
};

///��ѯ������״̬
struct CZQThostFtdcQryExchangeSequenceField
{
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
};

///������״̬
struct CZQThostFtdcExchangeSequenceField
{
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///���
	TZQThostFtdcSequenceNoType	SequenceNo;
	///��Լ����״̬
	TZQThostFtdcInstrumentStatusType	MarketStatus;
};

///���ݼ۸��ѯ��󱨵�����
struct CZQThostFtdcQueryMaxOrderVolumeWithPriceField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///��������
	TZQThostFtdcDirectionType	Direction;
	///��ƽ��־
	TZQThostFtdcOffsetFlagType	OffsetFlag;
	///Ͷ���ױ���־
	TZQThostFtdcHedgeFlagType	HedgeFlag;
	///�������������
	TZQThostFtdcVolumeType	MaxVolume;
	///�����۸�
	TZQThostFtdcPriceType	Price;
};

///��ѯ���͹�˾���ײ���
struct CZQThostFtdcQryBrokerTradingParamsField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
};

///���͹�˾���ײ���
struct CZQThostFtdcBrokerTradingParamsField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///��֤��۸�����
	TZQThostFtdcMarginPriceTypeType	MarginPriceType;
	///ӯ���㷨
	TZQThostFtdcAlgorithmType	Algorithm;
	///�����Ƿ����ƽ��ӯ��
	TZQThostFtdcIncludeCloseProfitType	AvailIncludeCloseProfit;
};

///��ѯ���͹�˾�����㷨
struct CZQThostFtdcQryBrokerTradingAlgosField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
};

///���͹�˾�����㷨
struct CZQThostFtdcBrokerTradingAlgosField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///�ֲִ����㷨���
	TZQThostFtdcHandlePositionAlgoIDType	HandlePositionAlgoID;
	///Ѱ�ұ�֤�����㷨���
	TZQThostFtdcFindMarginRateAlgoIDType	FindMarginRateAlgoID;
	///�ʽ����㷨���
	TZQThostFtdcHandleTradingAccountAlgoIDType	HandleTradingAccountAlgoID;
};

///��ѯ���͹�˾�ʽ�
struct CZQThostFtdcQueryBrokerDepositField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
};

///���͹�˾�ʽ�
struct CZQThostFtdcBrokerDepositField
{
	///��������
	TZQThostFtdcTradeDateType	TradingDay;
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///��Ա����
	TZQThostFtdcParticipantIDType	ParticipantID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///�ϴν���׼����
	TZQThostFtdcMoneyType	PreBalance;
	///��ǰ��֤���ܶ�
	TZQThostFtdcMoneyType	CurrMargin;
	///ƽ��ӯ��
	TZQThostFtdcMoneyType	CloseProfit;
	///�ڻ�����׼����
	TZQThostFtdcMoneyType	Balance;
	///�����
	TZQThostFtdcMoneyType	Deposit;
	///������
	TZQThostFtdcMoneyType	Withdraw;
	///�����ʽ�
	TZQThostFtdcMoneyType	Available;
	///����׼����
	TZQThostFtdcMoneyType	Reserve;
	///����ı�֤��
	TZQThostFtdcMoneyType	FrozenMargin;
};

///��ѯ��֤����ϵͳ���͹�˾��Կ
struct CZQThostFtdcQryCFMMCBrokerKeyField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
};

///��֤����ϵͳ���͹�˾��Կ
struct CZQThostFtdcCFMMCBrokerKeyField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///���͹�˾ͳһ����
	TZQThostFtdcParticipantIDType	ParticipantID;
	///��Կ��������
	TZQThostFtdcDateType	CreateDate;
	///��Կ����ʱ��
	TZQThostFtdcTimeType	CreateTime;
	///��Կ���
	TZQThostFtdcSequenceNoType	KeyID;
	///��̬��Կ
	TZQThostFtdcCFMMCKeyType	CurrentKey;
	///��̬��Կ����
	TZQThostFtdcCFMMCKeyKindType	KeyKind;
};

///��֤����ϵͳ���͹�˾�ʽ��˻���Կ
struct CZQThostFtdcCFMMCTradingAccountKeyField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///���͹�˾ͳһ����
	TZQThostFtdcParticipantIDType	ParticipantID;
	///Ͷ�����ʺ�
	TZQThostFtdcAccountIDType	AccountID;
	///��Կ���
	TZQThostFtdcSequenceNoType	KeyID;
	///��̬��Կ
	TZQThostFtdcCFMMCKeyType	CurrentKey;
};

///�����ѯ��֤����ϵͳ���͹�˾�ʽ��˻���Կ
struct CZQThostFtdcQryCFMMCTradingAccountKeyField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
};

///�û���̬���Ʋ���
struct CZQThostFtdcBrokerUserOTPParamField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///��̬�����ṩ��
	TZQThostFtdcOTPVendorsIDType	OTPVendorsID;
	///��̬�������к�
	TZQThostFtdcSerialNumberType	SerialNumber;
	///������Կ
	TZQThostFtdcAuthKeyType	AuthKey;
	///Ư��ֵ
	TZQThostFtdcLastDriftType	LastDrift;
	///�ɹ�ֵ
	TZQThostFtdcLastSuccessType	LastSuccess;
	///��̬��������
	TZQThostFtdcOTPTypeType	OTPType;
};

///�ֹ�ͬ���û���̬����
struct CZQThostFtdcManualSyncBrokerUserOTPField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///��̬��������
	TZQThostFtdcOTPTypeType	OTPType;
	///��һ����̬����
	TZQThostFtdcPasswordType	FirstOTP;
	///�ڶ�����̬����
	TZQThostFtdcPasswordType	SecondOTP;
};

///ת�ʿ�������
struct CZQThostFtdcReqOpenAccountField
{
	///ҵ������
	TZQThostFtdcTradeCodeType	TradeCode;
	///���д���
	TZQThostFtdcBankIDType	BankID;
	///���з�֧��������
	TZQThostFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TZQThostFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TZQThostFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TZQThostFtdcTradeDateType	TradeDate;
	///����ʱ��
	TZQThostFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TZQThostFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TZQThostFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TZQThostFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TZQThostFtdcLastFragmentType	LastFragment;
	///�Ự��
	TZQThostFtdcSessionIDType	SessionID;
	///�ͻ�����
	TZQThostFtdcIndividualNameType	CustomerName;
	///֤������
	TZQThostFtdcIdCardTypeType	IdCardType;
	///֤������
	TZQThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�Ա�
	TZQThostFtdcGenderType	Gender;
	///���Ҵ���
	TZQThostFtdcCountryCodeType	CountryCode;
	///�ͻ�����
	TZQThostFtdcCustTypeType	CustType;
	///��ַ
	TZQThostFtdcAddressType	Address;
	///�ʱ�
	TZQThostFtdcZipCodeType	ZipCode;
	///�绰����
	TZQThostFtdcTelephoneType	Telephone;
	///�ֻ�
	TZQThostFtdcMobilePhoneType	MobilePhone;
	///����
	TZQThostFtdcFaxType	Fax;
	///�����ʼ�
	TZQThostFtdcEMailType	EMail;
	///�ʽ��˻�״̬
	TZQThostFtdcMoneyAccountStatusType	MoneyAccountStatus;
	///�����ʺ�
	TZQThostFtdcBankAccountType	BankAccount;
	///��������
	TZQThostFtdcPasswordType	BankPassWord;
	///Ͷ�����ʺ�
	TZQThostFtdcAccountIDType	AccountID;
	///�ڻ�����
	TZQThostFtdcPasswordType	Password;
	///��װ���
	TZQThostFtdcInstallIDType	InstallID;
	///��֤�ͻ�֤�������־
	TZQThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///���ִ���
	TZQThostFtdcCurrencyIDType	CurrencyID;
	///�㳮��־
	TZQThostFtdcCashExchangeCodeType	CashExchangeCode;
	///ժҪ
	TZQThostFtdcDigestType	Digest;
	///�����ʺ�����
	TZQThostFtdcBankAccTypeType	BankAccType;
	///������־
	TZQThostFtdcDeviceIDType	DeviceID;
	///�ڻ���λ�ʺ�����
	TZQThostFtdcBankAccTypeType	BankSecuAccType;
	///�ڻ���˾���б���
	TZQThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///�ڻ���λ�ʺ�
	TZQThostFtdcBankAccountType	BankSecuAcc;
	///���������־
	TZQThostFtdcPwdFlagType	BankPwdFlag;
	///�ڻ��ʽ�����˶Ա�־
	TZQThostFtdcPwdFlagType	SecuPwdFlag;
	///���׹�Ա
	TZQThostFtdcOperNoType	OperNo;
	///����ID
	TZQThostFtdcTIDType	TID;
};

///ת����������
struct CZQThostFtdcReqCancelAccountField
{
	///ҵ������
	TZQThostFtdcTradeCodeType	TradeCode;
	///���д���
	TZQThostFtdcBankIDType	BankID;
	///���з�֧��������
	TZQThostFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TZQThostFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TZQThostFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TZQThostFtdcTradeDateType	TradeDate;
	///����ʱ��
	TZQThostFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TZQThostFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TZQThostFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TZQThostFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TZQThostFtdcLastFragmentType	LastFragment;
	///�Ự��
	TZQThostFtdcSessionIDType	SessionID;
	///�ͻ�����
	TZQThostFtdcIndividualNameType	CustomerName;
	///֤������
	TZQThostFtdcIdCardTypeType	IdCardType;
	///֤������
	TZQThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�Ա�
	TZQThostFtdcGenderType	Gender;
	///���Ҵ���
	TZQThostFtdcCountryCodeType	CountryCode;
	///�ͻ�����
	TZQThostFtdcCustTypeType	CustType;
	///��ַ
	TZQThostFtdcAddressType	Address;
	///�ʱ�
	TZQThostFtdcZipCodeType	ZipCode;
	///�绰����
	TZQThostFtdcTelephoneType	Telephone;
	///�ֻ�
	TZQThostFtdcMobilePhoneType	MobilePhone;
	///����
	TZQThostFtdcFaxType	Fax;
	///�����ʼ�
	TZQThostFtdcEMailType	EMail;
	///�ʽ��˻�״̬
	TZQThostFtdcMoneyAccountStatusType	MoneyAccountStatus;
	///�����ʺ�
	TZQThostFtdcBankAccountType	BankAccount;
	///��������
	TZQThostFtdcPasswordType	BankPassWord;
	///Ͷ�����ʺ�
	TZQThostFtdcAccountIDType	AccountID;
	///�ڻ�����
	TZQThostFtdcPasswordType	Password;
	///��װ���
	TZQThostFtdcInstallIDType	InstallID;
	///��֤�ͻ�֤�������־
	TZQThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///���ִ���
	TZQThostFtdcCurrencyIDType	CurrencyID;
	///�㳮��־
	TZQThostFtdcCashExchangeCodeType	CashExchangeCode;
	///ժҪ
	TZQThostFtdcDigestType	Digest;
	///�����ʺ�����
	TZQThostFtdcBankAccTypeType	BankAccType;
	///������־
	TZQThostFtdcDeviceIDType	DeviceID;
	///�ڻ���λ�ʺ�����
	TZQThostFtdcBankAccTypeType	BankSecuAccType;
	///�ڻ���˾���б���
	TZQThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///�ڻ���λ�ʺ�
	TZQThostFtdcBankAccountType	BankSecuAcc;
	///���������־
	TZQThostFtdcPwdFlagType	BankPwdFlag;
	///�ڻ��ʽ�����˶Ա�־
	TZQThostFtdcPwdFlagType	SecuPwdFlag;
	///���׹�Ա
	TZQThostFtdcOperNoType	OperNo;
	///����ID
	TZQThostFtdcTIDType	TID;
};

///��������˻�����
struct CZQThostFtdcReqChangeAccountField
{
	///ҵ������
	TZQThostFtdcTradeCodeType	TradeCode;
	///���д���
	TZQThostFtdcBankIDType	BankID;
	///���з�֧��������
	TZQThostFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TZQThostFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TZQThostFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TZQThostFtdcTradeDateType	TradeDate;
	///����ʱ��
	TZQThostFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TZQThostFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TZQThostFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TZQThostFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TZQThostFtdcLastFragmentType	LastFragment;
	///�Ự��
	TZQThostFtdcSessionIDType	SessionID;
	///�ͻ�����
	TZQThostFtdcIndividualNameType	CustomerName;
	///֤������
	TZQThostFtdcIdCardTypeType	IdCardType;
	///֤������
	TZQThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�Ա�
	TZQThostFtdcGenderType	Gender;
	///���Ҵ���
	TZQThostFtdcCountryCodeType	CountryCode;
	///�ͻ�����
	TZQThostFtdcCustTypeType	CustType;
	///��ַ
	TZQThostFtdcAddressType	Address;
	///�ʱ�
	TZQThostFtdcZipCodeType	ZipCode;
	///�绰����
	TZQThostFtdcTelephoneType	Telephone;
	///�ֻ�
	TZQThostFtdcMobilePhoneType	MobilePhone;
	///����
	TZQThostFtdcFaxType	Fax;
	///�����ʼ�
	TZQThostFtdcEMailType	EMail;
	///�ʽ��˻�״̬
	TZQThostFtdcMoneyAccountStatusType	MoneyAccountStatus;
	///�����ʺ�
	TZQThostFtdcBankAccountType	BankAccount;
	///��������
	TZQThostFtdcPasswordType	BankPassWord;
	///�������ʺ�
	TZQThostFtdcBankAccountType	NewBankAccount;
	///����������
	TZQThostFtdcPasswordType	NewBankPassWord;
	///Ͷ�����ʺ�
	TZQThostFtdcAccountIDType	AccountID;
	///�ڻ�����
	TZQThostFtdcPasswordType	Password;
	///�����ʺ�����
	TZQThostFtdcBankAccTypeType	BankAccType;
	///��װ���
	TZQThostFtdcInstallIDType	InstallID;
	///��֤�ͻ�֤�������־
	TZQThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///���ִ���
	TZQThostFtdcCurrencyIDType	CurrencyID;
	///�ڻ���˾���б���
	TZQThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///���������־
	TZQThostFtdcPwdFlagType	BankPwdFlag;
	///�ڻ��ʽ�����˶Ա�־
	TZQThostFtdcPwdFlagType	SecuPwdFlag;
	///����ID
	TZQThostFtdcTIDType	TID;
	///ժҪ
	TZQThostFtdcDigestType	Digest;
};

///ת������
struct CZQThostFtdcReqTransferField
{
	///ҵ������
	TZQThostFtdcTradeCodeType	TradeCode;
	///���д���
	TZQThostFtdcBankIDType	BankID;
	///���з�֧��������
	TZQThostFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TZQThostFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TZQThostFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TZQThostFtdcTradeDateType	TradeDate;
	///����ʱ��
	TZQThostFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TZQThostFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TZQThostFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TZQThostFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TZQThostFtdcLastFragmentType	LastFragment;
	///�Ự��
	TZQThostFtdcSessionIDType	SessionID;
	///�ͻ�����
	TZQThostFtdcIndividualNameType	CustomerName;
	///֤������
	TZQThostFtdcIdCardTypeType	IdCardType;
	///֤������
	TZQThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�ͻ�����
	TZQThostFtdcCustTypeType	CustType;
	///�����ʺ�
	TZQThostFtdcBankAccountType	BankAccount;
	///��������
	TZQThostFtdcPasswordType	BankPassWord;
	///Ͷ�����ʺ�
	TZQThostFtdcAccountIDType	AccountID;
	///�ڻ�����
	TZQThostFtdcPasswordType	Password;
	///��װ���
	TZQThostFtdcInstallIDType	InstallID;
	///�ڻ���˾��ˮ��
	TZQThostFtdcFutureSerialType	FutureSerial;
	///�û���ʶ
	TZQThostFtdcUserIDType	UserID;
	///��֤�ͻ�֤�������־
	TZQThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///���ִ���
	TZQThostFtdcCurrencyIDType	CurrencyID;
	///ת�ʽ��
	TZQThostFtdcTradeAmountType	TradeAmount;
	///�ڻ���ȡ���
	TZQThostFtdcTradeAmountType	FutureFetchAmount;
	///����֧����־
	TZQThostFtdcFeePayFlagType	FeePayFlag;
	///Ӧ�տͻ�����
	TZQThostFtdcCustFeeType	CustFee;
	///Ӧ���ڻ���˾����
	TZQThostFtdcFutureFeeType	BrokerFee;
	///���ͷ������շ�����Ϣ
	TZQThostFtdcAddInfoType	Message;
	///ժҪ
	TZQThostFtdcDigestType	Digest;
	///�����ʺ�����
	TZQThostFtdcBankAccTypeType	BankAccType;
	///������־
	TZQThostFtdcDeviceIDType	DeviceID;
	///�ڻ���λ�ʺ�����
	TZQThostFtdcBankAccTypeType	BankSecuAccType;
	///�ڻ���˾���б���
	TZQThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///�ڻ���λ�ʺ�
	TZQThostFtdcBankAccountType	BankSecuAcc;
	///���������־
	TZQThostFtdcPwdFlagType	BankPwdFlag;
	///�ڻ��ʽ�����˶Ա�־
	TZQThostFtdcPwdFlagType	SecuPwdFlag;
	///���׹�Ա
	TZQThostFtdcOperNoType	OperNo;
	///������
	TZQThostFtdcRequestIDType	RequestID;
	///����ID
	TZQThostFtdcTIDType	TID;
	///ת�˽���״̬
	TZQThostFtdcTransferStatusType	TransferStatus;
};

///���з��������ʽ�ת�ڻ���Ӧ
struct CZQThostFtdcRspTransferField
{
	///ҵ������
	TZQThostFtdcTradeCodeType	TradeCode;
	///���д���
	TZQThostFtdcBankIDType	BankID;
	///���з�֧��������
	TZQThostFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TZQThostFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TZQThostFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TZQThostFtdcTradeDateType	TradeDate;
	///����ʱ��
	TZQThostFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TZQThostFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TZQThostFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TZQThostFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TZQThostFtdcLastFragmentType	LastFragment;
	///�Ự��
	TZQThostFtdcSessionIDType	SessionID;
	///�ͻ�����
	TZQThostFtdcIndividualNameType	CustomerName;
	///֤������
	TZQThostFtdcIdCardTypeType	IdCardType;
	///֤������
	TZQThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�ͻ�����
	TZQThostFtdcCustTypeType	CustType;
	///�����ʺ�
	TZQThostFtdcBankAccountType	BankAccount;
	///��������
	TZQThostFtdcPasswordType	BankPassWord;
	///Ͷ�����ʺ�
	TZQThostFtdcAccountIDType	AccountID;
	///�ڻ�����
	TZQThostFtdcPasswordType	Password;
	///��װ���
	TZQThostFtdcInstallIDType	InstallID;
	///�ڻ���˾��ˮ��
	TZQThostFtdcFutureSerialType	FutureSerial;
	///�û���ʶ
	TZQThostFtdcUserIDType	UserID;
	///��֤�ͻ�֤�������־
	TZQThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///���ִ���
	TZQThostFtdcCurrencyIDType	CurrencyID;
	///ת�ʽ��
	TZQThostFtdcTradeAmountType	TradeAmount;
	///�ڻ���ȡ���
	TZQThostFtdcTradeAmountType	FutureFetchAmount;
	///����֧����־
	TZQThostFtdcFeePayFlagType	FeePayFlag;
	///Ӧ�տͻ�����
	TZQThostFtdcCustFeeType	CustFee;
	///Ӧ���ڻ���˾����
	TZQThostFtdcFutureFeeType	BrokerFee;
	///���ͷ������շ�����Ϣ
	TZQThostFtdcAddInfoType	Message;
	///ժҪ
	TZQThostFtdcDigestType	Digest;
	///�����ʺ�����
	TZQThostFtdcBankAccTypeType	BankAccType;
	///������־
	TZQThostFtdcDeviceIDType	DeviceID;
	///�ڻ���λ�ʺ�����
	TZQThostFtdcBankAccTypeType	BankSecuAccType;
	///�ڻ���˾���б���
	TZQThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///�ڻ���λ�ʺ�
	TZQThostFtdcBankAccountType	BankSecuAcc;
	///���������־
	TZQThostFtdcPwdFlagType	BankPwdFlag;
	///�ڻ��ʽ�����˶Ա�־
	TZQThostFtdcPwdFlagType	SecuPwdFlag;
	///���׹�Ա
	TZQThostFtdcOperNoType	OperNo;
	///������
	TZQThostFtdcRequestIDType	RequestID;
	///����ID
	TZQThostFtdcTIDType	TID;
	///ת�˽���״̬
	TZQThostFtdcTransferStatusType	TransferStatus;
	///�������
	TZQThostFtdcErrorIDType	ErrorID;
	///������Ϣ
	TZQThostFtdcErrorMsgType	ErrorMsg;
};

///��������
struct CZQThostFtdcReqRepealField
{
	///����ʱ����
	TZQThostFtdcRepealTimeIntervalType	RepealTimeInterval;
	///�Ѿ���������
	TZQThostFtdcRepealedTimesType	RepealedTimes;
	///���г�����־
	TZQThostFtdcBankRepealFlagType	BankRepealFlag;
	///���̳�����־
	TZQThostFtdcBrokerRepealFlagType	BrokerRepealFlag;
	///������ƽ̨��ˮ��
	TZQThostFtdcPlateSerialType	PlateRepealSerial;
	///������������ˮ��
	TZQThostFtdcBankSerialType	BankRepealSerial;
	///�������ڻ���ˮ��
	TZQThostFtdcFutureSerialType	FutureRepealSerial;
	///ҵ������
	TZQThostFtdcTradeCodeType	TradeCode;
	///���д���
	TZQThostFtdcBankIDType	BankID;
	///���з�֧��������
	TZQThostFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TZQThostFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TZQThostFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TZQThostFtdcTradeDateType	TradeDate;
	///����ʱ��
	TZQThostFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TZQThostFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TZQThostFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TZQThostFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TZQThostFtdcLastFragmentType	LastFragment;
	///�Ự��
	TZQThostFtdcSessionIDType	SessionID;
	///�ͻ�����
	TZQThostFtdcIndividualNameType	CustomerName;
	///֤������
	TZQThostFtdcIdCardTypeType	IdCardType;
	///֤������
	TZQThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�ͻ�����
	TZQThostFtdcCustTypeType	CustType;
	///�����ʺ�
	TZQThostFtdcBankAccountType	BankAccount;
	///��������
	TZQThostFtdcPasswordType	BankPassWord;
	///Ͷ�����ʺ�
	TZQThostFtdcAccountIDType	AccountID;
	///�ڻ�����
	TZQThostFtdcPasswordType	Password;
	///��װ���
	TZQThostFtdcInstallIDType	InstallID;
	///�ڻ���˾��ˮ��
	TZQThostFtdcFutureSerialType	FutureSerial;
	///�û���ʶ
	TZQThostFtdcUserIDType	UserID;
	///��֤�ͻ�֤�������־
	TZQThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///���ִ���
	TZQThostFtdcCurrencyIDType	CurrencyID;
	///ת�ʽ��
	TZQThostFtdcTradeAmountType	TradeAmount;
	///�ڻ���ȡ���
	TZQThostFtdcTradeAmountType	FutureFetchAmount;
	///����֧����־
	TZQThostFtdcFeePayFlagType	FeePayFlag;
	///Ӧ�տͻ�����
	TZQThostFtdcCustFeeType	CustFee;
	///Ӧ���ڻ���˾����
	TZQThostFtdcFutureFeeType	BrokerFee;
	///���ͷ������շ�����Ϣ
	TZQThostFtdcAddInfoType	Message;
	///ժҪ
	TZQThostFtdcDigestType	Digest;
	///�����ʺ�����
	TZQThostFtdcBankAccTypeType	BankAccType;
	///������־
	TZQThostFtdcDeviceIDType	DeviceID;
	///�ڻ���λ�ʺ�����
	TZQThostFtdcBankAccTypeType	BankSecuAccType;
	///�ڻ���˾���б���
	TZQThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///�ڻ���λ�ʺ�
	TZQThostFtdcBankAccountType	BankSecuAcc;
	///���������־
	TZQThostFtdcPwdFlagType	BankPwdFlag;
	///�ڻ��ʽ�����˶Ա�־
	TZQThostFtdcPwdFlagType	SecuPwdFlag;
	///���׹�Ա
	TZQThostFtdcOperNoType	OperNo;
	///������
	TZQThostFtdcRequestIDType	RequestID;
	///����ID
	TZQThostFtdcTIDType	TID;
	///ת�˽���״̬
	TZQThostFtdcTransferStatusType	TransferStatus;
};

///������Ӧ
struct CZQThostFtdcRspRepealField
{
	///����ʱ����
	TZQThostFtdcRepealTimeIntervalType	RepealTimeInterval;
	///�Ѿ���������
	TZQThostFtdcRepealedTimesType	RepealedTimes;
	///���г�����־
	TZQThostFtdcBankRepealFlagType	BankRepealFlag;
	///���̳�����־
	TZQThostFtdcBrokerRepealFlagType	BrokerRepealFlag;
	///������ƽ̨��ˮ��
	TZQThostFtdcPlateSerialType	PlateRepealSerial;
	///������������ˮ��
	TZQThostFtdcBankSerialType	BankRepealSerial;
	///�������ڻ���ˮ��
	TZQThostFtdcFutureSerialType	FutureRepealSerial;
	///ҵ������
	TZQThostFtdcTradeCodeType	TradeCode;
	///���д���
	TZQThostFtdcBankIDType	BankID;
	///���з�֧��������
	TZQThostFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TZQThostFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TZQThostFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TZQThostFtdcTradeDateType	TradeDate;
	///����ʱ��
	TZQThostFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TZQThostFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TZQThostFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TZQThostFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TZQThostFtdcLastFragmentType	LastFragment;
	///�Ự��
	TZQThostFtdcSessionIDType	SessionID;
	///�ͻ�����
	TZQThostFtdcIndividualNameType	CustomerName;
	///֤������
	TZQThostFtdcIdCardTypeType	IdCardType;
	///֤������
	TZQThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�ͻ�����
	TZQThostFtdcCustTypeType	CustType;
	///�����ʺ�
	TZQThostFtdcBankAccountType	BankAccount;
	///��������
	TZQThostFtdcPasswordType	BankPassWord;
	///Ͷ�����ʺ�
	TZQThostFtdcAccountIDType	AccountID;
	///�ڻ�����
	TZQThostFtdcPasswordType	Password;
	///��װ���
	TZQThostFtdcInstallIDType	InstallID;
	///�ڻ���˾��ˮ��
	TZQThostFtdcFutureSerialType	FutureSerial;
	///�û���ʶ
	TZQThostFtdcUserIDType	UserID;
	///��֤�ͻ�֤�������־
	TZQThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///���ִ���
	TZQThostFtdcCurrencyIDType	CurrencyID;
	///ת�ʽ��
	TZQThostFtdcTradeAmountType	TradeAmount;
	///�ڻ���ȡ���
	TZQThostFtdcTradeAmountType	FutureFetchAmount;
	///����֧����־
	TZQThostFtdcFeePayFlagType	FeePayFlag;
	///Ӧ�տͻ�����
	TZQThostFtdcCustFeeType	CustFee;
	///Ӧ���ڻ���˾����
	TZQThostFtdcFutureFeeType	BrokerFee;
	///���ͷ������շ�����Ϣ
	TZQThostFtdcAddInfoType	Message;
	///ժҪ
	TZQThostFtdcDigestType	Digest;
	///�����ʺ�����
	TZQThostFtdcBankAccTypeType	BankAccType;
	///������־
	TZQThostFtdcDeviceIDType	DeviceID;
	///�ڻ���λ�ʺ�����
	TZQThostFtdcBankAccTypeType	BankSecuAccType;
	///�ڻ���˾���б���
	TZQThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///�ڻ���λ�ʺ�
	TZQThostFtdcBankAccountType	BankSecuAcc;
	///���������־
	TZQThostFtdcPwdFlagType	BankPwdFlag;
	///�ڻ��ʽ�����˶Ա�־
	TZQThostFtdcPwdFlagType	SecuPwdFlag;
	///���׹�Ա
	TZQThostFtdcOperNoType	OperNo;
	///������
	TZQThostFtdcRequestIDType	RequestID;
	///����ID
	TZQThostFtdcTIDType	TID;
	///ת�˽���״̬
	TZQThostFtdcTransferStatusType	TransferStatus;
	///�������
	TZQThostFtdcErrorIDType	ErrorID;
	///������Ϣ
	TZQThostFtdcErrorMsgType	ErrorMsg;
};

///��ѯ�˻���Ϣ����
struct CZQThostFtdcReqQueryAccountField
{
	///ҵ������
	TZQThostFtdcTradeCodeType	TradeCode;
	///���д���
	TZQThostFtdcBankIDType	BankID;
	///���з�֧��������
	TZQThostFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TZQThostFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TZQThostFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TZQThostFtdcTradeDateType	TradeDate;
	///����ʱ��
	TZQThostFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TZQThostFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TZQThostFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TZQThostFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TZQThostFtdcLastFragmentType	LastFragment;
	///�Ự��
	TZQThostFtdcSessionIDType	SessionID;
	///�ͻ�����
	TZQThostFtdcIndividualNameType	CustomerName;
	///֤������
	TZQThostFtdcIdCardTypeType	IdCardType;
	///֤������
	TZQThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�ͻ�����
	TZQThostFtdcCustTypeType	CustType;
	///�����ʺ�
	TZQThostFtdcBankAccountType	BankAccount;
	///��������
	TZQThostFtdcPasswordType	BankPassWord;
	///Ͷ�����ʺ�
	TZQThostFtdcAccountIDType	AccountID;
	///�ڻ�����
	TZQThostFtdcPasswordType	Password;
	///�ڻ���˾��ˮ��
	TZQThostFtdcFutureSerialType	FutureSerial;
	///��װ���
	TZQThostFtdcInstallIDType	InstallID;
	///�û���ʶ
	TZQThostFtdcUserIDType	UserID;
	///��֤�ͻ�֤�������־
	TZQThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///���ִ���
	TZQThostFtdcCurrencyIDType	CurrencyID;
	///ժҪ
	TZQThostFtdcDigestType	Digest;
	///�����ʺ�����
	TZQThostFtdcBankAccTypeType	BankAccType;
	///������־
	TZQThostFtdcDeviceIDType	DeviceID;
	///�ڻ���λ�ʺ�����
	TZQThostFtdcBankAccTypeType	BankSecuAccType;
	///�ڻ���˾���б���
	TZQThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///�ڻ���λ�ʺ�
	TZQThostFtdcBankAccountType	BankSecuAcc;
	///���������־
	TZQThostFtdcPwdFlagType	BankPwdFlag;
	///�ڻ��ʽ�����˶Ա�־
	TZQThostFtdcPwdFlagType	SecuPwdFlag;
	///���׹�Ա
	TZQThostFtdcOperNoType	OperNo;
	///������
	TZQThostFtdcRequestIDType	RequestID;
	///����ID
	TZQThostFtdcTIDType	TID;
};

///��ѯ�˻���Ϣ��Ӧ
struct CZQThostFtdcRspQueryAccountField
{
	///ҵ������
	TZQThostFtdcTradeCodeType	TradeCode;
	///���д���
	TZQThostFtdcBankIDType	BankID;
	///���з�֧��������
	TZQThostFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TZQThostFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TZQThostFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TZQThostFtdcTradeDateType	TradeDate;
	///����ʱ��
	TZQThostFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TZQThostFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TZQThostFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TZQThostFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TZQThostFtdcLastFragmentType	LastFragment;
	///�Ự��
	TZQThostFtdcSessionIDType	SessionID;
	///�ͻ�����
	TZQThostFtdcIndividualNameType	CustomerName;
	///֤������
	TZQThostFtdcIdCardTypeType	IdCardType;
	///֤������
	TZQThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�ͻ�����
	TZQThostFtdcCustTypeType	CustType;
	///�����ʺ�
	TZQThostFtdcBankAccountType	BankAccount;
	///��������
	TZQThostFtdcPasswordType	BankPassWord;
	///Ͷ�����ʺ�
	TZQThostFtdcAccountIDType	AccountID;
	///�ڻ�����
	TZQThostFtdcPasswordType	Password;
	///�ڻ���˾��ˮ��
	TZQThostFtdcFutureSerialType	FutureSerial;
	///��װ���
	TZQThostFtdcInstallIDType	InstallID;
	///�û���ʶ
	TZQThostFtdcUserIDType	UserID;
	///��֤�ͻ�֤�������־
	TZQThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///���ִ���
	TZQThostFtdcCurrencyIDType	CurrencyID;
	///ժҪ
	TZQThostFtdcDigestType	Digest;
	///�����ʺ�����
	TZQThostFtdcBankAccTypeType	BankAccType;
	///������־
	TZQThostFtdcDeviceIDType	DeviceID;
	///�ڻ���λ�ʺ�����
	TZQThostFtdcBankAccTypeType	BankSecuAccType;
	///�ڻ���˾���б���
	TZQThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///�ڻ���λ�ʺ�
	TZQThostFtdcBankAccountType	BankSecuAcc;
	///���������־
	TZQThostFtdcPwdFlagType	BankPwdFlag;
	///�ڻ��ʽ�����˶Ա�־
	TZQThostFtdcPwdFlagType	SecuPwdFlag;
	///���׹�Ա
	TZQThostFtdcOperNoType	OperNo;
	///������
	TZQThostFtdcRequestIDType	RequestID;
	///����ID
	TZQThostFtdcTIDType	TID;
	///���п��ý��
	TZQThostFtdcTradeAmountType	BankUseAmount;
	///���п�ȡ���
	TZQThostFtdcTradeAmountType	BankFetchAmount;
};

///����ǩ��ǩ��
struct CZQThostFtdcFutureSignIOField
{
	///ҵ������
	TZQThostFtdcTradeCodeType	TradeCode;
	///���д���
	TZQThostFtdcBankIDType	BankID;
	///���з�֧��������
	TZQThostFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TZQThostFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TZQThostFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TZQThostFtdcTradeDateType	TradeDate;
	///����ʱ��
	TZQThostFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TZQThostFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TZQThostFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TZQThostFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TZQThostFtdcLastFragmentType	LastFragment;
	///�Ự��
	TZQThostFtdcSessionIDType	SessionID;
	///��װ���
	TZQThostFtdcInstallIDType	InstallID;
	///�û���ʶ
	TZQThostFtdcUserIDType	UserID;
	///ժҪ
	TZQThostFtdcDigestType	Digest;
	///���ִ���
	TZQThostFtdcCurrencyIDType	CurrencyID;
	///������־
	TZQThostFtdcDeviceIDType	DeviceID;
	///�ڻ���˾���б���
	TZQThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///���׹�Ա
	TZQThostFtdcOperNoType	OperNo;
	///������
	TZQThostFtdcRequestIDType	RequestID;
	///����ID
	TZQThostFtdcTIDType	TID;
};

///����ǩ����Ӧ
struct CZQThostFtdcRspFutureSignInField
{
	///ҵ������
	TZQThostFtdcTradeCodeType	TradeCode;
	///���д���
	TZQThostFtdcBankIDType	BankID;
	///���з�֧��������
	TZQThostFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TZQThostFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TZQThostFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TZQThostFtdcTradeDateType	TradeDate;
	///����ʱ��
	TZQThostFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TZQThostFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TZQThostFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TZQThostFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TZQThostFtdcLastFragmentType	LastFragment;
	///�Ự��
	TZQThostFtdcSessionIDType	SessionID;
	///��װ���
	TZQThostFtdcInstallIDType	InstallID;
	///�û���ʶ
	TZQThostFtdcUserIDType	UserID;
	///ժҪ
	TZQThostFtdcDigestType	Digest;
	///���ִ���
	TZQThostFtdcCurrencyIDType	CurrencyID;
	///������־
	TZQThostFtdcDeviceIDType	DeviceID;
	///�ڻ���˾���б���
	TZQThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///���׹�Ա
	TZQThostFtdcOperNoType	OperNo;
	///������
	TZQThostFtdcRequestIDType	RequestID;
	///����ID
	TZQThostFtdcTIDType	TID;
	///�������
	TZQThostFtdcErrorIDType	ErrorID;
	///������Ϣ
	TZQThostFtdcErrorMsgType	ErrorMsg;
	///PIN��Կ
	TZQThostFtdcPasswordKeyType	PinKey;
	///MAC��Կ
	TZQThostFtdcPasswordKeyType	MacKey;
};

///����ǩ������
struct CZQThostFtdcReqFutureSignOutField
{
	///ҵ������
	TZQThostFtdcTradeCodeType	TradeCode;
	///���д���
	TZQThostFtdcBankIDType	BankID;
	///���з�֧��������
	TZQThostFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TZQThostFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TZQThostFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TZQThostFtdcTradeDateType	TradeDate;
	///����ʱ��
	TZQThostFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TZQThostFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TZQThostFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TZQThostFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TZQThostFtdcLastFragmentType	LastFragment;
	///�Ự��
	TZQThostFtdcSessionIDType	SessionID;
	///��װ���
	TZQThostFtdcInstallIDType	InstallID;
	///�û���ʶ
	TZQThostFtdcUserIDType	UserID;
	///ժҪ
	TZQThostFtdcDigestType	Digest;
	///���ִ���
	TZQThostFtdcCurrencyIDType	CurrencyID;
	///������־
	TZQThostFtdcDeviceIDType	DeviceID;
	///�ڻ���˾���б���
	TZQThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///���׹�Ա
	TZQThostFtdcOperNoType	OperNo;
	///������
	TZQThostFtdcRequestIDType	RequestID;
	///����ID
	TZQThostFtdcTIDType	TID;
};

///����ǩ����Ӧ
struct CZQThostFtdcRspFutureSignOutField
{
	///ҵ������
	TZQThostFtdcTradeCodeType	TradeCode;
	///���д���
	TZQThostFtdcBankIDType	BankID;
	///���з�֧��������
	TZQThostFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TZQThostFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TZQThostFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TZQThostFtdcTradeDateType	TradeDate;
	///����ʱ��
	TZQThostFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TZQThostFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TZQThostFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TZQThostFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TZQThostFtdcLastFragmentType	LastFragment;
	///�Ự��
	TZQThostFtdcSessionIDType	SessionID;
	///��װ���
	TZQThostFtdcInstallIDType	InstallID;
	///�û���ʶ
	TZQThostFtdcUserIDType	UserID;
	///ժҪ
	TZQThostFtdcDigestType	Digest;
	///���ִ���
	TZQThostFtdcCurrencyIDType	CurrencyID;
	///������־
	TZQThostFtdcDeviceIDType	DeviceID;
	///�ڻ���˾���б���
	TZQThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///���׹�Ա
	TZQThostFtdcOperNoType	OperNo;
	///������
	TZQThostFtdcRequestIDType	RequestID;
	///����ID
	TZQThostFtdcTIDType	TID;
	///�������
	TZQThostFtdcErrorIDType	ErrorID;
	///������Ϣ
	TZQThostFtdcErrorMsgType	ErrorMsg;
};

///��ѯָ����ˮ�ŵĽ��׽������
struct CZQThostFtdcReqQueryTradeResultBySerialField
{
	///ҵ������
	TZQThostFtdcTradeCodeType	TradeCode;
	///���д���
	TZQThostFtdcBankIDType	BankID;
	///���з�֧��������
	TZQThostFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TZQThostFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TZQThostFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TZQThostFtdcTradeDateType	TradeDate;
	///����ʱ��
	TZQThostFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TZQThostFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TZQThostFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TZQThostFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TZQThostFtdcLastFragmentType	LastFragment;
	///�Ự��
	TZQThostFtdcSessionIDType	SessionID;
	///��ˮ��
	TZQThostFtdcSerialType	Reference;
	///����ˮ�ŷ����ߵĻ�������
	TZQThostFtdcInstitutionTypeType	RefrenceIssureType;
	///����ˮ�ŷ����߻�������
	TZQThostFtdcOrganCodeType	RefrenceIssure;
	///�ͻ�����
	TZQThostFtdcIndividualNameType	CustomerName;
	///֤������
	TZQThostFtdcIdCardTypeType	IdCardType;
	///֤������
	TZQThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�ͻ�����
	TZQThostFtdcCustTypeType	CustType;
	///�����ʺ�
	TZQThostFtdcBankAccountType	BankAccount;
	///��������
	TZQThostFtdcPasswordType	BankPassWord;
	///Ͷ�����ʺ�
	TZQThostFtdcAccountIDType	AccountID;
	///�ڻ�����
	TZQThostFtdcPasswordType	Password;
	///���ִ���
	TZQThostFtdcCurrencyIDType	CurrencyID;
	///ת�ʽ��
	TZQThostFtdcTradeAmountType	TradeAmount;
	///ժҪ
	TZQThostFtdcDigestType	Digest;
};

///��ѯָ����ˮ�ŵĽ��׽����Ӧ
struct CZQThostFtdcRspQueryTradeResultBySerialField
{
	///ҵ������
	TZQThostFtdcTradeCodeType	TradeCode;
	///���д���
	TZQThostFtdcBankIDType	BankID;
	///���з�֧��������
	TZQThostFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TZQThostFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TZQThostFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TZQThostFtdcTradeDateType	TradeDate;
	///����ʱ��
	TZQThostFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TZQThostFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TZQThostFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TZQThostFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TZQThostFtdcLastFragmentType	LastFragment;
	///�Ự��
	TZQThostFtdcSessionIDType	SessionID;
	///�������
	TZQThostFtdcErrorIDType	ErrorID;
	///������Ϣ
	TZQThostFtdcErrorMsgType	ErrorMsg;
	///��ˮ��
	TZQThostFtdcSerialType	Reference;
	///����ˮ�ŷ����ߵĻ�������
	TZQThostFtdcInstitutionTypeType	RefrenceIssureType;
	///����ˮ�ŷ����߻�������
	TZQThostFtdcOrganCodeType	RefrenceIssure;
	///ԭʼ���ش���
	TZQThostFtdcReturnCodeType	OriginReturnCode;
	///ԭʼ����������
	TZQThostFtdcDescrInfoForReturnCodeType	OriginDescrInfoForReturnCode;
	///�����ʺ�
	TZQThostFtdcBankAccountType	BankAccount;
	///��������
	TZQThostFtdcPasswordType	BankPassWord;
	///Ͷ�����ʺ�
	TZQThostFtdcAccountIDType	AccountID;
	///�ڻ�����
	TZQThostFtdcPasswordType	Password;
	///���ִ���
	TZQThostFtdcCurrencyIDType	CurrencyID;
	///ת�ʽ��
	TZQThostFtdcTradeAmountType	TradeAmount;
	///ժҪ
	TZQThostFtdcDigestType	Digest;
};

///�����ļ���������
struct CZQThostFtdcReqDayEndFileReadyField
{
	///ҵ������
	TZQThostFtdcTradeCodeType	TradeCode;
	///���д���
	TZQThostFtdcBankIDType	BankID;
	///���з�֧��������
	TZQThostFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TZQThostFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TZQThostFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TZQThostFtdcTradeDateType	TradeDate;
	///����ʱ��
	TZQThostFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TZQThostFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TZQThostFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TZQThostFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TZQThostFtdcLastFragmentType	LastFragment;
	///�Ự��
	TZQThostFtdcSessionIDType	SessionID;
	///�ļ�ҵ����
	TZQThostFtdcFileBusinessCodeType	FileBusinessCode;
	///ժҪ
	TZQThostFtdcDigestType	Digest;
};

///���ؽ��
struct CZQThostFtdcReturnResultField
{
	///���ش���
	TZQThostFtdcReturnCodeType	ReturnCode;
	///����������
	TZQThostFtdcDescrInfoForReturnCodeType	DescrInfoForReturnCode;
};

///��֤�ڻ��ʽ�����
struct CZQThostFtdcVerifyFuturePasswordField
{
	///ҵ������
	TZQThostFtdcTradeCodeType	TradeCode;
	///���д���
	TZQThostFtdcBankIDType	BankID;
	///���з�֧��������
	TZQThostFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TZQThostFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TZQThostFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TZQThostFtdcTradeDateType	TradeDate;
	///����ʱ��
	TZQThostFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TZQThostFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TZQThostFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TZQThostFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TZQThostFtdcLastFragmentType	LastFragment;
	///�Ự��
	TZQThostFtdcSessionIDType	SessionID;
	///Ͷ�����ʺ�
	TZQThostFtdcAccountIDType	AccountID;
	///�ڻ�����
	TZQThostFtdcPasswordType	Password;
	///�����ʺ�
	TZQThostFtdcBankAccountType	BankAccount;
	///��������
	TZQThostFtdcPasswordType	BankPassWord;
	///��װ���
	TZQThostFtdcInstallIDType	InstallID;
	///����ID
	TZQThostFtdcTIDType	TID;
};

///��֤�ͻ���Ϣ
struct CZQThostFtdcVerifyCustInfoField
{
	///�ͻ�����
	TZQThostFtdcIndividualNameType	CustomerName;
	///֤������
	TZQThostFtdcIdCardTypeType	IdCardType;
	///֤������
	TZQThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�ͻ�����
	TZQThostFtdcCustTypeType	CustType;
};

///��֤�ڻ��ʽ�����Ϳͻ���Ϣ
struct CZQThostFtdcVerifyFuturePasswordAndCustInfoField
{
	///�ͻ�����
	TZQThostFtdcIndividualNameType	CustomerName;
	///֤������
	TZQThostFtdcIdCardTypeType	IdCardType;
	///֤������
	TZQThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�ͻ�����
	TZQThostFtdcCustTypeType	CustType;
	///Ͷ�����ʺ�
	TZQThostFtdcAccountIDType	AccountID;
	///�ڻ�����
	TZQThostFtdcPasswordType	Password;
};

///��֤�ڻ��ʽ�����Ϳͻ���Ϣ
struct CZQThostFtdcDepositResultInformField
{
	///�������ˮ�ţ�����ˮ��Ϊ���ڱ��̷��ص���ˮ��
	TZQThostFtdcDepositSeqNoType	DepositSeqNo;
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///�����
	TZQThostFtdcMoneyType	Deposit;
	///������
	TZQThostFtdcRequestIDType	RequestID;
	///���ش���
	TZQThostFtdcReturnCodeType	ReturnCode;
	///����������
	TZQThostFtdcDescrInfoForReturnCodeType	DescrInfoForReturnCode;
};

///���׺��������ڱ��̷�����Կͬ������
struct CZQThostFtdcReqSyncKeyField
{
	///ҵ������
	TZQThostFtdcTradeCodeType	TradeCode;
	///���д���
	TZQThostFtdcBankIDType	BankID;
	///���з�֧��������
	TZQThostFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TZQThostFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TZQThostFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TZQThostFtdcTradeDateType	TradeDate;
	///����ʱ��
	TZQThostFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TZQThostFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TZQThostFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TZQThostFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TZQThostFtdcLastFragmentType	LastFragment;
	///�Ự��
	TZQThostFtdcSessionIDType	SessionID;
	///��װ���
	TZQThostFtdcInstallIDType	InstallID;
	///�û���ʶ
	TZQThostFtdcUserIDType	UserID;
	///���׺��ĸ����ڱ��̵���Ϣ
	TZQThostFtdcAddInfoType	Message;
	///������־
	TZQThostFtdcDeviceIDType	DeviceID;
	///�ڻ���˾���б���
	TZQThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///���׹�Ա
	TZQThostFtdcOperNoType	OperNo;
	///������
	TZQThostFtdcRequestIDType	RequestID;
	///����ID
	TZQThostFtdcTIDType	TID;
};

///���׺��������ڱ��̷�����Կͬ����Ӧ
struct CZQThostFtdcRspSyncKeyField
{
	///ҵ������
	TZQThostFtdcTradeCodeType	TradeCode;
	///���д���
	TZQThostFtdcBankIDType	BankID;
	///���з�֧��������
	TZQThostFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TZQThostFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TZQThostFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TZQThostFtdcTradeDateType	TradeDate;
	///����ʱ��
	TZQThostFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TZQThostFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TZQThostFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TZQThostFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TZQThostFtdcLastFragmentType	LastFragment;
	///�Ự��
	TZQThostFtdcSessionIDType	SessionID;
	///��װ���
	TZQThostFtdcInstallIDType	InstallID;
	///�û���ʶ
	TZQThostFtdcUserIDType	UserID;
	///���׺��ĸ����ڱ��̵���Ϣ
	TZQThostFtdcAddInfoType	Message;
	///������־
	TZQThostFtdcDeviceIDType	DeviceID;
	///�ڻ���˾���б���
	TZQThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///���׹�Ա
	TZQThostFtdcOperNoType	OperNo;
	///������
	TZQThostFtdcRequestIDType	RequestID;
	///����ID
	TZQThostFtdcTIDType	TID;
	///�������
	TZQThostFtdcErrorIDType	ErrorID;
	///������Ϣ
	TZQThostFtdcErrorMsgType	ErrorMsg;
};

///��ѯ�˻���Ϣ֪ͨ
struct CZQThostFtdcNotifyQueryAccountField
{
	///ҵ������
	TZQThostFtdcTradeCodeType	TradeCode;
	///���д���
	TZQThostFtdcBankIDType	BankID;
	///���з�֧��������
	TZQThostFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TZQThostFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TZQThostFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TZQThostFtdcTradeDateType	TradeDate;
	///����ʱ��
	TZQThostFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TZQThostFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TZQThostFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TZQThostFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TZQThostFtdcLastFragmentType	LastFragment;
	///�Ự��
	TZQThostFtdcSessionIDType	SessionID;
	///�ͻ�����
	TZQThostFtdcIndividualNameType	CustomerName;
	///֤������
	TZQThostFtdcIdCardTypeType	IdCardType;
	///֤������
	TZQThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�ͻ�����
	TZQThostFtdcCustTypeType	CustType;
	///�����ʺ�
	TZQThostFtdcBankAccountType	BankAccount;
	///��������
	TZQThostFtdcPasswordType	BankPassWord;
	///Ͷ�����ʺ�
	TZQThostFtdcAccountIDType	AccountID;
	///�ڻ�����
	TZQThostFtdcPasswordType	Password;
	///�ڻ���˾��ˮ��
	TZQThostFtdcFutureSerialType	FutureSerial;
	///��װ���
	TZQThostFtdcInstallIDType	InstallID;
	///�û���ʶ
	TZQThostFtdcUserIDType	UserID;
	///��֤�ͻ�֤�������־
	TZQThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///���ִ���
	TZQThostFtdcCurrencyIDType	CurrencyID;
	///ժҪ
	TZQThostFtdcDigestType	Digest;
	///�����ʺ�����
	TZQThostFtdcBankAccTypeType	BankAccType;
	///������־
	TZQThostFtdcDeviceIDType	DeviceID;
	///�ڻ���λ�ʺ�����
	TZQThostFtdcBankAccTypeType	BankSecuAccType;
	///�ڻ���˾���б���
	TZQThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///�ڻ���λ�ʺ�
	TZQThostFtdcBankAccountType	BankSecuAcc;
	///���������־
	TZQThostFtdcPwdFlagType	BankPwdFlag;
	///�ڻ��ʽ�����˶Ա�־
	TZQThostFtdcPwdFlagType	SecuPwdFlag;
	///���׹�Ա
	TZQThostFtdcOperNoType	OperNo;
	///������
	TZQThostFtdcRequestIDType	RequestID;
	///����ID
	TZQThostFtdcTIDType	TID;
	///���п��ý��
	TZQThostFtdcTradeAmountType	BankUseAmount;
	///���п�ȡ���
	TZQThostFtdcTradeAmountType	BankFetchAmount;
	///�������
	TZQThostFtdcErrorIDType	ErrorID;
	///������Ϣ
	TZQThostFtdcErrorMsgType	ErrorMsg;
};

///����ת�˽�����ˮ��
struct CZQThostFtdcTransferSerialField
{
	///ƽ̨��ˮ��
	TZQThostFtdcPlateSerialType	PlateSerial;
	///���׷�������
	TZQThostFtdcTradeDateType	TradeDate;
	///��������
	TZQThostFtdcDateType	TradingDay;
	///����ʱ��
	TZQThostFtdcTradeTimeType	TradeTime;
	///���״���
	TZQThostFtdcTradeCodeType	TradeCode;
	///�Ự���
	TZQThostFtdcSessionIDType	SessionID;
	///���б���
	TZQThostFtdcBankIDType	BankID;
	///���з�֧��������
	TZQThostFtdcBankBrchIDType	BankBranchID;
	///�����ʺ�����
	TZQThostFtdcBankAccTypeType	BankAccType;
	///�����ʺ�
	TZQThostFtdcBankAccountType	BankAccount;
	///������ˮ��
	TZQThostFtdcBankSerialType	BankSerial;
	///�ڻ���˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TZQThostFtdcFutureBranchIDType	BrokerBranchID;
	///�ڻ���˾�ʺ�����
	TZQThostFtdcFutureAccTypeType	FutureAccType;
	///Ͷ�����ʺ�
	TZQThostFtdcAccountIDType	AccountID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///�ڻ���˾��ˮ��
	TZQThostFtdcFutureSerialType	FutureSerial;
	///֤������
	TZQThostFtdcIdCardTypeType	IdCardType;
	///֤������
	TZQThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///���ִ���
	TZQThostFtdcCurrencyIDType	CurrencyID;
	///���׽��
	TZQThostFtdcTradeAmountType	TradeAmount;
	///Ӧ�տͻ�����
	TZQThostFtdcCustFeeType	CustFee;
	///Ӧ���ڻ���˾����
	TZQThostFtdcFutureFeeType	BrokerFee;
	///��Ч��־
	TZQThostFtdcAvailabilityFlagType	AvailabilityFlag;
	///����Ա
	TZQThostFtdcOperatorCodeType	OperatorCode;
	///�������ʺ�
	TZQThostFtdcBankAccountType	BankNewAccount;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///ժҪ
	TZQThostFtdcDigestType	Digest;
	///�������
	TZQThostFtdcErrorIDType	ErrorID;
	///������Ϣ
	TZQThostFtdcErrorMsgType	ErrorMsg;
};

///�����ѯת����ˮ
struct CZQThostFtdcQryTransferSerialField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ�����ʺ�
	TZQThostFtdcAccountIDType	AccountID;
	///���б���
	TZQThostFtdcBankIDType	BankID;
};

///����ǩ��֪ͨ
struct CZQThostFtdcNotifyFutureSignInField
{
	///ҵ������
	TZQThostFtdcTradeCodeType	TradeCode;
	///���д���
	TZQThostFtdcBankIDType	BankID;
	///���з�֧��������
	TZQThostFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TZQThostFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TZQThostFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TZQThostFtdcTradeDateType	TradeDate;
	///����ʱ��
	TZQThostFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TZQThostFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TZQThostFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TZQThostFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TZQThostFtdcLastFragmentType	LastFragment;
	///�Ự��
	TZQThostFtdcSessionIDType	SessionID;
	///��װ���
	TZQThostFtdcInstallIDType	InstallID;
	///�û���ʶ
	TZQThostFtdcUserIDType	UserID;
	///ժҪ
	TZQThostFtdcDigestType	Digest;
	///���ִ���
	TZQThostFtdcCurrencyIDType	CurrencyID;
	///������־
	TZQThostFtdcDeviceIDType	DeviceID;
	///�ڻ���˾���б���
	TZQThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///���׹�Ա
	TZQThostFtdcOperNoType	OperNo;
	///������
	TZQThostFtdcRequestIDType	RequestID;
	///����ID
	TZQThostFtdcTIDType	TID;
	///�������
	TZQThostFtdcErrorIDType	ErrorID;
	///������Ϣ
	TZQThostFtdcErrorMsgType	ErrorMsg;
	///PIN��Կ
	TZQThostFtdcPasswordKeyType	PinKey;
	///MAC��Կ
	TZQThostFtdcPasswordKeyType	MacKey;
};

///����ǩ��֪ͨ
struct CZQThostFtdcNotifyFutureSignOutField
{
	///ҵ������
	TZQThostFtdcTradeCodeType	TradeCode;
	///���д���
	TZQThostFtdcBankIDType	BankID;
	///���з�֧��������
	TZQThostFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TZQThostFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TZQThostFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TZQThostFtdcTradeDateType	TradeDate;
	///����ʱ��
	TZQThostFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TZQThostFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TZQThostFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TZQThostFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TZQThostFtdcLastFragmentType	LastFragment;
	///�Ự��
	TZQThostFtdcSessionIDType	SessionID;
	///��װ���
	TZQThostFtdcInstallIDType	InstallID;
	///�û���ʶ
	TZQThostFtdcUserIDType	UserID;
	///ժҪ
	TZQThostFtdcDigestType	Digest;
	///���ִ���
	TZQThostFtdcCurrencyIDType	CurrencyID;
	///������־
	TZQThostFtdcDeviceIDType	DeviceID;
	///�ڻ���˾���б���
	TZQThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///���׹�Ա
	TZQThostFtdcOperNoType	OperNo;
	///������
	TZQThostFtdcRequestIDType	RequestID;
	///����ID
	TZQThostFtdcTIDType	TID;
	///�������
	TZQThostFtdcErrorIDType	ErrorID;
	///������Ϣ
	TZQThostFtdcErrorMsgType	ErrorMsg;
};

///���׺��������ڱ��̷�����Կͬ����������֪ͨ
struct CZQThostFtdcNotifySyncKeyField
{
	///ҵ������
	TZQThostFtdcTradeCodeType	TradeCode;
	///���д���
	TZQThostFtdcBankIDType	BankID;
	///���з�֧��������
	TZQThostFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TZQThostFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TZQThostFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TZQThostFtdcTradeDateType	TradeDate;
	///����ʱ��
	TZQThostFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TZQThostFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TZQThostFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TZQThostFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TZQThostFtdcLastFragmentType	LastFragment;
	///�Ự��
	TZQThostFtdcSessionIDType	SessionID;
	///��װ���
	TZQThostFtdcInstallIDType	InstallID;
	///�û���ʶ
	TZQThostFtdcUserIDType	UserID;
	///���׺��ĸ����ڱ��̵���Ϣ
	TZQThostFtdcAddInfoType	Message;
	///������־
	TZQThostFtdcDeviceIDType	DeviceID;
	///�ڻ���˾���б���
	TZQThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///���׹�Ա
	TZQThostFtdcOperNoType	OperNo;
	///������
	TZQThostFtdcRequestIDType	RequestID;
	///����ID
	TZQThostFtdcTIDType	TID;
	///�������
	TZQThostFtdcErrorIDType	ErrorID;
	///������Ϣ
	TZQThostFtdcErrorMsgType	ErrorMsg;
};

///�ͻ����ֲ�����
struct CZQThostFtdcMaxStockPositionLimitField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///�ɱ�����
	TZQThostFtdcCapitalStockTypeType	CapitalStockType;
	///���ֲ�����ռ�ɱ��ı���
	TZQThostFtdcRatioType	Ratio;
};

///�ʽ�ת��ת������
struct CZQThostFtdcReqFundIOCTPAccountField
{
	///֤ȯ��˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///Ͷ�����ʽ��ʺ�
	TZQThostFtdcAccountIDType	AccountID;
	///�ʽ��ʻ�����
	TZQThostFtdcPasswordType	Password;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///�Ự���
	TZQThostFtdcSessionIDType	SessionID;
	///CTP������ˮ��
	TZQThostFtdcFutureSerialType	CTPSerial;
	///ת��ƽ̨��ˮ��
	TZQThostFtdcPlateSerialType	PlateSerial;
	///��������ˮ��
	TZQThostFtdcBankSerialType	SettlementSerial;
	///���׽��
	TZQThostFtdcTradeAmountType	TradeAmount;
	///������
	TZQThostFtdcDateType	TradingDay;
	///ת��ʱ��
	TZQThostFtdcTimeType	TradeTime;
	///ժҪ
	TZQThostFtdcDigestType	Digest;
};

///�ʽ�ת��ת��Ӧ��
struct CZQThostFtdcRspFundIOCTPAccountField
{
	///֤ȯ��˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///Ͷ�����ʽ��ʺ�
	TZQThostFtdcAccountIDType	AccountID;
	///�ʽ��ʻ�����
	TZQThostFtdcPasswordType	Password;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///�Ự���
	TZQThostFtdcSessionIDType	SessionID;
	///CTP������ˮ��
	TZQThostFtdcFutureSerialType	CTPSerial;
	///ת��ƽ̨��ˮ��
	TZQThostFtdcPlateSerialType	PlateSerial;
	///��������ˮ��
	TZQThostFtdcBankSerialType	SettlementSerial;
	///���׽��
	TZQThostFtdcTradeAmountType	TradeAmount;
	///������
	TZQThostFtdcDateType	TradingDay;
	///ת��ʱ��
	TZQThostFtdcTimeType	TradeTime;
	///ժҪ
	TZQThostFtdcDigestType	Digest;
	///�������
	TZQThostFtdcFundDirectionType	FundDirection;
};

///ծȯ��Ϣ
struct CZQThostFtdcBondInterestField
{
	///������
	TZQThostFtdcDateType	TradingDay;
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
	///��Ϣ
	TZQThostFtdcInterestType	Interest;
};

///��ѯծȯ��Ϣ
struct CZQThostFtdcQryBondInterestField
{
	///����������
	TZQThostFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TZQThostFtdcInstrumentIDType	InstrumentID;
};

///��ѯ�ʽ�ת��ת��CTP
struct CZQThostFtdcQryFundIOCTPAccountField
{
	///���͹�˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ�����ʽ��ʺ�
	TZQThostFtdcAccountIDType	AccountID;
};

///�ʽ�ת��ת��CTP
struct CZQThostFtdcFundIOCTPAccountField
{
	///֤ȯ��˾����
	TZQThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TZQThostFtdcInvestorIDType	InvestorID;
	///Ͷ�����ʽ��ʺ�
	TZQThostFtdcAccountIDType	AccountID;
	///�ʽ��ʻ�����
	TZQThostFtdcPasswordType	Password;
	///�û�����
	TZQThostFtdcUserIDType	UserID;
	///�Ự���
	TZQThostFtdcSessionIDType	SessionID;
	///CTP������ˮ��
	TZQThostFtdcFutureSerialType	CTPSerial;
	///ת��ƽ̨��ˮ��
	TZQThostFtdcPlateSerialType	PlateSerial;
	///��������ˮ��
	TZQThostFtdcBankSerialType	SettlementSerial;
	///���׽��
	TZQThostFtdcTradeAmountType	TradeAmount;
	///������
	TZQThostFtdcDateType	TradingDay;
	///ת��ʱ��
	TZQThostFtdcTimeType	TradeTime;
	///ժҪ
	TZQThostFtdcDigestType	Digest;
	///�������
	TZQThostFtdcFundDirectionType	FundDirection;
	///�������
	TZQThostFtdcErrorIDType	ErrorID;
	///������Ϣ
	TZQThostFtdcErrorMsgType	ErrorMsg;
};


_SHFE_NS_STOCK_END_
#endif
