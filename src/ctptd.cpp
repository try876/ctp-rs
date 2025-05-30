#include "../shared/include/ThostFtdcTraderApi.h"
class Rust_CThostFtdcTraderApi {
    public:
        CThostFtdcTraderApi *m_member;
        Rust_CThostFtdcTraderApi(CThostFtdcTraderApi *member);
        ~Rust_CThostFtdcTraderApi();

        void Release();
        void Init();
        int Join();
        const char* GetTradingDay();
        void GetFrontInfo(CThostFtdcFrontInfoField* pFrontInfo);
        void RegisterFront(char* pszFrontAddress);
        void RegisterNameServer(char* pszNsAddress);
        void RegisterFensUserInfo(CThostFtdcFensUserInfoField * pFensUserInfo);
        void RegisterSpi(CThostFtdcTraderSpi* pSpi);
        void SubscribePrivateTopic(THOST_TE_RESUME_TYPE nResumeType);
        void SubscribePublicTopic(THOST_TE_RESUME_TYPE nResumeType);
        int ReqAuthenticate(CThostFtdcReqAuthenticateField* pReqAuthenticateField, int nRequestID);
        int RegisterUserSystemInfo(CThostFtdcUserSystemInfoField* pUserSystemInfo);
        int SubmitUserSystemInfo(CThostFtdcUserSystemInfoField* pUserSystemInfo);
        int ReqUserLogin(CThostFtdcReqUserLoginField* pReqUserLoginField, int nRequestID);
        int ReqUserLogout(CThostFtdcUserLogoutField* pUserLogout, int nRequestID);
        int ReqUserPasswordUpdate(CThostFtdcUserPasswordUpdateField* pUserPasswordUpdate, int nRequestID);
        int ReqTradingAccountPasswordUpdate(CThostFtdcTradingAccountPasswordUpdateField* pTradingAccountPasswordUpdate, int nRequestID);
        int ReqUserAuthMethod(CThostFtdcReqUserAuthMethodField* pReqUserAuthMethod, int nRequestID);
        int ReqGenUserCaptcha(CThostFtdcReqGenUserCaptchaField* pReqGenUserCaptcha, int nRequestID);
        int ReqGenUserText(CThostFtdcReqGenUserTextField* pReqGenUserText, int nRequestID);
        int ReqUserLoginWithCaptcha(CThostFtdcReqUserLoginWithCaptchaField* pReqUserLoginWithCaptcha, int nRequestID);
        int ReqUserLoginWithText(CThostFtdcReqUserLoginWithTextField* pReqUserLoginWithText, int nRequestID);
        int ReqUserLoginWithOTP(CThostFtdcReqUserLoginWithOTPField* pReqUserLoginWithOTP, int nRequestID);
        int ReqOrderInsert(CThostFtdcInputOrderField* pInputOrder, int nRequestID);
        int ReqParkedOrderInsert(CThostFtdcParkedOrderField* pParkedOrder, int nRequestID);
        int ReqParkedOrderAction(CThostFtdcParkedOrderActionField* pParkedOrderAction, int nRequestID);
        int ReqOrderAction(CThostFtdcInputOrderActionField* pInputOrderAction, int nRequestID);
        int ReqQryMaxOrderVolume(CThostFtdcQryMaxOrderVolumeField* pQryMaxOrderVolume, int nRequestID);
        int ReqSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField* pSettlementInfoConfirm, int nRequestID);
        int ReqRemoveParkedOrder(CThostFtdcRemoveParkedOrderField* pRemoveParkedOrder, int nRequestID);
        int ReqRemoveParkedOrderAction(CThostFtdcRemoveParkedOrderActionField* pRemoveParkedOrderAction, int nRequestID);
        int ReqExecOrderInsert(CThostFtdcInputExecOrderField* pInputExecOrder, int nRequestID);
        int ReqExecOrderAction(CThostFtdcInputExecOrderActionField* pInputExecOrderAction, int nRequestID);
        int ReqForQuoteInsert(CThostFtdcInputForQuoteField* pInputForQuote, int nRequestID);
        int ReqQuoteInsert(CThostFtdcInputQuoteField* pInputQuote, int nRequestID);
        int ReqQuoteAction(CThostFtdcInputQuoteActionField* pInputQuoteAction, int nRequestID);
        int ReqBatchOrderAction(CThostFtdcInputBatchOrderActionField* pInputBatchOrderAction, int nRequestID);
        int ReqOptionSelfCloseInsert(CThostFtdcInputOptionSelfCloseField* pInputOptionSelfClose, int nRequestID);
        int ReqOptionSelfCloseAction(CThostFtdcInputOptionSelfCloseActionField* pInputOptionSelfCloseAction, int nRequestID);
        int ReqCombActionInsert(CThostFtdcInputCombActionField* pInputCombAction, int nRequestID);
        int ReqQryOrder(CThostFtdcQryOrderField* pQryOrder, int nRequestID);
        int ReqQryTrade(CThostFtdcQryTradeField* pQryTrade, int nRequestID);
        int ReqQryInvestorPosition(CThostFtdcQryInvestorPositionField* pQryInvestorPosition, int nRequestID);
        int ReqQryTradingAccount(CThostFtdcQryTradingAccountField* pQryTradingAccount, int nRequestID);
        int ReqQryInvestor(CThostFtdcQryInvestorField* pQryInvestor, int nRequestID);
        int ReqQryTradingCode(CThostFtdcQryTradingCodeField* pQryTradingCode, int nRequestID);
        int ReqQryInstrumentMarginRate(CThostFtdcQryInstrumentMarginRateField* pQryInstrumentMarginRate, int nRequestID);
        int ReqQryInstrumentCommissionRate(CThostFtdcQryInstrumentCommissionRateField* pQryInstrumentCommissionRate, int nRequestID);
        int ReqQryExchange(CThostFtdcQryExchangeField* pQryExchange, int nRequestID);
        int ReqQryProduct(CThostFtdcQryProductField* pQryProduct, int nRequestID);
        int ReqQryInstrument(CThostFtdcQryInstrumentField* pQryInstrument, int nRequestID);
        int ReqQryDepthMarketData(CThostFtdcQryDepthMarketDataField* pQryDepthMarketData, int nRequestID);
        int ReqQryTraderOffer(CThostFtdcQryTraderOfferField* pQryTraderOffer, int nRequestID);
        int ReqQrySettlementInfo(CThostFtdcQrySettlementInfoField* pQrySettlementInfo, int nRequestID);
        int ReqQryTransferBank(CThostFtdcQryTransferBankField* pQryTransferBank, int nRequestID);
        int ReqQryInvestorPositionDetail(CThostFtdcQryInvestorPositionDetailField* pQryInvestorPositionDetail, int nRequestID);
        int ReqQryNotice(CThostFtdcQryNoticeField* pQryNotice, int nRequestID);
        int ReqQrySettlementInfoConfirm(CThostFtdcQrySettlementInfoConfirmField* pQrySettlementInfoConfirm, int nRequestID);
        int ReqQryInvestorPositionCombineDetail(CThostFtdcQryInvestorPositionCombineDetailField* pQryInvestorPositionCombineDetail, int nRequestID);
        int ReqQryCFMMCTradingAccountKey(CThostFtdcQryCFMMCTradingAccountKeyField* pQryCFMMCTradingAccountKey, int nRequestID);
        int ReqQryEWarrantOffset(CThostFtdcQryEWarrantOffsetField* pQryEWarrantOffset, int nRequestID);
        int ReqQryInvestorProductGroupMargin(CThostFtdcQryInvestorProductGroupMarginField* pQryInvestorProductGroupMargin, int nRequestID);
        int ReqQryExchangeMarginRate(CThostFtdcQryExchangeMarginRateField* pQryExchangeMarginRate, int nRequestID);
        int ReqQryExchangeMarginRateAdjust(CThostFtdcQryExchangeMarginRateAdjustField* pQryExchangeMarginRateAdjust, int nRequestID);
        int ReqQryExchangeRate(CThostFtdcQryExchangeRateField* pQryExchangeRate, int nRequestID);
        int ReqQrySecAgentACIDMap(CThostFtdcQrySecAgentACIDMapField* pQrySecAgentACIDMap, int nRequestID);
        int ReqQryProductExchRate(CThostFtdcQryProductExchRateField* pQryProductExchRate, int nRequestID);
        int ReqQryProductGroup(CThostFtdcQryProductGroupField* pQryProductGroup, int nRequestID);
        int ReqQryMMInstrumentCommissionRate(CThostFtdcQryMMInstrumentCommissionRateField* pQryMMInstrumentCommissionRate, int nRequestID);
        int ReqQryMMOptionInstrCommRate(CThostFtdcQryMMOptionInstrCommRateField* pQryMMOptionInstrCommRate, int nRequestID);
        int ReqQryInstrumentOrderCommRate(CThostFtdcQryInstrumentOrderCommRateField* pQryInstrumentOrderCommRate, int nRequestID);
        int ReqQrySecAgentTradingAccount(CThostFtdcQryTradingAccountField* pQryTradingAccount, int nRequestID);
        int ReqQrySecAgentCheckMode(CThostFtdcQrySecAgentCheckModeField* pQrySecAgentCheckMode, int nRequestID);
        int ReqQrySecAgentTradeInfo(CThostFtdcQrySecAgentTradeInfoField* pQrySecAgentTradeInfo, int nRequestID);
        int ReqQryOptionInstrTradeCost(CThostFtdcQryOptionInstrTradeCostField* pQryOptionInstrTradeCost, int nRequestID);
        int ReqQryOptionInstrCommRate(CThostFtdcQryOptionInstrCommRateField* pQryOptionInstrCommRate, int nRequestID);
        int ReqQryExecOrder(CThostFtdcQryExecOrderField* pQryExecOrder, int nRequestID);
        int ReqQryForQuote(CThostFtdcQryForQuoteField* pQryForQuote, int nRequestID);
        int ReqQryQuote(CThostFtdcQryQuoteField* pQryQuote, int nRequestID);
        int ReqQryOptionSelfClose(CThostFtdcQryOptionSelfCloseField* pQryOptionSelfClose, int nRequestID);
        int ReqQryInvestUnit(CThostFtdcQryInvestUnitField* pQryInvestUnit, int nRequestID);
        int ReqQryCombInstrumentGuard(CThostFtdcQryCombInstrumentGuardField* pQryCombInstrumentGuard, int nRequestID);
        int ReqQryCombAction(CThostFtdcQryCombActionField* pQryCombAction, int nRequestID);
        int ReqQryTransferSerial(CThostFtdcQryTransferSerialField* pQryTransferSerial, int nRequestID);
        int ReqQryAccountregister(CThostFtdcQryAccountregisterField* pQryAccountregister, int nRequestID);
        int ReqQryContractBank(CThostFtdcQryContractBankField* pQryContractBank, int nRequestID);
        int ReqQryParkedOrder(CThostFtdcQryParkedOrderField* pQryParkedOrder, int nRequestID);
        int ReqQryParkedOrderAction(CThostFtdcQryParkedOrderActionField* pQryParkedOrderAction, int nRequestID);
        int ReqQryTradingNotice(CThostFtdcQryTradingNoticeField* pQryTradingNotice, int nRequestID);
        int ReqQryBrokerTradingParams(CThostFtdcQryBrokerTradingParamsField* pQryBrokerTradingParams, int nRequestID);
        int ReqQryBrokerTradingAlgos(CThostFtdcQryBrokerTradingAlgosField* pQryBrokerTradingAlgos, int nRequestID);
        int ReqQueryCFMMCTradingAccountToken(CThostFtdcQueryCFMMCTradingAccountTokenField* pQueryCFMMCTradingAccountToken, int nRequestID);
        int ReqFromBankToFutureByFuture(CThostFtdcReqTransferField* pReqTransfer, int nRequestID);
        int ReqFromFutureToBankByFuture(CThostFtdcReqTransferField* pReqTransfer, int nRequestID);
        int ReqQueryBankAccountMoneyByFuture(CThostFtdcReqQueryAccountField* pReqQueryAccount, int nRequestID);
        int ReqQryClassifiedInstrument(CThostFtdcQryClassifiedInstrumentField* pQryClassifiedInstrument, int nRequestID);
        int ReqQryCombPromotionParam(CThostFtdcQryCombPromotionParamField* pQryCombPromotionParam, int nRequestID);
        int ReqQryRiskSettleInvstPosition(CThostFtdcQryRiskSettleInvstPositionField* pQryRiskSettleInvstPosition, int nRequestID);
        int ReqQryRiskSettleProductStatus(CThostFtdcQryRiskSettleProductStatusField* pQryRiskSettleProductStatus, int nRequestID);
        int ReqQrySPBMFutureParameter(CThostFtdcQrySPBMFutureParameterField* pQrySPBMFutureParameter, int nRequestID);
        int ReqQrySPBMOptionParameter(CThostFtdcQrySPBMOptionParameterField* pQrySPBMOptionParameter, int nRequestID);
        int ReqQrySPBMIntraParameter(CThostFtdcQrySPBMIntraParameterField* pQrySPBMIntraParameter, int nRequestID);
        int ReqQrySPBMInterParameter(CThostFtdcQrySPBMInterParameterField* pQrySPBMInterParameter, int nRequestID);
        int ReqQrySPBMPortfDefinition(CThostFtdcQrySPBMPortfDefinitionField* pQrySPBMPortfDefinition, int nRequestID);
        int ReqQrySPBMInvestorPortfDef(CThostFtdcQrySPBMInvestorPortfDefField* pQrySPBMInvestorPortfDef, int nRequestID);
        int ReqQryInvestorPortfMarginRatio(CThostFtdcQryInvestorPortfMarginRatioField* pQryInvestorPortfMarginRatio, int nRequestID);
        int ReqQryInvestorProdSPBMDetail(CThostFtdcQryInvestorProdSPBMDetailField* pQryInvestorProdSPBMDetail, int nRequestID);
        int ReqQryInvestorCommoditySPMMMargin(CThostFtdcQryInvestorCommoditySPMMMarginField* pQryInvestorCommoditySPMMMargin, int nRequestID);
        int ReqQryInvestorCommodityGroupSPMMMargin(CThostFtdcQryInvestorCommodityGroupSPMMMarginField* pQryInvestorCommodityGroupSPMMMargin, int nRequestID);
        int ReqQrySPMMInstParam(CThostFtdcQrySPMMInstParamField* pQrySPMMInstParam, int nRequestID);
        int ReqQrySPMMProductParam(CThostFtdcQrySPMMProductParamField* pQrySPMMProductParam, int nRequestID);
        int ReqQrySPBMAddOnInterParameter(CThostFtdcQrySPBMAddOnInterParameterField* pQrySPBMAddOnInterParameter, int nRequestID);
        int ReqQryRCAMSCombProductInfo(CThostFtdcQryRCAMSCombProductInfoField* pQryRCAMSCombProductInfo, int nRequestID);
        int ReqQryRCAMSInstrParameter(CThostFtdcQryRCAMSInstrParameterField* pQryRCAMSInstrParameter, int nRequestID);
        int ReqQryRCAMSIntraParameter(CThostFtdcQryRCAMSIntraParameterField* pQryRCAMSIntraParameter, int nRequestID);
        int ReqQryRCAMSInterParameter(CThostFtdcQryRCAMSInterParameterField* pQryRCAMSInterParameter, int nRequestID);
        int ReqQryRCAMSShortOptAdjustParam(CThostFtdcQryRCAMSShortOptAdjustParamField* pQryRCAMSShortOptAdjustParam, int nRequestID);
        int ReqQryRCAMSInvestorCombPosition(CThostFtdcQryRCAMSInvestorCombPositionField* pQryRCAMSInvestorCombPosition, int nRequestID);
        int ReqQryInvestorProdRCAMSMargin(CThostFtdcQryInvestorProdRCAMSMarginField* pQryInvestorProdRCAMSMargin, int nRequestID);
        int ReqQryRULEInstrParameter(CThostFtdcQryRULEInstrParameterField* pQryRULEInstrParameter, int nRequestID);
        int ReqQryRULEIntraParameter(CThostFtdcQryRULEIntraParameterField* pQryRULEIntraParameter, int nRequestID);
        int ReqQryRULEInterParameter(CThostFtdcQryRULEInterParameterField* pQryRULEInterParameter, int nRequestID);
        int ReqQryInvestorProdRULEMargin(CThostFtdcQryInvestorProdRULEMarginField* pQryInvestorProdRULEMargin, int nRequestID);
        int ReqQryInvestorPortfSetting(CThostFtdcQryInvestorPortfSettingField* pQryInvestorPortfSetting, int nRequestID);
        int ReqQryInvestorInfoCommRec(CThostFtdcQryInvestorInfoCommRecField* pQryInvestorInfoCommRec, int nRequestID);
        int ReqQryCombLeg(CThostFtdcQryCombLegField* pQryCombLeg, int nRequestID);
        int ReqOffsetSetting(CThostFtdcInputOffsetSettingField* pInputOffsetSetting, int nRequestID);
        int ReqCancelOffsetSetting(CThostFtdcInputOffsetSettingField* pInputOffsetSetting, int nRequestID);
        int ReqQryOffsetSetting(CThostFtdcQryOffsetSettingField* pQryOffsetSetting, int nRequestID);
};


