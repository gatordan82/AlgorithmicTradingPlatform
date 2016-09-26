#ifndef _ABSTRACTBARPRICEHANDLER_H
#define _ABSTRACTBARPRICEHANDLER_H

#include <string>
#include "boost\date_time\posix_time\posix_time.hpp"
#include <memory>
#include "BarEvent.h"

class AbstractBarPriceHandler
{
private:
	std::string ticker;

	AbstractBarPriceHandler();

public:
	AbstractBarPriceHandler(std::string _ticker);
	AbstractBarPriceHandler(const AbstractBarPriceHandler& abph);

	virtual ~AbstractBarPriceHandler();

	AbstractBarPriceHandler& operator=(const AbstractBarPriceHandler& abph);

	std::string getTicker() const;
	virtual std::unique_ptr<BarEvent> getNextBar() = 0;
};

#endif
