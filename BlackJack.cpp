#include "BlackJack.hpp"
#include <iostream>

BlackJack::BlackJack(DealerPlayer* dealer,MainPlayer* player,Deck* deck)
{
	this->dealer = dealer;
	this->player = player;
	this->deck = deck;
}

void BlackJack::playHand()
{
	deck->shuffle();
	PlayerHand* playerHand = new PlayerHand();
	DealerHand* dealerHand = new DealerHand();
	dealCard(deck, playerHand);
	dealCard(deck, playerHand);
	dealCard(deck, dealerHand);
	dealCard(deck, dealerHand);
	if(playerHand->getValue() == 21 && !(dealerHand->getValue() == 21))
	{
		playerHand->setBlackJack();
	}

	//displayHands(dealerHand, playerHand);
	while (playerHand->getValue() < 21 && player->wantHit(playerHand, dealerHand))
	{
		//std::cout << "-->" + std::to_string(playerHand->getValue());
		dealCard(deck, playerHand);
		displayHands(dealerHand, playerHand);
	}
	//std::cout << "-->" + std::to_string(playerHand->getValue());

	//dealer->setAnswer();
	//dealerHand->setDealerTurn(true);
	while (dealerHand->getValue() < 21 && dealer->wantHit(dealerHand, playerHand))
	{
		dealCard(deck, dealerHand);
		displayHands(dealerHand, playerHand);
	}
	printWinner(dealerHand, playerHand);
}

void BlackJack::dealCard(Deck* deck, Hand* hand)
{
	if (deck->isEmpty())
	{
		deck->reset();
		deck->shuffle();
	}
	hand->addCard(deck->dealCard());
}

void BlackJack::printWinner(DealerHand* dealer, PlayerHand* player)
{
	int playerScore = player->getValue();
	int dealerScore = dealer->getValue();
	if (player->getBlackJack())
	{
	std::cout << "BlackJack! You Win!";
	}
	else if (playerScore > 21 || (playerScore < 21 && (dealerScore > playerScore && dealerScore <= 21)))
	{
		std::cout << "House Wins!";
	}
	else if (playerScore == dealerScore || (dealerScore > 21 && playerScore > 21))
	{
		std::cout << "Tie!";
	}
	else if (playerScore == 21 || (playerScore < 21 && (dealerScore < playerScore || dealerScore > 21)))
	{
		std::cout << "You Win!";
	}
	else
	{
		std::cout << "code is wrong";
	}
	
}

void BlackJack::displayHands(DealerHand* dealer, PlayerHand* player)
{
	std::cout << "Your Hand: " + player->toString();
	std::cout << "Dealer's Hand: " + dealer->toString();
}