Rust_CThostFtdcTraderApi::Rust_CThostFtdcTraderApi(CThostFtdcTraderApi *member) : m_member(member) {  };
Rust_CThostFtdcTraderApi::~Rust_CThostFtdcTraderApi() {  };
void Rust_CThostFtdcTraderApi::Release() { return m_member->Release(); }
void Rust_CThostFtdcTraderApi::Init() { return m_member->Init(); }
int Rust_CThostFtdcTraderApi::Join() { return m_member->Join(); }
const char* Rust_CThostFtdcTraderApi::GetTradingDay() { return m_member->GetTradingDay(); }
void Rust_CThostFtdcTraderApi::GetFrontInfo(CThostFtdcFrontInfoField* pFrontInfo) { return m_member->GetFrontInfo(pFrontInfo); }
void Rust_CThostFtdcTraderApi::RegisterFront(char* pszFrontAddress) { return m_member->RegisterFront(pszFrontAddress); }
void Rust_CThostFtdcTraderApi::RegisterNameServer(char* pszNsAddress) { return m_member->RegisterNameServer(pszNsAddress); }
void Rust_CThostFtdcTraderApi::RegisterFensUserInfo(CThostFtdcFensUserInfoField * pFensUserInfo) { return m_member->RegisterFensUserInfo(pFensUserInfo); }
void Rust_CThostFtdcTraderApi::RegisterSpi(CThostFtdcTraderSpi* pSpi) { return m_member->RegisterSpi(pSpi); }
void Rust_CThostFtdcTraderApi::SubscribePrivateTopic(THOST_TE_RESUME_TYPE nResumeType) { return m_member->SubscribePrivateTopic(nResumeType); }
void Rust_CThostFtdcTraderApi::SubscribePublicTopic(THOST_TE_RESUME_TYPE nResumeType) { return m_member->SubscribePublicTopic(nResumeType); }
int Rust_CThostFtdcTraderApi::ReqAuthenticate(CThostFtdcReqAuthenticateField* pReqAuthenticateField, int nRequestID) { return m_member->ReqAuthenticate(pReqAuthenticateField, nRequestID); }
int Rust_CThostFtdcTraderApi::RegisterUserSystemInfo(CThostFtdcUserSystemInfoField* pUserSystemInfo) { return m_member->RegisterUserSystemInfo(pUserSystemInfo); }
int Rust_CThostFtdcTraderApi::SubmitUserSystemInfo(CThostFtdcUserSystemInfoField* pUserSystemInfo) { return m_member->SubmitUserSystemInfo(pUserSystemInfo); }
int Rust_CThostFtdcTraderApi::ReqUserLogin(CThostFtdcReqUserLoginField* pReqUserLoginField, int nRequestID) { return m_member->ReqUserLogin(pReqUserLoginField, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqUserLogout(CThostFtdcUserLogoutField* pUserLogout, int nRequestID) { return m_member->ReqUserLogout(pUserLogout, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqUserPasswordUpdate(CThostFtdcUserPasswordUpdateField* pUserPasswordUpdate, int nRequestID) { return m_member->ReqUserPasswordUpdate(pUserPasswordUpdate, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqTradingAccountPasswordUpdate(CThostFtdcTradingAccountPasswordUpdateField* pTradingAccountPasswordUpdate, int nRequestID) { return m_member->ReqTradingAccountPasswordUpdate(pTradingAccountPasswordUpdate, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqUserAuthMethod(CThostFtdcReqUserAuthMethodField* pReqUserAuthMethod, int nRequestID) { return m_member->ReqUserAuthMethod(pReqUserAuthMethod, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqGenUserCaptcha(CThostFtdcReqGenUserCaptchaField* pReqGenUserCaptcha, int nRequestID) { return m_member->ReqGenUserCaptcha(pReqGenUserCaptcha, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqGenUserText(CThostFtdcReqGenUserTextField* pReqGenUserText, int nRequestID) { return m_member->ReqGenUserText(pReqGenUserText, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqUserLoginWithCaptcha(CThostFtdcReqUserLoginWithCaptchaField* pReqUserLoginWithCaptcha, int nRequestID) { return m_member->ReqUserLoginWithCaptcha(pReqUserLoginWithCaptcha, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqUserLoginWithText(CThostFtdcReqUserLoginWithTextField* pReqUserLoginWithText, int nRequestID) { return m_member->ReqUserLoginWithText(pReqUserLoginWithText, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqUserLoginWithOTP(CThostFtdcReqUserLoginWithOTPField* pReqUserLoginWithOTP, int nRequestID) { return m_member->ReqUserLoginWithOTP(pReqUserLoginWithOTP, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqOrderInsert(CThostFtdcInputOrderField* pInputOrder, int nRequestID) { return m_member->ReqOrderInsert(pInputOrder, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqParkedOrderInsert(CThostFtdcParkedOrderField* pParkedOrder, int nRequestID) { return m_member->ReqParkedOrderInsert(pParkedOrder, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqParkedOrderAction(CThostFtdcParkedOrderActionField* pParkedOrderAction, int nRequestID) { return m_member->ReqParkedOrderAction(pParkedOrderAction, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqOrderAction(CThostFtdcInputOrderActionField* pInputOrderAction, int nRequestID) { return m_member->ReqOrderAction(pInputOrderAction, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryMaxOrderVolume(CThostFtdcQryMaxOrderVolumeField* pQryMaxOrderVolume, int nRequestID) { return m_member->ReqQryMaxOrderVolume(pQryMaxOrderVolume, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField* pSettlementInfoConfirm, int nRequestID) { return m_member->ReqSettlementInfoConfirm(pSettlementInfoConfirm, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqRemoveParkedOrder(CThostFtdcRemoveParkedOrderField* pRemoveParkedOrder, int nRequestID) { return m_member->ReqRemoveParkedOrder(pRemoveParkedOrder, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqRemoveParkedOrderAction(CThostFtdcRemoveParkedOrderActionField* pRemoveParkedOrderAction, int nRequestID) { return m_member->ReqRemoveParkedOrderAction(pRemoveParkedOrderAction, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqExecOrderInsert(CThostFtdcInputExecOrderField* pInputExecOrder, int nRequestID) { return m_member->ReqExecOrderInsert(pInputExecOrder, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqExecOrderAction(CThostFtdcInputExecOrderActionField* pInputExecOrderAction, int nRequestID) { return m_member->ReqExecOrderAction(pInputExecOrderAction, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqForQuoteInsert(CThostFtdcInputForQuoteField* pInputForQuote, int nRequestID) { return m_member->ReqForQuoteInsert(pInputForQuote, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQuoteInsert(CThostFtdcInputQuoteField* pInputQuote, int nRequestID) { return m_member->ReqQuoteInsert(pInputQuote, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQuoteAction(CThostFtdcInputQuoteActionField* pInputQuoteAction, int nRequestID) { return m_member->ReqQuoteAction(pInputQuoteAction, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqBatchOrderAction(CThostFtdcInputBatchOrderActionField* pInputBatchOrderAction, int nRequestID) { return m_member->ReqBatchOrderAction(pInputBatchOrderAction, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqOptionSelfCloseInsert(CThostFtdcInputOptionSelfCloseField* pInputOptionSelfClose, int nRequestID) { return m_member->ReqOptionSelfCloseInsert(pInputOptionSelfClose, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqOptionSelfCloseAction(CThostFtdcInputOptionSelfCloseActionField* pInputOptionSelfCloseAction, int nRequestID) { return m_member->ReqOptionSelfCloseAction(pInputOptionSelfCloseAction, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqCombActionInsert(CThostFtdcInputCombActionField* pInputCombAction, int nRequestID) { return m_member->ReqCombActionInsert(pInputCombAction, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryOrder(CThostFtdcQryOrderField* pQryOrder, int nRequestID) { return m_member->ReqQryOrder(pQryOrder, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryTrade(CThostFtdcQryTradeField* pQryTrade, int nRequestID) { return m_member->ReqQryTrade(pQryTrade, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryInvestorPosition(CThostFtdcQryInvestorPositionField* pQryInvestorPosition, int nRequestID) { return m_member->ReqQryInvestorPosition(pQryInvestorPosition, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryTradingAccount(CThostFtdcQryTradingAccountField* pQryTradingAccount, int nRequestID) { return m_member->ReqQryTradingAccount(pQryTradingAccount, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryInvestor(CThostFtdcQryInvestorField* pQryInvestor, int nRequestID) { return m_member->ReqQryInvestor(pQryInvestor, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryTradingCode(CThostFtdcQryTradingCodeField* pQryTradingCode, int nRequestID) { return m_member->ReqQryTradingCode(pQryTradingCode, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryInstrumentMarginRate(CThostFtdcQryInstrumentMarginRateField* pQryInstrumentMarginRate, int nRequestID) { return m_member->ReqQryInstrumentMarginRate(pQryInstrumentMarginRate, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryInstrumentCommissionRate(CThostFtdcQryInstrumentCommissionRateField* pQryInstrumentCommissionRate, int nRequestID) { return m_member->ReqQryInstrumentCommissionRate(pQryInstrumentCommissionRate, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryExchange(CThostFtdcQryExchangeField* pQryExchange, int nRequestID) { return m_member->ReqQryExchange(pQryExchange, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryProduct(CThostFtdcQryProductField* pQryProduct, int nRequestID) { return m_member->ReqQryProduct(pQryProduct, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryInstrument(CThostFtdcQryInstrumentField* pQryInstrument, int nRequestID) { return m_member->ReqQryInstrument(pQryInstrument, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryDepthMarketData(CThostFtdcQryDepthMarketDataField* pQryDepthMarketData, int nRequestID) { return m_member->ReqQryDepthMarketData(pQryDepthMarketData, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryTraderOffer(CThostFtdcQryTraderOfferField* pQryTraderOffer, int nRequestID) { return m_member->ReqQryTraderOffer(pQryTraderOffer, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQrySettlementInfo(CThostFtdcQrySettlementInfoField* pQrySettlementInfo, int nRequestID) { return m_member->ReqQrySettlementInfo(pQrySettlementInfo, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryTransferBank(CThostFtdcQryTransferBankField* pQryTransferBank, int nRequestID) { return m_member->ReqQryTransferBank(pQryTransferBank, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryInvestorPositionDetail(CThostFtdcQryInvestorPositionDetailField* pQryInvestorPositionDetail, int nRequestID) { return m_member->ReqQryInvestorPositionDetail(pQryInvestorPositionDetail, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryNotice(CThostFtdcQryNoticeField* pQryNotice, int nRequestID) { return m_member->ReqQryNotice(pQryNotice, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQrySettlementInfoConfirm(CThostFtdcQrySettlementInfoConfirmField* pQrySettlementInfoConfirm, int nRequestID) { return m_member->ReqQrySettlementInfoConfirm(pQrySettlementInfoConfirm, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryInvestorPositionCombineDetail(CThostFtdcQryInvestorPositionCombineDetailField* pQryInvestorPositionCombineDetail, int nRequestID) { return m_member->ReqQryInvestorPositionCombineDetail(pQryInvestorPositionCombineDetail, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryCFMMCTradingAccountKey(CThostFtdcQryCFMMCTradingAccountKeyField* pQryCFMMCTradingAccountKey, int nRequestID) { return m_member->ReqQryCFMMCTradingAccountKey(pQryCFMMCTradingAccountKey, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryEWarrantOffset(CThostFtdcQryEWarrantOffsetField* pQryEWarrantOffset, int nRequestID) { return m_member->ReqQryEWarrantOffset(pQryEWarrantOffset, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryInvestorProductGroupMargin(CThostFtdcQryInvestorProductGroupMarginField* pQryInvestorProductGroupMargin, int nRequestID) { return m_member->ReqQryInvestorProductGroupMargin(pQryInvestorProductGroupMargin, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryExchangeMarginRate(CThostFtdcQryExchangeMarginRateField* pQryExchangeMarginRate, int nRequestID) { return m_member->ReqQryExchangeMarginRate(pQryExchangeMarginRate, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryExchangeMarginRateAdjust(CThostFtdcQryExchangeMarginRateAdjustField* pQryExchangeMarginRateAdjust, int nRequestID) { return m_member->ReqQryExchangeMarginRateAdjust(pQryExchangeMarginRateAdjust, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryExchangeRate(CThostFtdcQryExchangeRateField* pQryExchangeRate, int nRequestID) { return m_member->ReqQryExchangeRate(pQryExchangeRate, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQrySecAgentACIDMap(CThostFtdcQrySecAgentACIDMapField* pQrySecAgentACIDMap, int nRequestID) { return m_member->ReqQrySecAgentACIDMap(pQrySecAgentACIDMap, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryProductExchRate(CThostFtdcQryProductExchRateField* pQryProductExchRate, int nRequestID) { return m_member->ReqQryProductExchRate(pQryProductExchRate, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryProductGroup(CThostFtdcQryProductGroupField* pQryProductGroup, int nRequestID) { return m_member->ReqQryProductGroup(pQryProductGroup, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryMMInstrumentCommissionRate(CThostFtdcQryMMInstrumentCommissionRateField* pQryMMInstrumentCommissionRate, int nRequestID) { return m_member->ReqQryMMInstrumentCommissionRate(pQryMMInstrumentCommissionRate, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryMMOptionInstrCommRate(CThostFtdcQryMMOptionInstrCommRateField* pQryMMOptionInstrCommRate, int nRequestID) { return m_member->ReqQryMMOptionInstrCommRate(pQryMMOptionInstrCommRate, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryInstrumentOrderCommRate(CThostFtdcQryInstrumentOrderCommRateField* pQryInstrumentOrderCommRate, int nRequestID) { return m_member->ReqQryInstrumentOrderCommRate(pQryInstrumentOrderCommRate, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQrySecAgentTradingAccount(CThostFtdcQryTradingAccountField* pQryTradingAccount, int nRequestID) { return m_member->ReqQrySecAgentTradingAccount(pQryTradingAccount, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQrySecAgentCheckMode(CThostFtdcQrySecAgentCheckModeField* pQrySecAgentCheckMode, int nRequestID) { return m_member->ReqQrySecAgentCheckMode(pQrySecAgentCheckMode, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQrySecAgentTradeInfo(CThostFtdcQrySecAgentTradeInfoField* pQrySecAgentTradeInfo, int nRequestID) { return m_member->ReqQrySecAgentTradeInfo(pQrySecAgentTradeInfo, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryOptionInstrTradeCost(CThostFtdcQryOptionInstrTradeCostField* pQryOptionInstrTradeCost, int nRequestID) { return m_member->ReqQryOptionInstrTradeCost(pQryOptionInstrTradeCost, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryOptionInstrCommRate(CThostFtdcQryOptionInstrCommRateField* pQryOptionInstrCommRate, int nRequestID) { return m_member->ReqQryOptionInstrCommRate(pQryOptionInstrCommRate, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryExecOrder(CThostFtdcQryExecOrderField* pQryExecOrder, int nRequestID) { return m_member->ReqQryExecOrder(pQryExecOrder, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryForQuote(CThostFtdcQryForQuoteField* pQryForQuote, int nRequestID) { return m_member->ReqQryForQuote(pQryForQuote, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryQuote(CThostFtdcQryQuoteField* pQryQuote, int nRequestID) { return m_member->ReqQryQuote(pQryQuote, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryOptionSelfClose(CThostFtdcQryOptionSelfCloseField* pQryOptionSelfClose, int nRequestID) { return m_member->ReqQryOptionSelfClose(pQryOptionSelfClose, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryInvestUnit(CThostFtdcQryInvestUnitField* pQryInvestUnit, int nRequestID) { return m_member->ReqQryInvestUnit(pQryInvestUnit, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryCombInstrumentGuard(CThostFtdcQryCombInstrumentGuardField* pQryCombInstrumentGuard, int nRequestID) { return m_member->ReqQryCombInstrumentGuard(pQryCombInstrumentGuard, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryCombAction(CThostFtdcQryCombActionField* pQryCombAction, int nRequestID) { return m_member->ReqQryCombAction(pQryCombAction, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryTransferSerial(CThostFtdcQryTransferSerialField* pQryTransferSerial, int nRequestID) { return m_member->ReqQryTransferSerial(pQryTransferSerial, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryAccountregister(CThostFtdcQryAccountregisterField* pQryAccountregister, int nRequestID) { return m_member->ReqQryAccountregister(pQryAccountregister, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryContractBank(CThostFtdcQryContractBankField* pQryContractBank, int nRequestID) { return m_member->ReqQryContractBank(pQryContractBank, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryParkedOrder(CThostFtdcQryParkedOrderField* pQryParkedOrder, int nRequestID) { return m_member->ReqQryParkedOrder(pQryParkedOrder, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryParkedOrderAction(CThostFtdcQryParkedOrderActionField* pQryParkedOrderAction, int nRequestID) { return m_member->ReqQryParkedOrderAction(pQryParkedOrderAction, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryTradingNotice(CThostFtdcQryTradingNoticeField* pQryTradingNotice, int nRequestID) { return m_member->ReqQryTradingNotice(pQryTradingNotice, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryBrokerTradingParams(CThostFtdcQryBrokerTradingParamsField* pQryBrokerTradingParams, int nRequestID) { return m_member->ReqQryBrokerTradingParams(pQryBrokerTradingParams, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryBrokerTradingAlgos(CThostFtdcQryBrokerTradingAlgosField* pQryBrokerTradingAlgos, int nRequestID) { return m_member->ReqQryBrokerTradingAlgos(pQryBrokerTradingAlgos, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQueryCFMMCTradingAccountToken(CThostFtdcQueryCFMMCTradingAccountTokenField* pQueryCFMMCTradingAccountToken, int nRequestID) { return m_member->ReqQueryCFMMCTradingAccountToken(pQueryCFMMCTradingAccountToken, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqFromBankToFutureByFuture(CThostFtdcReqTransferField* pReqTransfer, int nRequestID) { return m_member->ReqFromBankToFutureByFuture(pReqTransfer, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqFromFutureToBankByFuture(CThostFtdcReqTransferField* pReqTransfer, int nRequestID) { return m_member->ReqFromFutureToBankByFuture(pReqTransfer, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQueryBankAccountMoneyByFuture(CThostFtdcReqQueryAccountField* pReqQueryAccount, int nRequestID) { return m_member->ReqQueryBankAccountMoneyByFuture(pReqQueryAccount, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryClassifiedInstrument(CThostFtdcQryClassifiedInstrumentField* pQryClassifiedInstrument, int nRequestID) { return m_member->ReqQryClassifiedInstrument(pQryClassifiedInstrument, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryCombPromotionParam(CThostFtdcQryCombPromotionParamField* pQryCombPromotionParam, int nRequestID) { return m_member->ReqQryCombPromotionParam(pQryCombPromotionParam, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryRiskSettleInvstPosition(CThostFtdcQryRiskSettleInvstPositionField* pQryRiskSettleInvstPosition, int nRequestID) { return m_member->ReqQryRiskSettleInvstPosition(pQryRiskSettleInvstPosition, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryRiskSettleProductStatus(CThostFtdcQryRiskSettleProductStatusField* pQryRiskSettleProductStatus, int nRequestID) { return m_member->ReqQryRiskSettleProductStatus(pQryRiskSettleProductStatus, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQrySPBMFutureParameter(CThostFtdcQrySPBMFutureParameterField* pQrySPBMFutureParameter, int nRequestID) { return m_member->ReqQrySPBMFutureParameter(pQrySPBMFutureParameter, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQrySPBMOptionParameter(CThostFtdcQrySPBMOptionParameterField* pQrySPBMOptionParameter, int nRequestID) { return m_member->ReqQrySPBMOptionParameter(pQrySPBMOptionParameter, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQrySPBMIntraParameter(CThostFtdcQrySPBMIntraParameterField* pQrySPBMIntraParameter, int nRequestID) { return m_member->ReqQrySPBMIntraParameter(pQrySPBMIntraParameter, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQrySPBMInterParameter(CThostFtdcQrySPBMInterParameterField* pQrySPBMInterParameter, int nRequestID) { return m_member->ReqQrySPBMInterParameter(pQrySPBMInterParameter, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQrySPBMPortfDefinition(CThostFtdcQrySPBMPortfDefinitionField* pQrySPBMPortfDefinition, int nRequestID) { return m_member->ReqQrySPBMPortfDefinition(pQrySPBMPortfDefinition, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQrySPBMInvestorPortfDef(CThostFtdcQrySPBMInvestorPortfDefField* pQrySPBMInvestorPortfDef, int nRequestID) { return m_member->ReqQrySPBMInvestorPortfDef(pQrySPBMInvestorPortfDef, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryInvestorPortfMarginRatio(CThostFtdcQryInvestorPortfMarginRatioField* pQryInvestorPortfMarginRatio, int nRequestID) { return m_member->ReqQryInvestorPortfMarginRatio(pQryInvestorPortfMarginRatio, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryInvestorProdSPBMDetail(CThostFtdcQryInvestorProdSPBMDetailField* pQryInvestorProdSPBMDetail, int nRequestID) { return m_member->ReqQryInvestorProdSPBMDetail(pQryInvestorProdSPBMDetail, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryInvestorCommoditySPMMMargin(CThostFtdcQryInvestorCommoditySPMMMarginField* pQryInvestorCommoditySPMMMargin, int nRequestID) { return m_member->ReqQryInvestorCommoditySPMMMargin(pQryInvestorCommoditySPMMMargin, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryInvestorCommodityGroupSPMMMargin(CThostFtdcQryInvestorCommodityGroupSPMMMarginField* pQryInvestorCommodityGroupSPMMMargin, int nRequestID) { return m_member->ReqQryInvestorCommodityGroupSPMMMargin(pQryInvestorCommodityGroupSPMMMargin, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQrySPMMInstParam(CThostFtdcQrySPMMInstParamField* pQrySPMMInstParam, int nRequestID) { return m_member->ReqQrySPMMInstParam(pQrySPMMInstParam, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQrySPMMProductParam(CThostFtdcQrySPMMProductParamField* pQrySPMMProductParam, int nRequestID) { return m_member->ReqQrySPMMProductParam(pQrySPMMProductParam, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQrySPBMAddOnInterParameter(CThostFtdcQrySPBMAddOnInterParameterField* pQrySPBMAddOnInterParameter, int nRequestID) { return m_member->ReqQrySPBMAddOnInterParameter(pQrySPBMAddOnInterParameter, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryRCAMSCombProductInfo(CThostFtdcQryRCAMSCombProductInfoField* pQryRCAMSCombProductInfo, int nRequestID) { return m_member->ReqQryRCAMSCombProductInfo(pQryRCAMSCombProductInfo, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryRCAMSInstrParameter(CThostFtdcQryRCAMSInstrParameterField* pQryRCAMSInstrParameter, int nRequestID) { return m_member->ReqQryRCAMSInstrParameter(pQryRCAMSInstrParameter, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryRCAMSIntraParameter(CThostFtdcQryRCAMSIntraParameterField* pQryRCAMSIntraParameter, int nRequestID) { return m_member->ReqQryRCAMSIntraParameter(pQryRCAMSIntraParameter, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryRCAMSInterParameter(CThostFtdcQryRCAMSInterParameterField* pQryRCAMSInterParameter, int nRequestID) { return m_member->ReqQryRCAMSInterParameter(pQryRCAMSInterParameter, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryRCAMSShortOptAdjustParam(CThostFtdcQryRCAMSShortOptAdjustParamField* pQryRCAMSShortOptAdjustParam, int nRequestID) { return m_member->ReqQryRCAMSShortOptAdjustParam(pQryRCAMSShortOptAdjustParam, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryRCAMSInvestorCombPosition(CThostFtdcQryRCAMSInvestorCombPositionField* pQryRCAMSInvestorCombPosition, int nRequestID) { return m_member->ReqQryRCAMSInvestorCombPosition(pQryRCAMSInvestorCombPosition, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryInvestorProdRCAMSMargin(CThostFtdcQryInvestorProdRCAMSMarginField* pQryInvestorProdRCAMSMargin, int nRequestID) { return m_member->ReqQryInvestorProdRCAMSMargin(pQryInvestorProdRCAMSMargin, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryRULEInstrParameter(CThostFtdcQryRULEInstrParameterField* pQryRULEInstrParameter, int nRequestID) { return m_member->ReqQryRULEInstrParameter(pQryRULEInstrParameter, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryRULEIntraParameter(CThostFtdcQryRULEIntraParameterField* pQryRULEIntraParameter, int nRequestID) { return m_member->ReqQryRULEIntraParameter(pQryRULEIntraParameter, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryRULEInterParameter(CThostFtdcQryRULEInterParameterField* pQryRULEInterParameter, int nRequestID) { return m_member->ReqQryRULEInterParameter(pQryRULEInterParameter, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryInvestorProdRULEMargin(CThostFtdcQryInvestorProdRULEMarginField* pQryInvestorProdRULEMargin, int nRequestID) { return m_member->ReqQryInvestorProdRULEMargin(pQryInvestorProdRULEMargin, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryInvestorPortfSetting(CThostFtdcQryInvestorPortfSettingField* pQryInvestorPortfSetting, int nRequestID) { return m_member->ReqQryInvestorPortfSetting(pQryInvestorPortfSetting, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryInvestorInfoCommRec(CThostFtdcQryInvestorInfoCommRecField* pQryInvestorInfoCommRec, int nRequestID) { return m_member->ReqQryInvestorInfoCommRec(pQryInvestorInfoCommRec, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryCombLeg(CThostFtdcQryCombLegField* pQryCombLeg, int nRequestID) { return m_member->ReqQryCombLeg(pQryCombLeg, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqOffsetSetting(CThostFtdcInputOffsetSettingField* pInputOffsetSetting, int nRequestID) { return m_member->ReqOffsetSetting(pInputOffsetSetting, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqCancelOffsetSetting(CThostFtdcInputOffsetSettingField* pInputOffsetSetting, int nRequestID) { return m_member->ReqCancelOffsetSetting(pInputOffsetSetting, nRequestID); }
int Rust_CThostFtdcTraderApi::ReqQryOffsetSetting(CThostFtdcQryOffsetSettingField* pQryOffsetSetting, int nRequestID) { return m_member->ReqQryOffsetSetting(pQryOffsetSetting, nRequestID); }

class Rust_CThostFtdcTraderSpi : CThostFtdcTraderSpi {
    public:
        void *m_rust;
        Rust_CThostFtdcTraderSpi(void *rust);
        ~Rust_CThostFtdcTraderSpi();

        void OnFrontConnected() override;
        void OnFrontDisconnected(int nReason) override;
        void OnHeartBeatWarning(int nTimeLapse) override;
        void OnRspAuthenticate(CThostFtdcRspAuthenticateField* pRspAuthenticateField, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspUserLogin(CThostFtdcRspUserLoginField* pRspUserLogin, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspUserLogout(CThostFtdcUserLogoutField* pUserLogout, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspUserPasswordUpdate(CThostFtdcUserPasswordUpdateField* pUserPasswordUpdate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspTradingAccountPasswordUpdate(CThostFtdcTradingAccountPasswordUpdateField* pTradingAccountPasswordUpdate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspUserAuthMethod(CThostFtdcRspUserAuthMethodField* pRspUserAuthMethod, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspGenUserCaptcha(CThostFtdcRspGenUserCaptchaField* pRspGenUserCaptcha, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspGenUserText(CThostFtdcRspGenUserTextField* pRspGenUserText, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspOrderInsert(CThostFtdcInputOrderField* pInputOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspParkedOrderInsert(CThostFtdcParkedOrderField* pParkedOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspParkedOrderAction(CThostFtdcParkedOrderActionField* pParkedOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspOrderAction(CThostFtdcInputOrderActionField* pInputOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryMaxOrderVolume(CThostFtdcQryMaxOrderVolumeField* pQryMaxOrderVolume, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField* pSettlementInfoConfirm, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspRemoveParkedOrder(CThostFtdcRemoveParkedOrderField* pRemoveParkedOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspRemoveParkedOrderAction(CThostFtdcRemoveParkedOrderActionField* pRemoveParkedOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspExecOrderInsert(CThostFtdcInputExecOrderField* pInputExecOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspExecOrderAction(CThostFtdcInputExecOrderActionField* pInputExecOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspForQuoteInsert(CThostFtdcInputForQuoteField* pInputForQuote, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQuoteInsert(CThostFtdcInputQuoteField* pInputQuote, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQuoteAction(CThostFtdcInputQuoteActionField* pInputQuoteAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspBatchOrderAction(CThostFtdcInputBatchOrderActionField* pInputBatchOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspOptionSelfCloseInsert(CThostFtdcInputOptionSelfCloseField* pInputOptionSelfClose, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspOptionSelfCloseAction(CThostFtdcInputOptionSelfCloseActionField* pInputOptionSelfCloseAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspCombActionInsert(CThostFtdcInputCombActionField* pInputCombAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryOrder(CThostFtdcOrderField* pOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryTrade(CThostFtdcTradeField* pTrade, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryInvestorPosition(CThostFtdcInvestorPositionField* pInvestorPosition, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryTradingAccount(CThostFtdcTradingAccountField* pTradingAccount, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryInvestor(CThostFtdcInvestorField* pInvestor, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryTradingCode(CThostFtdcTradingCodeField* pTradingCode, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryInstrumentMarginRate(CThostFtdcInstrumentMarginRateField* pInstrumentMarginRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryInstrumentCommissionRate(CThostFtdcInstrumentCommissionRateField* pInstrumentCommissionRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryExchange(CThostFtdcExchangeField* pExchange, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryProduct(CThostFtdcProductField* pProduct, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryInstrument(CThostFtdcInstrumentField* pInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryDepthMarketData(CThostFtdcDepthMarketDataField* pDepthMarketData, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryTraderOffer(CThostFtdcTraderOfferField* pTraderOffer, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQrySettlementInfo(CThostFtdcSettlementInfoField* pSettlementInfo, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryTransferBank(CThostFtdcTransferBankField* pTransferBank, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryInvestorPositionDetail(CThostFtdcInvestorPositionDetailField* pInvestorPositionDetail, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryNotice(CThostFtdcNoticeField* pNotice, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQrySettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField* pSettlementInfoConfirm, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryInvestorPositionCombineDetail(CThostFtdcInvestorPositionCombineDetailField* pInvestorPositionCombineDetail, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryCFMMCTradingAccountKey(CThostFtdcCFMMCTradingAccountKeyField* pCFMMCTradingAccountKey, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryEWarrantOffset(CThostFtdcEWarrantOffsetField* pEWarrantOffset, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryInvestorProductGroupMargin(CThostFtdcInvestorProductGroupMarginField* pInvestorProductGroupMargin, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryExchangeMarginRate(CThostFtdcExchangeMarginRateField* pExchangeMarginRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryExchangeMarginRateAdjust(CThostFtdcExchangeMarginRateAdjustField* pExchangeMarginRateAdjust, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryExchangeRate(CThostFtdcExchangeRateField* pExchangeRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQrySecAgentACIDMap(CThostFtdcSecAgentACIDMapField* pSecAgentACIDMap, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryProductExchRate(CThostFtdcProductExchRateField* pProductExchRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryProductGroup(CThostFtdcProductGroupField* pProductGroup, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryMMInstrumentCommissionRate(CThostFtdcMMInstrumentCommissionRateField* pMMInstrumentCommissionRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryMMOptionInstrCommRate(CThostFtdcMMOptionInstrCommRateField* pMMOptionInstrCommRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryInstrumentOrderCommRate(CThostFtdcInstrumentOrderCommRateField* pInstrumentOrderCommRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQrySecAgentTradingAccount(CThostFtdcTradingAccountField* pTradingAccount, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQrySecAgentCheckMode(CThostFtdcSecAgentCheckModeField* pSecAgentCheckMode, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQrySecAgentTradeInfo(CThostFtdcSecAgentTradeInfoField* pSecAgentTradeInfo, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryOptionInstrTradeCost(CThostFtdcOptionInstrTradeCostField* pOptionInstrTradeCost, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryOptionInstrCommRate(CThostFtdcOptionInstrCommRateField* pOptionInstrCommRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryExecOrder(CThostFtdcExecOrderField* pExecOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryForQuote(CThostFtdcForQuoteField* pForQuote, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryQuote(CThostFtdcQuoteField* pQuote, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryOptionSelfClose(CThostFtdcOptionSelfCloseField* pOptionSelfClose, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryInvestUnit(CThostFtdcInvestUnitField* pInvestUnit, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryCombInstrumentGuard(CThostFtdcCombInstrumentGuardField* pCombInstrumentGuard, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryCombAction(CThostFtdcCombActionField* pCombAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryTransferSerial(CThostFtdcTransferSerialField* pTransferSerial, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryAccountregister(CThostFtdcAccountregisterField* pAccountregister, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspError(CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRtnOrder(CThostFtdcOrderField* pOrder) override;
        void OnRtnTrade(CThostFtdcTradeField* pTrade) override;
        void OnErrRtnOrderInsert(CThostFtdcInputOrderField* pInputOrder, CThostFtdcRspInfoField* pRspInfo) override;
        void OnErrRtnOrderAction(CThostFtdcOrderActionField* pOrderAction, CThostFtdcRspInfoField* pRspInfo) override;
        void OnRtnInstrumentStatus(CThostFtdcInstrumentStatusField* pInstrumentStatus) override;
        void OnRtnBulletin(CThostFtdcBulletinField* pBulletin) override;
        void OnRtnTradingNotice(CThostFtdcTradingNoticeInfoField* pTradingNoticeInfo) override;
        void OnRtnErrorConditionalOrder(CThostFtdcErrorConditionalOrderField* pErrorConditionalOrder) override;
        void OnRtnExecOrder(CThostFtdcExecOrderField* pExecOrder) override;
        void OnErrRtnExecOrderInsert(CThostFtdcInputExecOrderField* pInputExecOrder, CThostFtdcRspInfoField* pRspInfo) override;
        void OnErrRtnExecOrderAction(CThostFtdcExecOrderActionField* pExecOrderAction, CThostFtdcRspInfoField* pRspInfo) override;
        void OnErrRtnForQuoteInsert(CThostFtdcInputForQuoteField* pInputForQuote, CThostFtdcRspInfoField* pRspInfo) override;
        void OnRtnQuote(CThostFtdcQuoteField* pQuote) override;
        void OnErrRtnQuoteInsert(CThostFtdcInputQuoteField* pInputQuote, CThostFtdcRspInfoField* pRspInfo) override;
        void OnErrRtnQuoteAction(CThostFtdcQuoteActionField* pQuoteAction, CThostFtdcRspInfoField* pRspInfo) override;
        void OnRtnForQuoteRsp(CThostFtdcForQuoteRspField* pForQuoteRsp) override;
        void OnRtnCFMMCTradingAccountToken(CThostFtdcCFMMCTradingAccountTokenField* pCFMMCTradingAccountToken) override;
        void OnErrRtnBatchOrderAction(CThostFtdcBatchOrderActionField* pBatchOrderAction, CThostFtdcRspInfoField* pRspInfo) override;
        void OnRtnOptionSelfClose(CThostFtdcOptionSelfCloseField* pOptionSelfClose) override;
        void OnErrRtnOptionSelfCloseInsert(CThostFtdcInputOptionSelfCloseField* pInputOptionSelfClose, CThostFtdcRspInfoField* pRspInfo) override;
        void OnErrRtnOptionSelfCloseAction(CThostFtdcOptionSelfCloseActionField* pOptionSelfCloseAction, CThostFtdcRspInfoField* pRspInfo) override;
        void OnRtnCombAction(CThostFtdcCombActionField* pCombAction) override;
        void OnErrRtnCombActionInsert(CThostFtdcInputCombActionField* pInputCombAction, CThostFtdcRspInfoField* pRspInfo) override;
        void OnRspQryContractBank(CThostFtdcContractBankField* pContractBank, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryParkedOrder(CThostFtdcParkedOrderField* pParkedOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryParkedOrderAction(CThostFtdcParkedOrderActionField* pParkedOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryTradingNotice(CThostFtdcTradingNoticeField* pTradingNotice, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryBrokerTradingParams(CThostFtdcBrokerTradingParamsField* pBrokerTradingParams, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryBrokerTradingAlgos(CThostFtdcBrokerTradingAlgosField* pBrokerTradingAlgos, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQueryCFMMCTradingAccountToken(CThostFtdcQueryCFMMCTradingAccountTokenField* pQueryCFMMCTradingAccountToken, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRtnFromBankToFutureByBank(CThostFtdcRspTransferField* pRspTransfer) override;
        void OnRtnFromFutureToBankByBank(CThostFtdcRspTransferField* pRspTransfer) override;
        void OnRtnRepealFromBankToFutureByBank(CThostFtdcRspRepealField* pRspRepeal) override;
        void OnRtnRepealFromFutureToBankByBank(CThostFtdcRspRepealField* pRspRepeal) override;
        void OnRtnFromBankToFutureByFuture(CThostFtdcRspTransferField* pRspTransfer) override;
        void OnRtnFromFutureToBankByFuture(CThostFtdcRspTransferField* pRspTransfer) override;
        void OnRtnRepealFromBankToFutureByFutureManual(CThostFtdcRspRepealField* pRspRepeal) override;
        void OnRtnRepealFromFutureToBankByFutureManual(CThostFtdcRspRepealField* pRspRepeal) override;
        void OnRtnQueryBankBalanceByFuture(CThostFtdcNotifyQueryAccountField* pNotifyQueryAccount) override;
        void OnErrRtnBankToFutureByFuture(CThostFtdcReqTransferField* pReqTransfer, CThostFtdcRspInfoField* pRspInfo) override;
        void OnErrRtnFutureToBankByFuture(CThostFtdcReqTransferField* pReqTransfer, CThostFtdcRspInfoField* pRspInfo) override;
        void OnErrRtnRepealBankToFutureByFutureManual(CThostFtdcReqRepealField* pReqRepeal, CThostFtdcRspInfoField* pRspInfo) override;
        void OnErrRtnRepealFutureToBankByFutureManual(CThostFtdcReqRepealField* pReqRepeal, CThostFtdcRspInfoField* pRspInfo) override;
        void OnErrRtnQueryBankBalanceByFuture(CThostFtdcReqQueryAccountField* pReqQueryAccount, CThostFtdcRspInfoField* pRspInfo) override;
        void OnRtnRepealFromBankToFutureByFuture(CThostFtdcRspRepealField* pRspRepeal) override;
        void OnRtnRepealFromFutureToBankByFuture(CThostFtdcRspRepealField* pRspRepeal) override;
        void OnRspFromBankToFutureByFuture(CThostFtdcReqTransferField* pReqTransfer, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspFromFutureToBankByFuture(CThostFtdcReqTransferField* pReqTransfer, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQueryBankAccountMoneyByFuture(CThostFtdcReqQueryAccountField* pReqQueryAccount, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRtnOpenAccountByBank(CThostFtdcOpenAccountField* pOpenAccount) override;
        void OnRtnCancelAccountByBank(CThostFtdcCancelAccountField* pCancelAccount) override;
        void OnRtnChangeAccountByBank(CThostFtdcChangeAccountField* pChangeAccount) override;
        void OnRspQryClassifiedInstrument(CThostFtdcInstrumentField* pInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryCombPromotionParam(CThostFtdcCombPromotionParamField* pCombPromotionParam, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryRiskSettleInvstPosition(CThostFtdcRiskSettleInvstPositionField* pRiskSettleInvstPosition, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryRiskSettleProductStatus(CThostFtdcRiskSettleProductStatusField* pRiskSettleProductStatus, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQrySPBMFutureParameter(CThostFtdcSPBMFutureParameterField* pSPBMFutureParameter, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQrySPBMOptionParameter(CThostFtdcSPBMOptionParameterField* pSPBMOptionParameter, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQrySPBMIntraParameter(CThostFtdcSPBMIntraParameterField* pSPBMIntraParameter, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQrySPBMInterParameter(CThostFtdcSPBMInterParameterField* pSPBMInterParameter, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQrySPBMPortfDefinition(CThostFtdcSPBMPortfDefinitionField* pSPBMPortfDefinition, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQrySPBMInvestorPortfDef(CThostFtdcSPBMInvestorPortfDefField* pSPBMInvestorPortfDef, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryInvestorPortfMarginRatio(CThostFtdcInvestorPortfMarginRatioField* pInvestorPortfMarginRatio, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryInvestorProdSPBMDetail(CThostFtdcInvestorProdSPBMDetailField* pInvestorProdSPBMDetail, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryInvestorCommoditySPMMMargin(CThostFtdcInvestorCommoditySPMMMarginField* pInvestorCommoditySPMMMargin, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryInvestorCommodityGroupSPMMMargin(CThostFtdcInvestorCommodityGroupSPMMMarginField* pInvestorCommodityGroupSPMMMargin, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQrySPMMInstParam(CThostFtdcSPMMInstParamField* pSPMMInstParam, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQrySPMMProductParam(CThostFtdcSPMMProductParamField* pSPMMProductParam, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQrySPBMAddOnInterParameter(CThostFtdcSPBMAddOnInterParameterField* pSPBMAddOnInterParameter, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryRCAMSCombProductInfo(CThostFtdcRCAMSCombProductInfoField* pRCAMSCombProductInfo, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryRCAMSInstrParameter(CThostFtdcRCAMSInstrParameterField* pRCAMSInstrParameter, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryRCAMSIntraParameter(CThostFtdcRCAMSIntraParameterField* pRCAMSIntraParameter, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryRCAMSInterParameter(CThostFtdcRCAMSInterParameterField* pRCAMSInterParameter, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryRCAMSShortOptAdjustParam(CThostFtdcRCAMSShortOptAdjustParamField* pRCAMSShortOptAdjustParam, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryRCAMSInvestorCombPosition(CThostFtdcRCAMSInvestorCombPositionField* pRCAMSInvestorCombPosition, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryInvestorProdRCAMSMargin(CThostFtdcInvestorProdRCAMSMarginField* pInvestorProdRCAMSMargin, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryRULEInstrParameter(CThostFtdcRULEInstrParameterField* pRULEInstrParameter, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryRULEIntraParameter(CThostFtdcRULEIntraParameterField* pRULEIntraParameter, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryRULEInterParameter(CThostFtdcRULEInterParameterField* pRULEInterParameter, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryInvestorProdRULEMargin(CThostFtdcInvestorProdRULEMarginField* pInvestorProdRULEMargin, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryInvestorPortfSetting(CThostFtdcInvestorPortfSettingField* pInvestorPortfSetting, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryInvestorInfoCommRec(CThostFtdcInvestorInfoCommRecField* pInvestorInfoCommRec, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspQryCombLeg(CThostFtdcCombLegField* pCombLeg, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspOffsetSetting(CThostFtdcInputOffsetSettingField* pInputOffsetSetting, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRspCancelOffsetSetting(CThostFtdcInputOffsetSettingField* pInputOffsetSetting, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
        void OnRtnOffsetSetting(CThostFtdcOffsetSettingField* pOffsetSetting) override;
        void OnErrRtnOffsetSetting(CThostFtdcInputOffsetSettingField* pInputOffsetSetting, CThostFtdcRspInfoField* pRspInfo) override;
        void OnErrRtnCancelOffsetSetting(CThostFtdcCancelOffsetSettingField* pCancelOffsetSetting, CThostFtdcRspInfoField* pRspInfo) override;
        void OnRspQryOffsetSetting(CThostFtdcOffsetSettingField* pOffsetSetting, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) override;
};

extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnFrontConnected(void* m_rust);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnFrontDisconnected(void* m_rust, int nReason);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnHeartBeatWarning(void* m_rust, int nTimeLapse);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspAuthenticate(void* m_rust, CThostFtdcRspAuthenticateField* pRspAuthenticateField, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspUserLogin(void* m_rust, CThostFtdcRspUserLoginField* pRspUserLogin, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspUserLogout(void* m_rust, CThostFtdcUserLogoutField* pUserLogout, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspUserPasswordUpdate(void* m_rust, CThostFtdcUserPasswordUpdateField* pUserPasswordUpdate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspTradingAccountPasswordUpdate(void* m_rust, CThostFtdcTradingAccountPasswordUpdateField* pTradingAccountPasswordUpdate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspUserAuthMethod(void* m_rust, CThostFtdcRspUserAuthMethodField* pRspUserAuthMethod, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspGenUserCaptcha(void* m_rust, CThostFtdcRspGenUserCaptchaField* pRspGenUserCaptcha, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspGenUserText(void* m_rust, CThostFtdcRspGenUserTextField* pRspGenUserText, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspOrderInsert(void* m_rust, CThostFtdcInputOrderField* pInputOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspParkedOrderInsert(void* m_rust, CThostFtdcParkedOrderField* pParkedOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspParkedOrderAction(void* m_rust, CThostFtdcParkedOrderActionField* pParkedOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspOrderAction(void* m_rust, CThostFtdcInputOrderActionField* pInputOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryMaxOrderVolume(void* m_rust, CThostFtdcQryMaxOrderVolumeField* pQryMaxOrderVolume, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspSettlementInfoConfirm(void* m_rust, CThostFtdcSettlementInfoConfirmField* pSettlementInfoConfirm, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspRemoveParkedOrder(void* m_rust, CThostFtdcRemoveParkedOrderField* pRemoveParkedOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspRemoveParkedOrderAction(void* m_rust, CThostFtdcRemoveParkedOrderActionField* pRemoveParkedOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspExecOrderInsert(void* m_rust, CThostFtdcInputExecOrderField* pInputExecOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspExecOrderAction(void* m_rust, CThostFtdcInputExecOrderActionField* pInputExecOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspForQuoteInsert(void* m_rust, CThostFtdcInputForQuoteField* pInputForQuote, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQuoteInsert(void* m_rust, CThostFtdcInputQuoteField* pInputQuote, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQuoteAction(void* m_rust, CThostFtdcInputQuoteActionField* pInputQuoteAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspBatchOrderAction(void* m_rust, CThostFtdcInputBatchOrderActionField* pInputBatchOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspOptionSelfCloseInsert(void* m_rust, CThostFtdcInputOptionSelfCloseField* pInputOptionSelfClose, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspOptionSelfCloseAction(void* m_rust, CThostFtdcInputOptionSelfCloseActionField* pInputOptionSelfCloseAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspCombActionInsert(void* m_rust, CThostFtdcInputCombActionField* pInputCombAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryOrder(void* m_rust, CThostFtdcOrderField* pOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryTrade(void* m_rust, CThostFtdcTradeField* pTrade, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryInvestorPosition(void* m_rust, CThostFtdcInvestorPositionField* pInvestorPosition, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryTradingAccount(void* m_rust, CThostFtdcTradingAccountField* pTradingAccount, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryInvestor(void* m_rust, CThostFtdcInvestorField* pInvestor, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryTradingCode(void* m_rust, CThostFtdcTradingCodeField* pTradingCode, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryInstrumentMarginRate(void* m_rust, CThostFtdcInstrumentMarginRateField* pInstrumentMarginRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryInstrumentCommissionRate(void* m_rust, CThostFtdcInstrumentCommissionRateField* pInstrumentCommissionRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryExchange(void* m_rust, CThostFtdcExchangeField* pExchange, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryProduct(void* m_rust, CThostFtdcProductField* pProduct, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryInstrument(void* m_rust, CThostFtdcInstrumentField* pInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryDepthMarketData(void* m_rust, CThostFtdcDepthMarketDataField* pDepthMarketData, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryTraderOffer(void* m_rust, CThostFtdcTraderOfferField* pTraderOffer, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQrySettlementInfo(void* m_rust, CThostFtdcSettlementInfoField* pSettlementInfo, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryTransferBank(void* m_rust, CThostFtdcTransferBankField* pTransferBank, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryInvestorPositionDetail(void* m_rust, CThostFtdcInvestorPositionDetailField* pInvestorPositionDetail, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryNotice(void* m_rust, CThostFtdcNoticeField* pNotice, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQrySettlementInfoConfirm(void* m_rust, CThostFtdcSettlementInfoConfirmField* pSettlementInfoConfirm, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryInvestorPositionCombineDetail(void* m_rust, CThostFtdcInvestorPositionCombineDetailField* pInvestorPositionCombineDetail, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryCFMMCTradingAccountKey(void* m_rust, CThostFtdcCFMMCTradingAccountKeyField* pCFMMCTradingAccountKey, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryEWarrantOffset(void* m_rust, CThostFtdcEWarrantOffsetField* pEWarrantOffset, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryInvestorProductGroupMargin(void* m_rust, CThostFtdcInvestorProductGroupMarginField* pInvestorProductGroupMargin, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryExchangeMarginRate(void* m_rust, CThostFtdcExchangeMarginRateField* pExchangeMarginRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryExchangeMarginRateAdjust(void* m_rust, CThostFtdcExchangeMarginRateAdjustField* pExchangeMarginRateAdjust, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryExchangeRate(void* m_rust, CThostFtdcExchangeRateField* pExchangeRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQrySecAgentACIDMap(void* m_rust, CThostFtdcSecAgentACIDMapField* pSecAgentACIDMap, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryProductExchRate(void* m_rust, CThostFtdcProductExchRateField* pProductExchRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryProductGroup(void* m_rust, CThostFtdcProductGroupField* pProductGroup, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryMMInstrumentCommissionRate(void* m_rust, CThostFtdcMMInstrumentCommissionRateField* pMMInstrumentCommissionRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryMMOptionInstrCommRate(void* m_rust, CThostFtdcMMOptionInstrCommRateField* pMMOptionInstrCommRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryInstrumentOrderCommRate(void* m_rust, CThostFtdcInstrumentOrderCommRateField* pInstrumentOrderCommRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQrySecAgentTradingAccount(void* m_rust, CThostFtdcTradingAccountField* pTradingAccount, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQrySecAgentCheckMode(void* m_rust, CThostFtdcSecAgentCheckModeField* pSecAgentCheckMode, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQrySecAgentTradeInfo(void* m_rust, CThostFtdcSecAgentTradeInfoField* pSecAgentTradeInfo, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryOptionInstrTradeCost(void* m_rust, CThostFtdcOptionInstrTradeCostField* pOptionInstrTradeCost, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryOptionInstrCommRate(void* m_rust, CThostFtdcOptionInstrCommRateField* pOptionInstrCommRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryExecOrder(void* m_rust, CThostFtdcExecOrderField* pExecOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryForQuote(void* m_rust, CThostFtdcForQuoteField* pForQuote, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryQuote(void* m_rust, CThostFtdcQuoteField* pQuote, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryOptionSelfClose(void* m_rust, CThostFtdcOptionSelfCloseField* pOptionSelfClose, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryInvestUnit(void* m_rust, CThostFtdcInvestUnitField* pInvestUnit, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryCombInstrumentGuard(void* m_rust, CThostFtdcCombInstrumentGuardField* pCombInstrumentGuard, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryCombAction(void* m_rust, CThostFtdcCombActionField* pCombAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryTransferSerial(void* m_rust, CThostFtdcTransferSerialField* pTransferSerial, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryAccountregister(void* m_rust, CThostFtdcAccountregisterField* pAccountregister, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspError(void* m_rust, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRtnOrder(void* m_rust, CThostFtdcOrderField* pOrder);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRtnTrade(void* m_rust, CThostFtdcTradeField* pTrade);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnErrRtnOrderInsert(void* m_rust, CThostFtdcInputOrderField* pInputOrder, CThostFtdcRspInfoField* pRspInfo);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnErrRtnOrderAction(void* m_rust, CThostFtdcOrderActionField* pOrderAction, CThostFtdcRspInfoField* pRspInfo);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRtnInstrumentStatus(void* m_rust, CThostFtdcInstrumentStatusField* pInstrumentStatus);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRtnBulletin(void* m_rust, CThostFtdcBulletinField* pBulletin);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRtnTradingNotice(void* m_rust, CThostFtdcTradingNoticeInfoField* pTradingNoticeInfo);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRtnErrorConditionalOrder(void* m_rust, CThostFtdcErrorConditionalOrderField* pErrorConditionalOrder);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRtnExecOrder(void* m_rust, CThostFtdcExecOrderField* pExecOrder);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnErrRtnExecOrderInsert(void* m_rust, CThostFtdcInputExecOrderField* pInputExecOrder, CThostFtdcRspInfoField* pRspInfo);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnErrRtnExecOrderAction(void* m_rust, CThostFtdcExecOrderActionField* pExecOrderAction, CThostFtdcRspInfoField* pRspInfo);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnErrRtnForQuoteInsert(void* m_rust, CThostFtdcInputForQuoteField* pInputForQuote, CThostFtdcRspInfoField* pRspInfo);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRtnQuote(void* m_rust, CThostFtdcQuoteField* pQuote);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnErrRtnQuoteInsert(void* m_rust, CThostFtdcInputQuoteField* pInputQuote, CThostFtdcRspInfoField* pRspInfo);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnErrRtnQuoteAction(void* m_rust, CThostFtdcQuoteActionField* pQuoteAction, CThostFtdcRspInfoField* pRspInfo);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRtnForQuoteRsp(void* m_rust, CThostFtdcForQuoteRspField* pForQuoteRsp);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRtnCFMMCTradingAccountToken(void* m_rust, CThostFtdcCFMMCTradingAccountTokenField* pCFMMCTradingAccountToken);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnErrRtnBatchOrderAction(void* m_rust, CThostFtdcBatchOrderActionField* pBatchOrderAction, CThostFtdcRspInfoField* pRspInfo);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRtnOptionSelfClose(void* m_rust, CThostFtdcOptionSelfCloseField* pOptionSelfClose);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnErrRtnOptionSelfCloseInsert(void* m_rust, CThostFtdcInputOptionSelfCloseField* pInputOptionSelfClose, CThostFtdcRspInfoField* pRspInfo);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnErrRtnOptionSelfCloseAction(void* m_rust, CThostFtdcOptionSelfCloseActionField* pOptionSelfCloseAction, CThostFtdcRspInfoField* pRspInfo);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRtnCombAction(void* m_rust, CThostFtdcCombActionField* pCombAction);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnErrRtnCombActionInsert(void* m_rust, CThostFtdcInputCombActionField* pInputCombAction, CThostFtdcRspInfoField* pRspInfo);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryContractBank(void* m_rust, CThostFtdcContractBankField* pContractBank, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryParkedOrder(void* m_rust, CThostFtdcParkedOrderField* pParkedOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryParkedOrderAction(void* m_rust, CThostFtdcParkedOrderActionField* pParkedOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryTradingNotice(void* m_rust, CThostFtdcTradingNoticeField* pTradingNotice, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryBrokerTradingParams(void* m_rust, CThostFtdcBrokerTradingParamsField* pBrokerTradingParams, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryBrokerTradingAlgos(void* m_rust, CThostFtdcBrokerTradingAlgosField* pBrokerTradingAlgos, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQueryCFMMCTradingAccountToken(void* m_rust, CThostFtdcQueryCFMMCTradingAccountTokenField* pQueryCFMMCTradingAccountToken, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRtnFromBankToFutureByBank(void* m_rust, CThostFtdcRspTransferField* pRspTransfer);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRtnFromFutureToBankByBank(void* m_rust, CThostFtdcRspTransferField* pRspTransfer);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRtnRepealFromBankToFutureByBank(void* m_rust, CThostFtdcRspRepealField* pRspRepeal);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRtnRepealFromFutureToBankByBank(void* m_rust, CThostFtdcRspRepealField* pRspRepeal);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRtnFromBankToFutureByFuture(void* m_rust, CThostFtdcRspTransferField* pRspTransfer);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRtnFromFutureToBankByFuture(void* m_rust, CThostFtdcRspTransferField* pRspTransfer);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRtnRepealFromBankToFutureByFutureManual(void* m_rust, CThostFtdcRspRepealField* pRspRepeal);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRtnRepealFromFutureToBankByFutureManual(void* m_rust, CThostFtdcRspRepealField* pRspRepeal);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRtnQueryBankBalanceByFuture(void* m_rust, CThostFtdcNotifyQueryAccountField* pNotifyQueryAccount);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnErrRtnBankToFutureByFuture(void* m_rust, CThostFtdcReqTransferField* pReqTransfer, CThostFtdcRspInfoField* pRspInfo);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnErrRtnFutureToBankByFuture(void* m_rust, CThostFtdcReqTransferField* pReqTransfer, CThostFtdcRspInfoField* pRspInfo);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnErrRtnRepealBankToFutureByFutureManual(void* m_rust, CThostFtdcReqRepealField* pReqRepeal, CThostFtdcRspInfoField* pRspInfo);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnErrRtnRepealFutureToBankByFutureManual(void* m_rust, CThostFtdcReqRepealField* pReqRepeal, CThostFtdcRspInfoField* pRspInfo);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnErrRtnQueryBankBalanceByFuture(void* m_rust, CThostFtdcReqQueryAccountField* pReqQueryAccount, CThostFtdcRspInfoField* pRspInfo);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRtnRepealFromBankToFutureByFuture(void* m_rust, CThostFtdcRspRepealField* pRspRepeal);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRtnRepealFromFutureToBankByFuture(void* m_rust, CThostFtdcRspRepealField* pRspRepeal);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspFromBankToFutureByFuture(void* m_rust, CThostFtdcReqTransferField* pReqTransfer, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspFromFutureToBankByFuture(void* m_rust, CThostFtdcReqTransferField* pReqTransfer, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQueryBankAccountMoneyByFuture(void* m_rust, CThostFtdcReqQueryAccountField* pReqQueryAccount, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRtnOpenAccountByBank(void* m_rust, CThostFtdcOpenAccountField* pOpenAccount);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRtnCancelAccountByBank(void* m_rust, CThostFtdcCancelAccountField* pCancelAccount);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRtnChangeAccountByBank(void* m_rust, CThostFtdcChangeAccountField* pChangeAccount);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryClassifiedInstrument(void* m_rust, CThostFtdcInstrumentField* pInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryCombPromotionParam(void* m_rust, CThostFtdcCombPromotionParamField* pCombPromotionParam, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryRiskSettleInvstPosition(void* m_rust, CThostFtdcRiskSettleInvstPositionField* pRiskSettleInvstPosition, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryRiskSettleProductStatus(void* m_rust, CThostFtdcRiskSettleProductStatusField* pRiskSettleProductStatus, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQrySPBMFutureParameter(void* m_rust, CThostFtdcSPBMFutureParameterField* pSPBMFutureParameter, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQrySPBMOptionParameter(void* m_rust, CThostFtdcSPBMOptionParameterField* pSPBMOptionParameter, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQrySPBMIntraParameter(void* m_rust, CThostFtdcSPBMIntraParameterField* pSPBMIntraParameter, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQrySPBMInterParameter(void* m_rust, CThostFtdcSPBMInterParameterField* pSPBMInterParameter, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQrySPBMPortfDefinition(void* m_rust, CThostFtdcSPBMPortfDefinitionField* pSPBMPortfDefinition, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQrySPBMInvestorPortfDef(void* m_rust, CThostFtdcSPBMInvestorPortfDefField* pSPBMInvestorPortfDef, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryInvestorPortfMarginRatio(void* m_rust, CThostFtdcInvestorPortfMarginRatioField* pInvestorPortfMarginRatio, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryInvestorProdSPBMDetail(void* m_rust, CThostFtdcInvestorProdSPBMDetailField* pInvestorProdSPBMDetail, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryInvestorCommoditySPMMMargin(void* m_rust, CThostFtdcInvestorCommoditySPMMMarginField* pInvestorCommoditySPMMMargin, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryInvestorCommodityGroupSPMMMargin(void* m_rust, CThostFtdcInvestorCommodityGroupSPMMMarginField* pInvestorCommodityGroupSPMMMargin, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQrySPMMInstParam(void* m_rust, CThostFtdcSPMMInstParamField* pSPMMInstParam, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQrySPMMProductParam(void* m_rust, CThostFtdcSPMMProductParamField* pSPMMProductParam, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQrySPBMAddOnInterParameter(void* m_rust, CThostFtdcSPBMAddOnInterParameterField* pSPBMAddOnInterParameter, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryRCAMSCombProductInfo(void* m_rust, CThostFtdcRCAMSCombProductInfoField* pRCAMSCombProductInfo, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryRCAMSInstrParameter(void* m_rust, CThostFtdcRCAMSInstrParameterField* pRCAMSInstrParameter, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryRCAMSIntraParameter(void* m_rust, CThostFtdcRCAMSIntraParameterField* pRCAMSIntraParameter, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryRCAMSInterParameter(void* m_rust, CThostFtdcRCAMSInterParameterField* pRCAMSInterParameter, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryRCAMSShortOptAdjustParam(void* m_rust, CThostFtdcRCAMSShortOptAdjustParamField* pRCAMSShortOptAdjustParam, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryRCAMSInvestorCombPosition(void* m_rust, CThostFtdcRCAMSInvestorCombPositionField* pRCAMSInvestorCombPosition, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryInvestorProdRCAMSMargin(void* m_rust, CThostFtdcInvestorProdRCAMSMarginField* pInvestorProdRCAMSMargin, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryRULEInstrParameter(void* m_rust, CThostFtdcRULEInstrParameterField* pRULEInstrParameter, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryRULEIntraParameter(void* m_rust, CThostFtdcRULEIntraParameterField* pRULEIntraParameter, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryRULEInterParameter(void* m_rust, CThostFtdcRULEInterParameterField* pRULEInterParameter, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryInvestorProdRULEMargin(void* m_rust, CThostFtdcInvestorProdRULEMarginField* pInvestorProdRULEMargin, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryInvestorPortfSetting(void* m_rust, CThostFtdcInvestorPortfSettingField* pInvestorPortfSetting, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryInvestorInfoCommRec(void* m_rust, CThostFtdcInvestorInfoCommRecField* pInvestorInfoCommRec, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryCombLeg(void* m_rust, CThostFtdcCombLegField* pCombLeg, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspOffsetSetting(void* m_rust, CThostFtdcInputOffsetSettingField* pInputOffsetSetting, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspCancelOffsetSetting(void* m_rust, CThostFtdcInputOffsetSettingField* pInputOffsetSetting, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRtnOffsetSetting(void* m_rust, CThostFtdcOffsetSettingField* pOffsetSetting);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnErrRtnOffsetSetting(void* m_rust, CThostFtdcInputOffsetSettingField* pInputOffsetSetting, CThostFtdcRspInfoField* pRspInfo);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnErrRtnCancelOffsetSetting(void* m_rust, CThostFtdcCancelOffsetSettingField* pCancelOffsetSetting, CThostFtdcRspInfoField* pRspInfo);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_OnRspQryOffsetSetting(void* m_rust, CThostFtdcOffsetSettingField* pOffsetSetting, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
extern "C" void Rust_CThostFtdcTraderSpi_Trait_Drop(void* m_rust);

void Rust_CThostFtdcTraderSpi::OnFrontConnected() { return Rust_CThostFtdcTraderSpi_Trait_OnFrontConnected(m_rust); }
void Rust_CThostFtdcTraderSpi::OnFrontDisconnected(int nReason) { return Rust_CThostFtdcTraderSpi_Trait_OnFrontDisconnected(m_rust, nReason); }
void Rust_CThostFtdcTraderSpi::OnHeartBeatWarning(int nTimeLapse) { return Rust_CThostFtdcTraderSpi_Trait_OnHeartBeatWarning(m_rust, nTimeLapse); }
void Rust_CThostFtdcTraderSpi::OnRspAuthenticate(CThostFtdcRspAuthenticateField* pRspAuthenticateField, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspAuthenticate(m_rust, pRspAuthenticateField, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspUserLogin(CThostFtdcRspUserLoginField* pRspUserLogin, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspUserLogin(m_rust, pRspUserLogin, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspUserLogout(CThostFtdcUserLogoutField* pUserLogout, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspUserLogout(m_rust, pUserLogout, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspUserPasswordUpdate(CThostFtdcUserPasswordUpdateField* pUserPasswordUpdate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspUserPasswordUpdate(m_rust, pUserPasswordUpdate, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspTradingAccountPasswordUpdate(CThostFtdcTradingAccountPasswordUpdateField* pTradingAccountPasswordUpdate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspTradingAccountPasswordUpdate(m_rust, pTradingAccountPasswordUpdate, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspUserAuthMethod(CThostFtdcRspUserAuthMethodField* pRspUserAuthMethod, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspUserAuthMethod(m_rust, pRspUserAuthMethod, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspGenUserCaptcha(CThostFtdcRspGenUserCaptchaField* pRspGenUserCaptcha, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspGenUserCaptcha(m_rust, pRspGenUserCaptcha, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspGenUserText(CThostFtdcRspGenUserTextField* pRspGenUserText, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspGenUserText(m_rust, pRspGenUserText, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspOrderInsert(CThostFtdcInputOrderField* pInputOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspOrderInsert(m_rust, pInputOrder, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspParkedOrderInsert(CThostFtdcParkedOrderField* pParkedOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspParkedOrderInsert(m_rust, pParkedOrder, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspParkedOrderAction(CThostFtdcParkedOrderActionField* pParkedOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspParkedOrderAction(m_rust, pParkedOrderAction, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspOrderAction(CThostFtdcInputOrderActionField* pInputOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspOrderAction(m_rust, pInputOrderAction, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryMaxOrderVolume(CThostFtdcQryMaxOrderVolumeField* pQryMaxOrderVolume, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryMaxOrderVolume(m_rust, pQryMaxOrderVolume, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField* pSettlementInfoConfirm, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspSettlementInfoConfirm(m_rust, pSettlementInfoConfirm, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspRemoveParkedOrder(CThostFtdcRemoveParkedOrderField* pRemoveParkedOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspRemoveParkedOrder(m_rust, pRemoveParkedOrder, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspRemoveParkedOrderAction(CThostFtdcRemoveParkedOrderActionField* pRemoveParkedOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspRemoveParkedOrderAction(m_rust, pRemoveParkedOrderAction, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspExecOrderInsert(CThostFtdcInputExecOrderField* pInputExecOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspExecOrderInsert(m_rust, pInputExecOrder, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspExecOrderAction(CThostFtdcInputExecOrderActionField* pInputExecOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspExecOrderAction(m_rust, pInputExecOrderAction, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspForQuoteInsert(CThostFtdcInputForQuoteField* pInputForQuote, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspForQuoteInsert(m_rust, pInputForQuote, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQuoteInsert(CThostFtdcInputQuoteField* pInputQuote, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQuoteInsert(m_rust, pInputQuote, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQuoteAction(CThostFtdcInputQuoteActionField* pInputQuoteAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQuoteAction(m_rust, pInputQuoteAction, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspBatchOrderAction(CThostFtdcInputBatchOrderActionField* pInputBatchOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspBatchOrderAction(m_rust, pInputBatchOrderAction, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspOptionSelfCloseInsert(CThostFtdcInputOptionSelfCloseField* pInputOptionSelfClose, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspOptionSelfCloseInsert(m_rust, pInputOptionSelfClose, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspOptionSelfCloseAction(CThostFtdcInputOptionSelfCloseActionField* pInputOptionSelfCloseAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspOptionSelfCloseAction(m_rust, pInputOptionSelfCloseAction, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspCombActionInsert(CThostFtdcInputCombActionField* pInputCombAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspCombActionInsert(m_rust, pInputCombAction, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryOrder(CThostFtdcOrderField* pOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryOrder(m_rust, pOrder, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryTrade(CThostFtdcTradeField* pTrade, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryTrade(m_rust, pTrade, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryInvestorPosition(CThostFtdcInvestorPositionField* pInvestorPosition, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryInvestorPosition(m_rust, pInvestorPosition, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryTradingAccount(CThostFtdcTradingAccountField* pTradingAccount, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryTradingAccount(m_rust, pTradingAccount, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryInvestor(CThostFtdcInvestorField* pInvestor, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryInvestor(m_rust, pInvestor, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryTradingCode(CThostFtdcTradingCodeField* pTradingCode, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryTradingCode(m_rust, pTradingCode, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryInstrumentMarginRate(CThostFtdcInstrumentMarginRateField* pInstrumentMarginRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryInstrumentMarginRate(m_rust, pInstrumentMarginRate, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryInstrumentCommissionRate(CThostFtdcInstrumentCommissionRateField* pInstrumentCommissionRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryInstrumentCommissionRate(m_rust, pInstrumentCommissionRate, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryExchange(CThostFtdcExchangeField* pExchange, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryExchange(m_rust, pExchange, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryProduct(CThostFtdcProductField* pProduct, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryProduct(m_rust, pProduct, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryInstrument(CThostFtdcInstrumentField* pInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryInstrument(m_rust, pInstrument, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryDepthMarketData(CThostFtdcDepthMarketDataField* pDepthMarketData, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryDepthMarketData(m_rust, pDepthMarketData, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryTraderOffer(CThostFtdcTraderOfferField* pTraderOffer, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryTraderOffer(m_rust, pTraderOffer, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQrySettlementInfo(CThostFtdcSettlementInfoField* pSettlementInfo, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQrySettlementInfo(m_rust, pSettlementInfo, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryTransferBank(CThostFtdcTransferBankField* pTransferBank, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryTransferBank(m_rust, pTransferBank, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryInvestorPositionDetail(CThostFtdcInvestorPositionDetailField* pInvestorPositionDetail, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryInvestorPositionDetail(m_rust, pInvestorPositionDetail, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryNotice(CThostFtdcNoticeField* pNotice, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryNotice(m_rust, pNotice, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQrySettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField* pSettlementInfoConfirm, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQrySettlementInfoConfirm(m_rust, pSettlementInfoConfirm, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryInvestorPositionCombineDetail(CThostFtdcInvestorPositionCombineDetailField* pInvestorPositionCombineDetail, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryInvestorPositionCombineDetail(m_rust, pInvestorPositionCombineDetail, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryCFMMCTradingAccountKey(CThostFtdcCFMMCTradingAccountKeyField* pCFMMCTradingAccountKey, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryCFMMCTradingAccountKey(m_rust, pCFMMCTradingAccountKey, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryEWarrantOffset(CThostFtdcEWarrantOffsetField* pEWarrantOffset, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryEWarrantOffset(m_rust, pEWarrantOffset, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryInvestorProductGroupMargin(CThostFtdcInvestorProductGroupMarginField* pInvestorProductGroupMargin, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryInvestorProductGroupMargin(m_rust, pInvestorProductGroupMargin, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryExchangeMarginRate(CThostFtdcExchangeMarginRateField* pExchangeMarginRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryExchangeMarginRate(m_rust, pExchangeMarginRate, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryExchangeMarginRateAdjust(CThostFtdcExchangeMarginRateAdjustField* pExchangeMarginRateAdjust, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryExchangeMarginRateAdjust(m_rust, pExchangeMarginRateAdjust, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryExchangeRate(CThostFtdcExchangeRateField* pExchangeRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryExchangeRate(m_rust, pExchangeRate, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQrySecAgentACIDMap(CThostFtdcSecAgentACIDMapField* pSecAgentACIDMap, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQrySecAgentACIDMap(m_rust, pSecAgentACIDMap, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryProductExchRate(CThostFtdcProductExchRateField* pProductExchRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryProductExchRate(m_rust, pProductExchRate, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryProductGroup(CThostFtdcProductGroupField* pProductGroup, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryProductGroup(m_rust, pProductGroup, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryMMInstrumentCommissionRate(CThostFtdcMMInstrumentCommissionRateField* pMMInstrumentCommissionRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryMMInstrumentCommissionRate(m_rust, pMMInstrumentCommissionRate, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryMMOptionInstrCommRate(CThostFtdcMMOptionInstrCommRateField* pMMOptionInstrCommRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryMMOptionInstrCommRate(m_rust, pMMOptionInstrCommRate, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryInstrumentOrderCommRate(CThostFtdcInstrumentOrderCommRateField* pInstrumentOrderCommRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryInstrumentOrderCommRate(m_rust, pInstrumentOrderCommRate, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQrySecAgentTradingAccount(CThostFtdcTradingAccountField* pTradingAccount, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQrySecAgentTradingAccount(m_rust, pTradingAccount, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQrySecAgentCheckMode(CThostFtdcSecAgentCheckModeField* pSecAgentCheckMode, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQrySecAgentCheckMode(m_rust, pSecAgentCheckMode, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQrySecAgentTradeInfo(CThostFtdcSecAgentTradeInfoField* pSecAgentTradeInfo, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQrySecAgentTradeInfo(m_rust, pSecAgentTradeInfo, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryOptionInstrTradeCost(CThostFtdcOptionInstrTradeCostField* pOptionInstrTradeCost, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryOptionInstrTradeCost(m_rust, pOptionInstrTradeCost, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryOptionInstrCommRate(CThostFtdcOptionInstrCommRateField* pOptionInstrCommRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryOptionInstrCommRate(m_rust, pOptionInstrCommRate, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryExecOrder(CThostFtdcExecOrderField* pExecOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryExecOrder(m_rust, pExecOrder, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryForQuote(CThostFtdcForQuoteField* pForQuote, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryForQuote(m_rust, pForQuote, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryQuote(CThostFtdcQuoteField* pQuote, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryQuote(m_rust, pQuote, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryOptionSelfClose(CThostFtdcOptionSelfCloseField* pOptionSelfClose, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryOptionSelfClose(m_rust, pOptionSelfClose, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryInvestUnit(CThostFtdcInvestUnitField* pInvestUnit, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryInvestUnit(m_rust, pInvestUnit, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryCombInstrumentGuard(CThostFtdcCombInstrumentGuardField* pCombInstrumentGuard, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryCombInstrumentGuard(m_rust, pCombInstrumentGuard, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryCombAction(CThostFtdcCombActionField* pCombAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryCombAction(m_rust, pCombAction, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryTransferSerial(CThostFtdcTransferSerialField* pTransferSerial, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryTransferSerial(m_rust, pTransferSerial, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryAccountregister(CThostFtdcAccountregisterField* pAccountregister, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryAccountregister(m_rust, pAccountregister, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspError(CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspError(m_rust, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRtnOrder(CThostFtdcOrderField* pOrder) { return Rust_CThostFtdcTraderSpi_Trait_OnRtnOrder(m_rust, pOrder); }
void Rust_CThostFtdcTraderSpi::OnRtnTrade(CThostFtdcTradeField* pTrade) { return Rust_CThostFtdcTraderSpi_Trait_OnRtnTrade(m_rust, pTrade); }
void Rust_CThostFtdcTraderSpi::OnErrRtnOrderInsert(CThostFtdcInputOrderField* pInputOrder, CThostFtdcRspInfoField* pRspInfo) { return Rust_CThostFtdcTraderSpi_Trait_OnErrRtnOrderInsert(m_rust, pInputOrder, pRspInfo); }
void Rust_CThostFtdcTraderSpi::OnErrRtnOrderAction(CThostFtdcOrderActionField* pOrderAction, CThostFtdcRspInfoField* pRspInfo) { return Rust_CThostFtdcTraderSpi_Trait_OnErrRtnOrderAction(m_rust, pOrderAction, pRspInfo); }
void Rust_CThostFtdcTraderSpi::OnRtnInstrumentStatus(CThostFtdcInstrumentStatusField* pInstrumentStatus) { return Rust_CThostFtdcTraderSpi_Trait_OnRtnInstrumentStatus(m_rust, pInstrumentStatus); }
void Rust_CThostFtdcTraderSpi::OnRtnBulletin(CThostFtdcBulletinField* pBulletin) { return Rust_CThostFtdcTraderSpi_Trait_OnRtnBulletin(m_rust, pBulletin); }
void Rust_CThostFtdcTraderSpi::OnRtnTradingNotice(CThostFtdcTradingNoticeInfoField* pTradingNoticeInfo) { return Rust_CThostFtdcTraderSpi_Trait_OnRtnTradingNotice(m_rust, pTradingNoticeInfo); }
void Rust_CThostFtdcTraderSpi::OnRtnErrorConditionalOrder(CThostFtdcErrorConditionalOrderField* pErrorConditionalOrder) { return Rust_CThostFtdcTraderSpi_Trait_OnRtnErrorConditionalOrder(m_rust, pErrorConditionalOrder); }
void Rust_CThostFtdcTraderSpi::OnRtnExecOrder(CThostFtdcExecOrderField* pExecOrder) { return Rust_CThostFtdcTraderSpi_Trait_OnRtnExecOrder(m_rust, pExecOrder); }
void Rust_CThostFtdcTraderSpi::OnErrRtnExecOrderInsert(CThostFtdcInputExecOrderField* pInputExecOrder, CThostFtdcRspInfoField* pRspInfo) { return Rust_CThostFtdcTraderSpi_Trait_OnErrRtnExecOrderInsert(m_rust, pInputExecOrder, pRspInfo); }
void Rust_CThostFtdcTraderSpi::OnErrRtnExecOrderAction(CThostFtdcExecOrderActionField* pExecOrderAction, CThostFtdcRspInfoField* pRspInfo) { return Rust_CThostFtdcTraderSpi_Trait_OnErrRtnExecOrderAction(m_rust, pExecOrderAction, pRspInfo); }
void Rust_CThostFtdcTraderSpi::OnErrRtnForQuoteInsert(CThostFtdcInputForQuoteField* pInputForQuote, CThostFtdcRspInfoField* pRspInfo) { return Rust_CThostFtdcTraderSpi_Trait_OnErrRtnForQuoteInsert(m_rust, pInputForQuote, pRspInfo); }
void Rust_CThostFtdcTraderSpi::OnRtnQuote(CThostFtdcQuoteField* pQuote) { return Rust_CThostFtdcTraderSpi_Trait_OnRtnQuote(m_rust, pQuote); }
void Rust_CThostFtdcTraderSpi::OnErrRtnQuoteInsert(CThostFtdcInputQuoteField* pInputQuote, CThostFtdcRspInfoField* pRspInfo) { return Rust_CThostFtdcTraderSpi_Trait_OnErrRtnQuoteInsert(m_rust, pInputQuote, pRspInfo); }
void Rust_CThostFtdcTraderSpi::OnErrRtnQuoteAction(CThostFtdcQuoteActionField* pQuoteAction, CThostFtdcRspInfoField* pRspInfo) { return Rust_CThostFtdcTraderSpi_Trait_OnErrRtnQuoteAction(m_rust, pQuoteAction, pRspInfo); }
void Rust_CThostFtdcTraderSpi::OnRtnForQuoteRsp(CThostFtdcForQuoteRspField* pForQuoteRsp) { return Rust_CThostFtdcTraderSpi_Trait_OnRtnForQuoteRsp(m_rust, pForQuoteRsp); }
void Rust_CThostFtdcTraderSpi::OnRtnCFMMCTradingAccountToken(CThostFtdcCFMMCTradingAccountTokenField* pCFMMCTradingAccountToken) { return Rust_CThostFtdcTraderSpi_Trait_OnRtnCFMMCTradingAccountToken(m_rust, pCFMMCTradingAccountToken); }
void Rust_CThostFtdcTraderSpi::OnErrRtnBatchOrderAction(CThostFtdcBatchOrderActionField* pBatchOrderAction, CThostFtdcRspInfoField* pRspInfo) { return Rust_CThostFtdcTraderSpi_Trait_OnErrRtnBatchOrderAction(m_rust, pBatchOrderAction, pRspInfo); }
void Rust_CThostFtdcTraderSpi::OnRtnOptionSelfClose(CThostFtdcOptionSelfCloseField* pOptionSelfClose) { return Rust_CThostFtdcTraderSpi_Trait_OnRtnOptionSelfClose(m_rust, pOptionSelfClose); }
void Rust_CThostFtdcTraderSpi::OnErrRtnOptionSelfCloseInsert(CThostFtdcInputOptionSelfCloseField* pInputOptionSelfClose, CThostFtdcRspInfoField* pRspInfo) { return Rust_CThostFtdcTraderSpi_Trait_OnErrRtnOptionSelfCloseInsert(m_rust, pInputOptionSelfClose, pRspInfo); }
void Rust_CThostFtdcTraderSpi::OnErrRtnOptionSelfCloseAction(CThostFtdcOptionSelfCloseActionField* pOptionSelfCloseAction, CThostFtdcRspInfoField* pRspInfo) { return Rust_CThostFtdcTraderSpi_Trait_OnErrRtnOptionSelfCloseAction(m_rust, pOptionSelfCloseAction, pRspInfo); }
void Rust_CThostFtdcTraderSpi::OnRtnCombAction(CThostFtdcCombActionField* pCombAction) { return Rust_CThostFtdcTraderSpi_Trait_OnRtnCombAction(m_rust, pCombAction); }
void Rust_CThostFtdcTraderSpi::OnErrRtnCombActionInsert(CThostFtdcInputCombActionField* pInputCombAction, CThostFtdcRspInfoField* pRspInfo) { return Rust_CThostFtdcTraderSpi_Trait_OnErrRtnCombActionInsert(m_rust, pInputCombAction, pRspInfo); }
void Rust_CThostFtdcTraderSpi::OnRspQryContractBank(CThostFtdcContractBankField* pContractBank, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryContractBank(m_rust, pContractBank, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryParkedOrder(CThostFtdcParkedOrderField* pParkedOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryParkedOrder(m_rust, pParkedOrder, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryParkedOrderAction(CThostFtdcParkedOrderActionField* pParkedOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryParkedOrderAction(m_rust, pParkedOrderAction, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryTradingNotice(CThostFtdcTradingNoticeField* pTradingNotice, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryTradingNotice(m_rust, pTradingNotice, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryBrokerTradingParams(CThostFtdcBrokerTradingParamsField* pBrokerTradingParams, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryBrokerTradingParams(m_rust, pBrokerTradingParams, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryBrokerTradingAlgos(CThostFtdcBrokerTradingAlgosField* pBrokerTradingAlgos, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryBrokerTradingAlgos(m_rust, pBrokerTradingAlgos, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQueryCFMMCTradingAccountToken(CThostFtdcQueryCFMMCTradingAccountTokenField* pQueryCFMMCTradingAccountToken, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQueryCFMMCTradingAccountToken(m_rust, pQueryCFMMCTradingAccountToken, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRtnFromBankToFutureByBank(CThostFtdcRspTransferField* pRspTransfer) { return Rust_CThostFtdcTraderSpi_Trait_OnRtnFromBankToFutureByBank(m_rust, pRspTransfer); }
void Rust_CThostFtdcTraderSpi::OnRtnFromFutureToBankByBank(CThostFtdcRspTransferField* pRspTransfer) { return Rust_CThostFtdcTraderSpi_Trait_OnRtnFromFutureToBankByBank(m_rust, pRspTransfer); }
void Rust_CThostFtdcTraderSpi::OnRtnRepealFromBankToFutureByBank(CThostFtdcRspRepealField* pRspRepeal) { return Rust_CThostFtdcTraderSpi_Trait_OnRtnRepealFromBankToFutureByBank(m_rust, pRspRepeal); }
void Rust_CThostFtdcTraderSpi::OnRtnRepealFromFutureToBankByBank(CThostFtdcRspRepealField* pRspRepeal) { return Rust_CThostFtdcTraderSpi_Trait_OnRtnRepealFromFutureToBankByBank(m_rust, pRspRepeal); }
void Rust_CThostFtdcTraderSpi::OnRtnFromBankToFutureByFuture(CThostFtdcRspTransferField* pRspTransfer) { return Rust_CThostFtdcTraderSpi_Trait_OnRtnFromBankToFutureByFuture(m_rust, pRspTransfer); }
void Rust_CThostFtdcTraderSpi::OnRtnFromFutureToBankByFuture(CThostFtdcRspTransferField* pRspTransfer) { return Rust_CThostFtdcTraderSpi_Trait_OnRtnFromFutureToBankByFuture(m_rust, pRspTransfer); }
void Rust_CThostFtdcTraderSpi::OnRtnRepealFromBankToFutureByFutureManual(CThostFtdcRspRepealField* pRspRepeal) { return Rust_CThostFtdcTraderSpi_Trait_OnRtnRepealFromBankToFutureByFutureManual(m_rust, pRspRepeal); }
void Rust_CThostFtdcTraderSpi::OnRtnRepealFromFutureToBankByFutureManual(CThostFtdcRspRepealField* pRspRepeal) { return Rust_CThostFtdcTraderSpi_Trait_OnRtnRepealFromFutureToBankByFutureManual(m_rust, pRspRepeal); }
void Rust_CThostFtdcTraderSpi::OnRtnQueryBankBalanceByFuture(CThostFtdcNotifyQueryAccountField* pNotifyQueryAccount) { return Rust_CThostFtdcTraderSpi_Trait_OnRtnQueryBankBalanceByFuture(m_rust, pNotifyQueryAccount); }
void Rust_CThostFtdcTraderSpi::OnErrRtnBankToFutureByFuture(CThostFtdcReqTransferField* pReqTransfer, CThostFtdcRspInfoField* pRspInfo) { return Rust_CThostFtdcTraderSpi_Trait_OnErrRtnBankToFutureByFuture(m_rust, pReqTransfer, pRspInfo); }
void Rust_CThostFtdcTraderSpi::OnErrRtnFutureToBankByFuture(CThostFtdcReqTransferField* pReqTransfer, CThostFtdcRspInfoField* pRspInfo) { return Rust_CThostFtdcTraderSpi_Trait_OnErrRtnFutureToBankByFuture(m_rust, pReqTransfer, pRspInfo); }
void Rust_CThostFtdcTraderSpi::OnErrRtnRepealBankToFutureByFutureManual(CThostFtdcReqRepealField* pReqRepeal, CThostFtdcRspInfoField* pRspInfo) { return Rust_CThostFtdcTraderSpi_Trait_OnErrRtnRepealBankToFutureByFutureManual(m_rust, pReqRepeal, pRspInfo); }
void Rust_CThostFtdcTraderSpi::OnErrRtnRepealFutureToBankByFutureManual(CThostFtdcReqRepealField* pReqRepeal, CThostFtdcRspInfoField* pRspInfo) { return Rust_CThostFtdcTraderSpi_Trait_OnErrRtnRepealFutureToBankByFutureManual(m_rust, pReqRepeal, pRspInfo); }
void Rust_CThostFtdcTraderSpi::OnErrRtnQueryBankBalanceByFuture(CThostFtdcReqQueryAccountField* pReqQueryAccount, CThostFtdcRspInfoField* pRspInfo) { return Rust_CThostFtdcTraderSpi_Trait_OnErrRtnQueryBankBalanceByFuture(m_rust, pReqQueryAccount, pRspInfo); }
void Rust_CThostFtdcTraderSpi::OnRtnRepealFromBankToFutureByFuture(CThostFtdcRspRepealField* pRspRepeal) { return Rust_CThostFtdcTraderSpi_Trait_OnRtnRepealFromBankToFutureByFuture(m_rust, pRspRepeal); }
void Rust_CThostFtdcTraderSpi::OnRtnRepealFromFutureToBankByFuture(CThostFtdcRspRepealField* pRspRepeal) { return Rust_CThostFtdcTraderSpi_Trait_OnRtnRepealFromFutureToBankByFuture(m_rust, pRspRepeal); }
void Rust_CThostFtdcTraderSpi::OnRspFromBankToFutureByFuture(CThostFtdcReqTransferField* pReqTransfer, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspFromBankToFutureByFuture(m_rust, pReqTransfer, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspFromFutureToBankByFuture(CThostFtdcReqTransferField* pReqTransfer, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspFromFutureToBankByFuture(m_rust, pReqTransfer, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQueryBankAccountMoneyByFuture(CThostFtdcReqQueryAccountField* pReqQueryAccount, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQueryBankAccountMoneyByFuture(m_rust, pReqQueryAccount, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRtnOpenAccountByBank(CThostFtdcOpenAccountField* pOpenAccount) { return Rust_CThostFtdcTraderSpi_Trait_OnRtnOpenAccountByBank(m_rust, pOpenAccount); }
void Rust_CThostFtdcTraderSpi::OnRtnCancelAccountByBank(CThostFtdcCancelAccountField* pCancelAccount) { return Rust_CThostFtdcTraderSpi_Trait_OnRtnCancelAccountByBank(m_rust, pCancelAccount); }
void Rust_CThostFtdcTraderSpi::OnRtnChangeAccountByBank(CThostFtdcChangeAccountField* pChangeAccount) { return Rust_CThostFtdcTraderSpi_Trait_OnRtnChangeAccountByBank(m_rust, pChangeAccount); }
void Rust_CThostFtdcTraderSpi::OnRspQryClassifiedInstrument(CThostFtdcInstrumentField* pInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryClassifiedInstrument(m_rust, pInstrument, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryCombPromotionParam(CThostFtdcCombPromotionParamField* pCombPromotionParam, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryCombPromotionParam(m_rust, pCombPromotionParam, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryRiskSettleInvstPosition(CThostFtdcRiskSettleInvstPositionField* pRiskSettleInvstPosition, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryRiskSettleInvstPosition(m_rust, pRiskSettleInvstPosition, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryRiskSettleProductStatus(CThostFtdcRiskSettleProductStatusField* pRiskSettleProductStatus, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryRiskSettleProductStatus(m_rust, pRiskSettleProductStatus, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQrySPBMFutureParameter(CThostFtdcSPBMFutureParameterField* pSPBMFutureParameter, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQrySPBMFutureParameter(m_rust, pSPBMFutureParameter, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQrySPBMOptionParameter(CThostFtdcSPBMOptionParameterField* pSPBMOptionParameter, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQrySPBMOptionParameter(m_rust, pSPBMOptionParameter, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQrySPBMIntraParameter(CThostFtdcSPBMIntraParameterField* pSPBMIntraParameter, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQrySPBMIntraParameter(m_rust, pSPBMIntraParameter, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQrySPBMInterParameter(CThostFtdcSPBMInterParameterField* pSPBMInterParameter, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQrySPBMInterParameter(m_rust, pSPBMInterParameter, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQrySPBMPortfDefinition(CThostFtdcSPBMPortfDefinitionField* pSPBMPortfDefinition, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQrySPBMPortfDefinition(m_rust, pSPBMPortfDefinition, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQrySPBMInvestorPortfDef(CThostFtdcSPBMInvestorPortfDefField* pSPBMInvestorPortfDef, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQrySPBMInvestorPortfDef(m_rust, pSPBMInvestorPortfDef, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryInvestorPortfMarginRatio(CThostFtdcInvestorPortfMarginRatioField* pInvestorPortfMarginRatio, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryInvestorPortfMarginRatio(m_rust, pInvestorPortfMarginRatio, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryInvestorProdSPBMDetail(CThostFtdcInvestorProdSPBMDetailField* pInvestorProdSPBMDetail, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryInvestorProdSPBMDetail(m_rust, pInvestorProdSPBMDetail, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryInvestorCommoditySPMMMargin(CThostFtdcInvestorCommoditySPMMMarginField* pInvestorCommoditySPMMMargin, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryInvestorCommoditySPMMMargin(m_rust, pInvestorCommoditySPMMMargin, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryInvestorCommodityGroupSPMMMargin(CThostFtdcInvestorCommodityGroupSPMMMarginField* pInvestorCommodityGroupSPMMMargin, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryInvestorCommodityGroupSPMMMargin(m_rust, pInvestorCommodityGroupSPMMMargin, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQrySPMMInstParam(CThostFtdcSPMMInstParamField* pSPMMInstParam, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQrySPMMInstParam(m_rust, pSPMMInstParam, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQrySPMMProductParam(CThostFtdcSPMMProductParamField* pSPMMProductParam, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQrySPMMProductParam(m_rust, pSPMMProductParam, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQrySPBMAddOnInterParameter(CThostFtdcSPBMAddOnInterParameterField* pSPBMAddOnInterParameter, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQrySPBMAddOnInterParameter(m_rust, pSPBMAddOnInterParameter, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryRCAMSCombProductInfo(CThostFtdcRCAMSCombProductInfoField* pRCAMSCombProductInfo, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryRCAMSCombProductInfo(m_rust, pRCAMSCombProductInfo, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryRCAMSInstrParameter(CThostFtdcRCAMSInstrParameterField* pRCAMSInstrParameter, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryRCAMSInstrParameter(m_rust, pRCAMSInstrParameter, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryRCAMSIntraParameter(CThostFtdcRCAMSIntraParameterField* pRCAMSIntraParameter, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryRCAMSIntraParameter(m_rust, pRCAMSIntraParameter, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryRCAMSInterParameter(CThostFtdcRCAMSInterParameterField* pRCAMSInterParameter, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryRCAMSInterParameter(m_rust, pRCAMSInterParameter, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryRCAMSShortOptAdjustParam(CThostFtdcRCAMSShortOptAdjustParamField* pRCAMSShortOptAdjustParam, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryRCAMSShortOptAdjustParam(m_rust, pRCAMSShortOptAdjustParam, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryRCAMSInvestorCombPosition(CThostFtdcRCAMSInvestorCombPositionField* pRCAMSInvestorCombPosition, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryRCAMSInvestorCombPosition(m_rust, pRCAMSInvestorCombPosition, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryInvestorProdRCAMSMargin(CThostFtdcInvestorProdRCAMSMarginField* pInvestorProdRCAMSMargin, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryInvestorProdRCAMSMargin(m_rust, pInvestorProdRCAMSMargin, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryRULEInstrParameter(CThostFtdcRULEInstrParameterField* pRULEInstrParameter, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryRULEInstrParameter(m_rust, pRULEInstrParameter, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryRULEIntraParameter(CThostFtdcRULEIntraParameterField* pRULEIntraParameter, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryRULEIntraParameter(m_rust, pRULEIntraParameter, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryRULEInterParameter(CThostFtdcRULEInterParameterField* pRULEInterParameter, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryRULEInterParameter(m_rust, pRULEInterParameter, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryInvestorProdRULEMargin(CThostFtdcInvestorProdRULEMarginField* pInvestorProdRULEMargin, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryInvestorProdRULEMargin(m_rust, pInvestorProdRULEMargin, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryInvestorPortfSetting(CThostFtdcInvestorPortfSettingField* pInvestorPortfSetting, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryInvestorPortfSetting(m_rust, pInvestorPortfSetting, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryInvestorInfoCommRec(CThostFtdcInvestorInfoCommRecField* pInvestorInfoCommRec, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryInvestorInfoCommRec(m_rust, pInvestorInfoCommRec, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspQryCombLeg(CThostFtdcCombLegField* pCombLeg, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryCombLeg(m_rust, pCombLeg, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspOffsetSetting(CThostFtdcInputOffsetSettingField* pInputOffsetSetting, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspOffsetSetting(m_rust, pInputOffsetSetting, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRspCancelOffsetSetting(CThostFtdcInputOffsetSettingField* pInputOffsetSetting, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspCancelOffsetSetting(m_rust, pInputOffsetSetting, pRspInfo, nRequestID, bIsLast); }
void Rust_CThostFtdcTraderSpi::OnRtnOffsetSetting(CThostFtdcOffsetSettingField* pOffsetSetting) { return Rust_CThostFtdcTraderSpi_Trait_OnRtnOffsetSetting(m_rust, pOffsetSetting); }
void Rust_CThostFtdcTraderSpi::OnErrRtnOffsetSetting(CThostFtdcInputOffsetSettingField* pInputOffsetSetting, CThostFtdcRspInfoField* pRspInfo) { return Rust_CThostFtdcTraderSpi_Trait_OnErrRtnOffsetSetting(m_rust, pInputOffsetSetting, pRspInfo); }
void Rust_CThostFtdcTraderSpi::OnErrRtnCancelOffsetSetting(CThostFtdcCancelOffsetSettingField* pCancelOffsetSetting, CThostFtdcRspInfoField* pRspInfo) { return Rust_CThostFtdcTraderSpi_Trait_OnErrRtnCancelOffsetSetting(m_rust, pCancelOffsetSetting, pRspInfo); }
void Rust_CThostFtdcTraderSpi::OnRspQryOffsetSetting(CThostFtdcOffsetSettingField* pOffsetSetting, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) { return Rust_CThostFtdcTraderSpi_Trait_OnRspQryOffsetSetting(m_rust, pOffsetSetting, pRspInfo, nRequestID, bIsLast); }
Rust_CThostFtdcTraderSpi::Rust_CThostFtdcTraderSpi(void *rust) : m_rust(rust) {}
Rust_CThostFtdcTraderSpi::~Rust_CThostFtdcTraderSpi() { Rust_CThostFtdcTraderSpi_Trait_Drop(m_rust); }
