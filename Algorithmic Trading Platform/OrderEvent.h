#ifndef _ORDEREVENT_H
#define _ORDEREVENT_H

#include "Event.h"
#include <string>
#include "EventType.h"
#include "ActionType.h"


class OrderEvent :
	public Event
{
private:
	EventType type;
	std::string ticker;
	ActionType action;
	double quantity;
	
	OrderEvent();

public:
	OrderEvent(std::string ticker_, ActionType action_, double quantity_);
	OrderEvent(OrderEvent& oe);

	~OrderEvent();

	OrderEvent& operator=(OrderEvent& oe);

	std::string toString();
	EventType getType();
};

#endif // !_ORDEREVENT_H