#pragma once
#include"PlayerHand.hpp"
class DealerHand : public Hand
{
	private:
		bool dealerTurn = false;
	public:
		void setDealerTurn(bool dealerTurn);
		std::string toString();



};

