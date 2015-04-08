//3.8. Placing a Class in a Separate File for Reusability
#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

class Gradebook
{
public:
    Gradebook()
    :courseName( "NONE" )
    {
    }
    
    Gradebook( string name )
    {
        courseName = name;
    }

    void displayMessage()
    {
        cout << "Welcome to the Gradebook for " << getCourseName() << endl;
    }

//protected:    
    string getCourseName()
    {
        return courseName;
    }
    
private:
    string courseName;
};

