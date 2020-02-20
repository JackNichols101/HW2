#pragma once
#include "Card.hpp"
class Hand
{
	private:
		int numCards;
		Card* cards[52];

	public:
		Hand();
		~Hand();
		void addCard(Card c);
		int getValue();
		int getNumCards();
		Card getCard(int i);
		std::string toString();
};

