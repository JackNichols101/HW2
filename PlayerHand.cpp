#include "PlayerHand.hpp"

void PlayerHand::setBlackJack()
{
	BlackJack = true;
}

bool PlayerHand::getBlackJack()
{
	return BlackJack;
}

int PlayerHand::getValue()
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
