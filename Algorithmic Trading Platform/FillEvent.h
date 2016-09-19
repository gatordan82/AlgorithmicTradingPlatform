#ifndef _FILLEVENT_H
#define _FILLEVENT_H

#include "Event.h"
#include "ActionType.h"
#include <string>
#include "boost\date_time\posix_time\posix_time.hpp"
#include <vector>

class FillEvent :
	public Event
{
private:
	EventType type;
	std::vector<boost::posix_time::ptime> timestamps;
	std::string ticker;
	ActionType action;
	std::vector<double> quantities;
	std::vector<std::string> exchanges;
	std::vector<double> prices;
	double commission;

	FillEvent();

public:
	FillEvent(std::vector<boost::posix_time::ptime> timestamps_, std::string ticker_,
		ActionType action_, std::vector<double> quantities_, 
		std::vector<std::string> exchanges_, std::vector<double> prices_, 
		double commission_);
	FillEvent(FillEvent& fe);

	~FillEvent();

	FillEvent& operator=(FillEvent& fe);

	EventType getType();
};

#endif
