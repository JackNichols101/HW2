#pragma once
#include "Player.hpp"
class MainPlayer : public Player
{
	private:
	public: 
		void wantHit(Hand* mainHand, Hand* dealerHand);
};

