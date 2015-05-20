//fig08_29.cpp
//Demostrating an array of pointers to functions.

#include <iostream>
using std::cout;
using std::cin;
using std::string;

//function prototypes - each funtion performs similar actions
void functionA ( const char * );
void functionB ( const char * );
void functionC ( const char * );

int main()
{
	//initilize array of pointers to functions
	void (*f[3])( const char* ) = { functionA, functionB, functionC };
	
	string str;
	
	cout << "Enter a, b, or c to invoke function, and x to end: ";
	cin >> str;
	
	const char* tmp = str.c_str();
	
	//process user's choice, ASCII a,b,c = 97,98,99
	while( ( 97 <= tmp[0] ) && ( 99 >= tmp[0] ) && ( 'x' != tmp[0] ) )
	{
		//invoke funtion
		(*f[ ( tmp[0] - 97 ) ])( tmp );
		
		cout << "Enter a, b, or c to invoke function, and x to end: ";
		cin >> str;
	}
	
	cout<< "Program execution completed.\n";
	system( "PAUSE" );
	return 0;
}

void functionA ( const char *a )
{
	cout << "\nYou entered " << *a << " so functionA was called.\n\n";
}

void functionB ( const char *b )
{
	cout << "\nYou entered " << *b << " so functionB was called.\n\n";
}

void functionC ( const char *c )
{
	cout << "\nYou entered " << *c << " so functionC was called.\n\n";
}