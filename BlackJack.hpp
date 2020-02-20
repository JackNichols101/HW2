#pragma once
#include "Deck.hpp"
#include "MainPlayer.hpp"
#include "DealerPlayer.hpp"
class BlackJack
{
	private:
		Deck* deck = new Deck();
		DealerPlayer* dealer = new DealerPlayer();
		MainPlayer* player = new MainPlayer();
	public: 
		BlackJack(DealerPlayer* dealer, MainPlayer* player, Deck* deck);
		void playHand();
};

