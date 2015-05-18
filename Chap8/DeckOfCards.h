class DeckOfCards
{
public:
	DeckOfCards();
	void shuffle(); //shuffle cards in deck
	void deal();
private:
	int deck[4][13]; //represents deck of cards
};