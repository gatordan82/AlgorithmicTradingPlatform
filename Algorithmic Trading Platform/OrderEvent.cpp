#include "OrderEvent.h"


OrderEvent::OrderEvent()
	: type{ EventType::ORDER }
{
}

OrderEvent::OrderEvent(std::string ticker_, ActionType action_, double quantity_)
	: type{ EventType::ORDER }, ticker{ ticker_ }, action{ action_ }, quantity{ quantity_ }
{
}

OrderEvent::OrderEvent(OrderEvent& oe)
	: type{ oe.type }, ticker{ oe.ticker }, action{ oe.action }, quantity{ oe.quantity }
{
}


OrderEvent::~OrderEvent()
{
}

OrderEvent& OrderEvent::operator=(OrderEvent& oe)
{
	if (&oe != this)
	{
		type = oe.type;
		ticker = oe.ticker;
		action = oe.action;
		quantity = oe.quantity;
	}

	return *this;
}

std::string OrderEvent::toString()
{
	return "Type: ORDER, Ticker: " + ticker
		+ ", Action: " + actionTypeToString(action)
		+ ", Quantity: " + std::to_string(quantity);
}

EventType OrderEvent::getType()
{
	return type;
}
