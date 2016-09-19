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



public:
	OrderEvent();
	~OrderEvent();
};

#endif // !_ORDEREVENT_H