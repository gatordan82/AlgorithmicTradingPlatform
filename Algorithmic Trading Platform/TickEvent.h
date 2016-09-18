#ifndef _TICKEVENT_H
#define _TICKEVENT_H

#include "Event.h"
#include "boost\date_time\posix_time\posix_time.hpp"
#include <string>


class TickEvent :
	public Event
{
private:
	EventType type;
	std::string ticker;
	boost::posix_time::ptime time;
	double bid;
	double ask;

	TickEvent();

public:
	TickEvent(std::string ticker_, boost::posix_time::ptime time_, double bid_, double ask_);
	TickEvent(const TickEvent& te);

	virtual ~TickEvent();

	TickEvent& operator=(const TickEvent& te);

	EventType getType();
	std::string toString();
};



#endif // !_TICKEVENT_H