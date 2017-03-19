#ifndef __STRATEGY_H__
#define __STRATEGY_H__

#include <string>
#include <atomic>

#include "MultiEventProcessor.h"
#include "EventBusManager.h"
#include "portfolio.h"


class Strategy : MultiEventProcessor
{
protected:
	const int strategyId;

	//TODO const TradingDataStore tradingDataStore;
	//TODO ProviderManager providerManager;

	const EventBusManager eventBusManager;
	Portfolio portfolio;
	std::string accountId;
	std::atomic<long> clOrderId;

public:
	Strategy(int strategyId, )


};

#endif

