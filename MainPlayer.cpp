#include "MainPlayer.hpp"
#include <iostream>

void MainPlayer::wantHit(Hand* mainHand, Hand* dealerHand)
{	
	char input;
	std::cout << "My Hand: " + mainHand->toString(); // + "Dealer's Hand: " + dealerHand.toString();
	std::cout << "Would you like to hit?(Y/N)";
	std::cin >> input;
	if (input == 'y' || input == 'Y')
	{
		answer = true;
	}
	else
	{
		answer = false;
	}
}
