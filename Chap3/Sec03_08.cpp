//Section 3.8. Including class GradeBook from file GradeBook.h for use in main.
#include <iostream>
using namespace::std;

#include "Gradebook.h"

int main()
{
    Gradebook myGradebook;
    myGradebook.displayMessage();
    
    Gradebook mathGradebook("MATH");
    mathGradebook.displayMessage();
    
    system("pause");
    return 0;
}                  
