#include "DealerHand.hpp"


void DealerHand::setDealerTurn(bool dealerTurn)
{
	this->dealerTurn = dealerTurn;
}

std::string DealerHand::toString()
{
	std::string s;
	for (int i = 0; i < getNumCards(); i++)
	{
		if (dealerTurn ==  false && i == 0)
		{
			s = "XX ";//hides one of dealers cards
		}
		else
		{
			s += cards[i]->toString() + " ";
		}
		
	}
	if (dealerTurn == false)
	{
		return s + "(Value = " + std::to_string(getValue()) + ")\n";//hides value of hand
	}
	else
	{
		return s + "(Value = " + std::to_string(getValue()) + ")\n";
	}

	
}
