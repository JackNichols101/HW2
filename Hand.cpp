#include "Hand.hpp"
#include <iostream>

Hand::Hand()
{
	this->numCards = 0;
	this->cards[51];
}

Hand::~Hand()
{
}

void Hand::addCard(Card* c)
{
	if (numCards == 52)
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
	for (int i = 0; i < numCards; i++) {
		value += cards[i]->getDefaultValue();
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
	return s + "(Value = " + std::to_string(getValue()) + ")";
}
