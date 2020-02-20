#include "Card.hpp"

Card::Card()
{
}

Card::Card(int num, int suit)
{
	this->num = num;
	this->suit = suit;
}

int Card::getDefaultValue()
{
	return this->num;
}

bool Card::isAce()
{
	return (this->num == 1);
}

bool Card::isFaceCard()
{
	return (this->num = 11 || this->num == 12 || this->num ==13);
}

std::string Card::toString()
{
	return numString[this->num] + suitString[this->suit];
}
