#pragma once
#include "Hand.hpp"
class PlayerHand : public Hand
{
	private:
		bool BlackJack;
	public:
		void setBlackJack();
		bool getBlackJack();
		int getValue();


};

