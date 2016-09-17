#ifndef SIGNALEVENT_H
#define SIGNALEVENT_H


#include "Event.h"
#include "EventEnum.h"
#include <boost\date_time.hpp>


class SignalEvent : public Event
{
public:
    SignalEvent();
    ~SignalEvent();

private:
    EventType type;
    std::string symbol_;
    //boost:: dateTime_;
};

#endif // !SIGNALEVENT_H