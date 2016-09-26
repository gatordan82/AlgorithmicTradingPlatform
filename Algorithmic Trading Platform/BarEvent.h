#ifndef _BAREVENT_H
#define _BAREVENT_H

#include "Event.h"
#include <string>
#include "boost\date_time\posix_time\posix_time.hpp"
#include <unordered_map>

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
	static const std::unordered_map<int, std::string> periodMap;

	BarEvent();

	std::string readablePeriod() const;

public:
	BarEvent(std::string ticker_, boost::posix_time::ptime time_,
		     int period_, double openPrice_, double highPrice_,
		     double lowPrice_, double closePrice_, int volume_,
		     double adjClosePrice_);
	BarEvent(const BarEvent& be);

	~BarEvent();
	
	BarEvent& operator=(const BarEvent& be);

	std::string toString() const;
	EventType getType() const;
};

#endif