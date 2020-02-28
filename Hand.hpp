#pragma once
#include "Card.hpp"
class Hand
{
	protected:
		int numCards;
		Card* cards[20];

	public:
		Hand();
		~Hand();
		void addCard(Card* c);
		int getValue();
		int getNumCards();
		Card* getCard(int i);
		std::string toString();
};

