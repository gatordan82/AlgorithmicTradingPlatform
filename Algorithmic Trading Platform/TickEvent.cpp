#include "TickEvent.h"



TickEvent::TickEvent()
	: type{ EventType::TICK }
{
}

TickEvent::TickEvent(std::string ticker_, boost::posix_time::ptime time_, double bid_, double ask_)
	: type{ EventType::TICK }, ticker { ticker_ }, time{ time_ }, bid{ bid_ }, ask{ ask_ }
{
}

TickEvent::TickEvent(const TickEvent& te)
	: type{ te.type }, ticker{ te.ticker }, time{ te.time }, bid{ te.bid }, ask{ te.ask }
{
}


TickEvent::~TickEvent()
{
}

TickEvent& TickEvent::operator=(const TickEvent& te)
{
	if (&te != this)
	{
		type = te.type;
		ticker = te.ticker;
		time = te.time;
		bid = te.bid;
		ask = te.ask;
	}

	return *this;
}

EventType TickEvent::getType()
{
	return type;
}

std::string TickEvent::toString()
{
	return "Type: TICK, Ticker: " + ticker
		+ ", Datetime: " + boost::posix_time::to_simple_string(time)
		+ ", Bid: " + std::to_string(bid)
		+ ", Ask: " + std::to_string(ask);
}
