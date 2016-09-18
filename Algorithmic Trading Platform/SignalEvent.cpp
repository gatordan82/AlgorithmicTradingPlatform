#include "SignalEvent.h"



SignalEvent::SignalEvent() : type_{SIGNAL}
{
}

SignalEvent::SignalEvent(std::string ticker_, ActionType action_)
	: ticker{ ticker_ }, action{ action_ }
{
}

SignalEvent::SignalEvent(SignalEvent & se)
	: ticker{ se.ticker }, action{ se.action }
{
}


SignalEvent::~SignalEvent()
{
}

SignalEvent& SignalEvent::operator=(SignalEvent& se)
{
	if (&se != this)
	{
		ticker = se.ticker;
		action = se.action;
	}

	return *this;
}
