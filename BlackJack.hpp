#pragma once
#include "Deck.hpp"
#include "MainPlayer.hpp"
#include "DealerPlayer.hpp"
#include "DealerHand.hpp"
#include "PlayerHand.hpp"
class BlackJack
{
	private:
		Deck* deck = new Deck();
		DealerPlayer* dealer = new DealerPlayer();
		MainPlayer* player = new MainPlayer();
	public: 
		BlackJack(DealerPlayer* dealer, MainPlayer* player, Deck* deck);
		void playHand();
		void dealCard(Deck* deck, Hand* hand);
		void displayHands(DealerHand* dealer, PlayerHand* player);
		void printWinner(DealerHand* dealer, PlayerHand* player);
		
};

