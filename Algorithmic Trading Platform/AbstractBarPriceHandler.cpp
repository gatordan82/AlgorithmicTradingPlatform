#include "AbstractBarPriceHandler.h"



AbstractBarPriceHandler::AbstractBarPriceHandler()
{
}

AbstractBarPriceHandler::AbstractBarPriceHandler(std::string _ticker)
	: ticker{ _ticker }
{
}

AbstractBarPriceHandler::AbstractBarPriceHandler(const AbstractBarPriceHandler& abph)
	: ticker{ abph.ticker }
{
}


AbstractBarPriceHandler::~AbstractBarPriceHandler()
{
}

AbstractBarPriceHandler& AbstractBarPriceHandler::operator=(const AbstractBarPriceHandler& abph)
{
	if (&abph != this)
		ticker = abph.ticker;

	return *this;
}

std::string AbstractBarPriceHandler::getTicker() const
{
	return ticker;
}
