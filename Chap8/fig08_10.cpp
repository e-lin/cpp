#include <iostream>
using std::cout;
using std::endl;

#include <cctype>
using std::islower;
using std::toupper;

void convertToUpperCase( char * );

int main()
{
	char phrase[] = "Three apples cost $3.5";
	
	convertToUpperCase( phrase );

	cout<<phrase<<endl;

	system("PAUSE");
	return 0;
}


void convertToUpperCase( char *sPtr )
{
	while( *sPtr != '\0' )
	{	
		if( islower( *sPtr ) )
		{
			*sPtr = toupper( *sPtr );
		}
		
		sPtr++;
	}
}
