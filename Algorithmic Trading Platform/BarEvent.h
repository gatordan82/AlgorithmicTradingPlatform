#ifndef _BAREVENT_H
#define _BAREVENT_H

#include "Event.h"
#include <string>
#include "boost\date_time\posix_time\ptime.hpp"

class BarEvent :
	public Event
{
private:
	EventType type;
	std::string ticker;
	boost::posix_time::ptime time;
	int period;
	double openPrice;
	double highPrice;
	double lowPrice;
	double closePrice;
	int volume;
	double adjClosePrice;
	std::string periodReadable;

	std::string readablePeriod();

public:
	BarEvent();
	BarEvent(std::string ticker_, boost::posix_time::ptime time_,
		     int period_, double openPrice_, double highPrice_,
		     double lowPrice_, double closePrice_, int volume_,
		     double adjClostPrice_);
	BarEvent(const BarEvent& be);

	~BarEvent();
	
	BarEvent& operator=(const BarEvent& be);

	std::string toString();
};

#endif