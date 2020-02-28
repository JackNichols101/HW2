#include "Hand.hpp"
#include <iostream>

Hand::Hand()
{
	numCards = 0;
	cards[20];
}

Hand::~Hand()
{
	delete []cards;
}

void Hand::addCard(Card* c)
{
	if (numCards == 20)
	{
		std::cout << "No room left in hand";
	}
	else
	{
		cards[numCards] = c;
		numCards++;
	}
}

int Hand::getValue()
{
	int value = 0;
	int temp = 0;
	for (int i = 0; i < numCards; i++)
	{
		if (cards[i]->isFaceCard())
		{
			temp = 10;
		}
		else if (cards[i]->isAce() && value <= 10)
		{
			temp = 11;
		}
		else
		{
			temp = cards[i]->getDefaultValue();
		}
		value += temp;
	}
	return value;
}

int Hand::getNumCards()
{
	return numCards;
}

Card* Hand::getCard(int i)
{
	return cards[i];
}

std::string Hand::toString()
{
	std::string s;
	for (int i = 0; i < numCards; i++)
	{
		s += cards[i]->toString() + " ";
	}
	return s + "(Value = " + std::to_string(getValue()) + ")\n";
}
