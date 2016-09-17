#ifndef _EVENTTYPE_H
#define _EVENTTYPE_H

enum class EventType : short
{
	TICK,
	BAR,
	SIGNAL,
	ORDER,
	FILL
};

#endif // !_EVENTTYPE_H