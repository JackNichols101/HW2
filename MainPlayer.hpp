#pragma once
#include "Player.hpp"
class MainPlayer : public Player
{
	private:
	public: 
		bool wantHit(Hand* mainHand, Hand* dealerHand);
};

