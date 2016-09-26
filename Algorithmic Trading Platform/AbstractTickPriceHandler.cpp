#include "AbstractTickPriceHandler.h"



AbstractTickPriceHandler::AbstractTickPriceHandler()
{
}

AbstractTickPriceHandler::AbstractTickPriceHandler(std::string _ticker)
	: ticker{ _ticker }
{
}

AbstractTickPriceHandler::AbstractTickPriceHandler(const AbstractTickPriceHandler& atph)
	: ticker{ _ticker }
{
}


AbstractTickPriceHandler::~AbstractTickPriceHandler()
{
}

AbstractTickPriceHandler& AbstractTickPriceHandler::operator=(const AbstractTickPriceHandler& atph)
{
	if (&atph != this)
		ticker = atph.ticker;

	return *this;
}

std::string AbstractTickPriceHandler::getTicker() const
{
	return ticker;
}
