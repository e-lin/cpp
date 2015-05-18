//fig08_27.cpp
//Card shuffling and dealing program
#include <iostream>
using namespace std;

#include "DeckOfCards.h"

int main()
{
	DeckOfCards deckOfCards;
	
	deckOfCards.shuffle();
	deckOfCards.deal();
	
	cout<<"Hohey"<<endl;
	system("PAUSE");
	return 0;
}