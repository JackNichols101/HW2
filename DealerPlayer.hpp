#pragma once
#include "Player.hpp"
class DealerPlayer : public Player
{
	private:

	public: 
		bool wantHit(Hand* mainHand, Hand* dealerHand);

};

