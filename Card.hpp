#pragma once
#include <string>
class Card
{
	private:
		int num;
		int suit;
		std::string numString[14] = { "FN", "A","2","3","4","5","6","7","8","9","10","J","Q","K"};
		std::string suitString[5] = { "FS", "C","D","H","S" };
		
	public:
		//Card();
		Card(int num, int suit);
		int getDefaultValue();
		bool isAce();
		bool isFaceCard();
		std::string toString();


};

