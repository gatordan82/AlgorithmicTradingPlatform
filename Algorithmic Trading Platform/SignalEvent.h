#ifndef _SIGNALEVENT_H
#define _SIGNALEVENT_H

#include "Event.h"
#include <string>
#include "ActionType.h"

class SignalEvent : public Event
{
private:
	EventType type;
	std::string ticker;
	ActionType action;

	SignalEvent();

public:
	SignalEvent(std::string ticker_, ActionType action_);
	SignalEvent(SignalEvent& se);

    ~SignalEvent();

	SignalEvent& operator=(SignalEvent& se);

	EventType getType() const;
};

#endif // !_SIGNALEVENT_H