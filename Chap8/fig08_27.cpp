//fig08_27.cpp
//Card shuffling and dealing program
#include <iostream>
using namespace std;

#include "DeckOfCards.h"

int main()
{
	DeckOfCards deckOfCards;
	
	cout<<"===== Card Shuffle Start ====="<<endl;
	
	deckOfCards.shuffle();
	deckOfCards.deal();
	
	system("PAUSE");
	return 0;
}