#include "MainPlayer.hpp"
#include <iostream>

 bool MainPlayer::wantHit(Hand* mainHand, Hand* dealerHand)
{	
	char input;
	std::cout << "My Hand: " + mainHand->toString() + "\n"; // + "Dealer's Hand: " + dealerHand.toString();
	std::cout << "Would you like to hit?(Y/N)\n";
	std::cin >> input;
	if (input == 'y' || input == 'Y')
	{
		answer = true;
	}
	else
	{
		answer = false;
	}
	return answer;
}
