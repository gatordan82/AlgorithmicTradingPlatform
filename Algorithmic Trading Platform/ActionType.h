#ifndef _ACTIONTYPE_H
#define _ACTIONTYPE_H

#include <string>

enum class ActionType : short
{
	SELL = -1,
	BUY = 1
};

std::string actionTypeToString(ActionType at)
{
	switch (at)
	{
	case ActionType::BUY:
		return "BUY";
		break;
	case ActionType::SELL:
		return "SELL";
		break;
	}
}

#endif // !_ACTIONTYPE_H
