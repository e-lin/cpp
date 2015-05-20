//fig08_28.cpp
//Use function poiters for multipurpose sorting program
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setw;

enum Order
{
	ascendingOrder = 1,
	descendingOrder
};

//Prototype
void selectionSort( int [], const int, bool(*)( int, int ) );
void swap( int * const, int * const );
bool ascending( int, int ); //implements ascending order
bool descending( int, int ); //implements descending order

int main()
{
	const int arraySize = 10;
	int sortOrder;
	int a[arraySize] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
	
	cout << "Enter 1 to sort in ascending order, \n"
		<< "Enter 2 to sort in descending order:";
	cin >> sortOrder;
	cout << "\nData items in original order\n";
	
	for ( int i = 0; i < arraySize; i++ )
	{
		cout << setw(4) << a[i];
	}
	
	switch( sortOrder )
	{
		case ascendingOrder:
		selectionSort( a, arraySize, ascending );
		cout << "\nData items in ascending Order\n";
		break;
		
		case descendingOrder:
		selectionSort( a, arraySize, descending );
		cout << "\nData items in descending Order\n";
		break;
	}
	
	for ( int i = 0; i < arraySize; i++ )
	{
		cout << setw(4) << a[i];
	}
	
	cout << endl << endl;
	
	system("PAUSE");
	return 0;
}

void selectionSort( int work[], const int size, bool(*compare)( int, int ) )
{
	int smallestOrLargest; //index of smallest (or largest) element
	
	//loop over size -1 element
	for ( int i = 0; i < size - 1; i++ )
	{
		smallestOrLargest = i;
		
		//loop to find index of smallest (or largest) element
		for ( int index = i + 1; index < size; index++ )
		{
			if( !(*compare)( work[smallestOrLargest], work[index] ) )
			{
					smallestOrLargest = index;
			}
		}
		
		swap( &work[smallestOrLargest], &work[i] );
	}
	
}

void swap( int * const a, int * const b )
{
	int hold = *a;
	*a = *b;
	*b = hold;
}

bool ascending( int a, int b )
{
	return a < b;
}

bool descending( int a, int b )
{
	return a > b;
}

