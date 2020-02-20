#include "BlackJack.hpp"

BlackJack::BlackJack(DealerPlayer* dealer,MainPlayer* player,Deck* deck)
{
	this->dealer = dealer;
	this->player = player;
	this->deck = deck;
}

void BlackJack::playHand()
{
	deck->shuffle();
	Hand* playerHand = new Hand();
	Hand* dealerHand = new Hand();
	dealCard(deck, playerHand);
	dealCard(deck, playerHand);
	dealCard(deck, dealerHand);
	dealCard(deck, dealerHand);

	player->wantHit(playerHand, dealerHand);
	while (playerHand->getValue() < 21 && player->answer)
	{
		dealCard(deck, playerHand);
		//displayHands(dealerHand, playerHand);
		player->wantHit(playerHand, dealerHand);
	}

	dealer->wantHit(dealerHand, playerHand);
	while (dealerHand->getValue() < 21 && dealer->answer)
	{
		dealCard(deck, dealerHand);
		//displayHands(dealerHand, playerHand);
		dealer->wantHit(dealerHand, playerHand);
	}



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

void BlackJack::printWinner(Hand* Player, Hand* dealer)
{
}

void BlackJack::displayHands(Hand* dealer, Hand* play)
{
}
