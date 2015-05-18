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
	int row, column;
	
	for ( int card = 1; card <= 52; card++ )
	{
		do //choose a new random location until unoccupied slot is found
		{
			row = rand() % 4;
			column = rand() % 13;
			
		} while( 0 != deck[row][column] );
			
			deck[row][column] = card;
	}
}

//deal cards in deck
void DeckOfCards::deal()
{
	//initialize suit array
	const char *suit[ 4 ] = { "Hearts", "Diamonds", "Clubs", "Spades" };
	
	//initialize face array
	const char *face[ 13 ] = { "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };
	
	//for each of the 52 cards
	for ( int card = 1; card <=52; card++ )
	{
		for ( int row = 0; row <= 3; row++ )
		{
			for ( int column = 0; column <= 12; column++ )
			{
				if ( card == deck[row][column] )
				{
					cout << setw(5) << right << face[column]
						<< " of " << setw(8) << left << suit[row]
							<< ( 0 == card % 2 ? '\n' : '\t' );
				}
			}
		}
	}
}