#include "Main.hpp"
#include "BlackJack.hpp"
#include "Deck.hpp"
#include "MainPlayer.hpp"
#include "DealerPlayer.hpp"
#include <iostream>

int main()
{
	Deck* deck = new Deck();
	DealerPlayer* dealer = new DealerPlayer();
	MainPlayer* player = new MainPlayer();
	BlackJack* game = new BlackJack(dealer, player, deck);
	//game->playHand();

	std::string input = "y";
	while(input == "y")
	{
		game->playHand();
		std::cout << "Would you like to play another game?(y/n)\n";
		std::cin >> input;
	}
	




}
