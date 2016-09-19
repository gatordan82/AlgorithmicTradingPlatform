#include "BarEvent.h"

std::unordered_map<int, std::string> const BarEvent::periodMap
{
	{1, "1 sec"},
	{5, "5 sec"},
	{10, "10 sec"},
	{15, "15 sec"},
	{30, "30 sec"},
	{60, "1 min"},
	{300, "5 min"},
	{600, "10 min"},
	{900, "15 min"},
	{1800, "30 min"},
	{3600, "1 hr"},
	{86400, "1 day"},
	{604800, "1 week"}
};

BarEvent::BarEvent() : type{ EventType::BAR }
{
}

std::string BarEvent::readablePeriod()
{
	auto it = periodMap.find(period);
	if (it != periodMap.end())
		return it->second;

	return std::to_string(period) + " sec";
}

BarEvent::BarEvent(std::string ticker_, 
					boost::posix_time::ptime time_, 
					int period_, 
					double openPrice_, 
					double highPrice_, 
					double lowPrice_, 
					double closePrice_, 
					int volume_, 
					double adjClosePrice_=std::nan(""))
	: type{ EventType::BAR }, ticker { ticker_ }, time{ time_ }, period{ period_ }, 
	openPrice{ openPrice_ }, highPrice{ highPrice_ }, lowPrice{ lowPrice_ },
	closePrice{ closePrice_ }, volume{ volume_ }, adjClosePrice{ adjClosePrice_ }
{
}

BarEvent::BarEvent(const BarEvent& be)
	: type{ be.type }, ticker { be.ticker }, time{ be.time }, period{ be.period }, 
	openPrice{ be.openPrice }, highPrice{ be.highPrice }, lowPrice{ be.lowPrice }, 
	closePrice{ be.closePrice }, volume{ be.volume }, adjClosePrice{ be.adjClosePrice }
{
}


BarEvent::~BarEvent()
{
}

BarEvent& BarEvent::operator=(const BarEvent& be)
{
	if (&be != this)
	{
		type = be.type;
		ticker = be.ticker;
		time = be.time;
		period = be.period;
		openPrice = be.openPrice;
		highPrice = be.highPrice;
		lowPrice = be.lowPrice;
		closePrice = be.closePrice;
		volume = be.volume;
		adjClosePrice = be.adjClosePrice;
	}

	return *this;
}

std::string BarEvent::toString()
{
	return "Type: BAR, Ticker: " + ticker
		+ ", Datetime: " + boost::posix_time::to_simple_string(time)
		+ ", Period: " + readablePeriod()
		+ ", Open: " + std::to_string(openPrice)
		+ ", High: " + std::to_string(highPrice)
		+ ", Low: " + std::to_string(lowPrice)
		+ ", Close: " + std::to_string(closePrice)
		+ ", Volume: " + std::to_string(volume)
		+ ", Adj. Close: " + std::to_string(adjClosePrice);
}

EventType BarEvent::getType()
{
	return type;
}
