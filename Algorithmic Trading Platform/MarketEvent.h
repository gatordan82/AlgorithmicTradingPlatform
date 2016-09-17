#ifndef MARKETEVENT_H
#define MARKETEVENT_H

#include "Event.h"
#include "EventEnum.h"

class MarketEvent : public Event
{
public:
    MarketEvent();
    ~MarketEvent();

private:
    EventType m_type;
};

#endif // !MARKETEVENT_H