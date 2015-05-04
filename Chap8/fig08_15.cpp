//Chap8.6 Selection sort with pass-by-reference.

#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

void selectionSort( int * const, const int );
void swap( int * const, int * const );

int main()
{
    const int arraySize = 10;
    int a[arraySize] = { 2, 4, 6, 8, 10, 12, 89, 68, 45, 37 };

    cout << "Data items in original order\n";

    for( int i = 0; i < arraySize; i++ )
    {
        cout << setw(4) << a[i];
    }

    selectionSort( a, arraySize );

    cout << "\nData items in ascending order\n";

    for( int j = 0; j < arraySize; j++ )
    {
        cout << setw(4) << a[j];
    }

    cout << endl;

    system("PAUSE");
    return 0;
}

void selectionSort( int * const array, const int size )
{
    int smallestIdx; //index of smallest element

    //loop over size - 1 elements
    for( int i = 0; i < size - 1; i++ )
    {
        smallestIdx = i;

        //loop over size elements
        for( int j = i + 1; j < size; j++ )
        {
            if( array[j] < array[smallestIdx] )
            {
                smallestIdx = j;
            }

            swap( &array[i], &array[smallestIdx] );
        }
    }
}

//swap values at memory locations to which xPtr and yPtr point.
void swap( int * const xPtr, int * const yPtr )
{
    int tmpPtr;
    tmpPtr = *xPtr;
    *xPtr = *yPtr;
    *yPtr = tmpPtr;
}
