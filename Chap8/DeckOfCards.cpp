// DeckOfCards.cpp
#include <iostream>
using std::cout;
using std::left;
using std::right;

#include <iomanip>
using std::setw;

#include <cstdlib>
using std::rand;
using std::srand;

#include <ctime>
using std::time;

#include "DeckOfCards.h"

DeckOfCards::DeckOfCards()
{
	for ( int row = 0; row <= 3; row++ )
	{
		for ( int column = 0; column <= 12; column++ )
		{
			deck[row][column] = 0; //initialize slot of deck to 0
		}
	}
	
	//seed random number generator
	srand( time(0) );
}

//shuffle cards in deck
void DeckOfCards::shuffle()
{
	
}

void DeckOfCards::deal()
{
	
}
