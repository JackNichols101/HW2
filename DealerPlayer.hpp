#pragma once
#include "Player.hpp"
class DealerPlayer : public Player
{
	private:

	public: 
		DealerPlayer();
		void wantHit(Hand* mainHand, Hand* dealerHand);

};

