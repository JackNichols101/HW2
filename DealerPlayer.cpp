#include "DealerPlayer.hpp"

DealerPlayer::DealerPlayer()
{
}

void DealerPlayer::wantHit(Hand mainHand, Hand dealerHand)
{
	if (dealerHand.getValue() <= 17)
	{
		answer = true;
	}
	else if ((mainHand.getValue() == 21) && (dealerHand.getValue() < mainHand.getValue()))
	{
		answer = true;
	}
	else if ((mainHand.getValue() < 21) && (dealerHand.getValue() <= mainHand.getValue()))
	{
		answer = true;
	}
	else
	{
		answer = false;
	}
}

