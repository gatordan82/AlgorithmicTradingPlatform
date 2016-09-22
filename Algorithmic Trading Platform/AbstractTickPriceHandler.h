#ifndef _ABSTRACTTICKPRICEHANDLER_H
#define _ABSTRACTTICKPRICEHANDLER_H

#include <string>
#include "boost\date_time\posix_time\posix_time.hpp"
#include <memory>
#include "TickEvent.h"

class AbstractTickPriceHandler
{
private:
	std::string ticker;

	AbstractTickPriceHandler();

public:
	AbstractTickPriceHandler(std::string _ticker);
	AbstractTickPriceHandler(const AbstractTickPriceHandler& atph);

	virtual ~AbstractTickPriceHandler();

	AbstractTickPriceHandler& operator=(const AbstractTickPriceHandler& atph);

	std::string getTicker() const;
	virtual std::unique_ptr<TickEvent> getNextTick() = 0;

};

#endif
