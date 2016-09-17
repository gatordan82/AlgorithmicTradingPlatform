#ifndef _EVENT_H
#define _EVENT_H

#include "EventType.h"

class Event
{
public:
    Event();
    virtual ~Event();

	virtual EventType getType() = 0;
};

#endif // !_EVENT_H