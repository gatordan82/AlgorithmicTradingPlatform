#include "SignalEvent.h"



SignalEvent::SignalEvent() : type{ EventType::SIGNAL }
{
}

SignalEvent::SignalEvent(std::string ticker_, ActionType action_)
	: type{ EventType::SIGNAL }, ticker { ticker_ }, action{ action_ }
{
}

SignalEvent::SignalEvent(SignalEvent & se)
	: type{ EventType::SIGNAL }, ticker{ se.ticker }, action{ se.action }
{
}


SignalEvent::~SignalEvent()
{
}

SignalEvent& SignalEvent::operator=(SignalEvent& se)
{
	if (&se != this)
	{
		type = se.type;
		ticker = se.ticker;
		action = se.action;
	}

	return *this;
}

EventType SignalEvent::getType() const
{
	return type;
}
