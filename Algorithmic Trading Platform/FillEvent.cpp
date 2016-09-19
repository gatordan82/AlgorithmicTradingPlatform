#include "FillEvent.h"



FillEvent::FillEvent() : type{ EventType::FILL }
{
}

FillEvent::FillEvent(std::vector<boost::posix_time::ptime> timestamps_, std::string ticker_, ActionType action_, std::vector<double> quantities_, std::vector<std::string> exchanges_, std::vector<double> prices_, double commission_)
	: type{ EventType::FILL }, timestamps{ timestamps_ }, ticker{ ticker_ }, action{ action_ },
	quantities{ quantities_ }, exchanges { exchanges_ }, prices{ prices_ }, commission{ commission_ }
{
}

FillEvent::FillEvent(FillEvent& fe)
	: type{ fe.type }, timestamps{ fe.timestamps }, ticker{ fe.ticker }, action{ fe.action },
	quantities{ fe.quantities }, exchanges{ fe.exchanges }, prices{ fe.prices }, commission{ fe.commission }
{
}


FillEvent::~FillEvent()
{
}

FillEvent& FillEvent::operator=(FillEvent& fe)
{
	if (&fe != this)
	{
		type = fe.type;
		timestamps = fe.timestamps;
		ticker = fe.ticker;
		action = fe.action;
		quantities = fe.quantities;
		exchanges = fe.exchanges;
		prices = fe.prices;
		commission = fe.commission;
	}

	return *this;
}

EventType FillEvent::getType()
{
	return type;
}
