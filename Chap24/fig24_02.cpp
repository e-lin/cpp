#include <iostream>
using namespace std;

int integer1 = 98;

//create namespace Example
namespace Example
{
    const double PI = 3.14159;
    const double E = 2.71828;
    int integer1 = 8;

    void printValues();

    //nested namespace
    namespace Inner
    {
        enum Years{ FISCAL1 = 1990, FISCAL2, FISCAL3 };
        void innerFunction();
    }
}

//create unnamed namespace
namespace
{
    double doubleInUnnamed = 88.22;
}

int main(int argc, char const *argv[])
{
    //output to unnamed namespace
    cout << "doubleInUnnamed" << doubleInUnnamed;

    //output to global variable
    cout << "\n(global) integer1 = " <<integer1;

    //ouput to Example namespace
    cout << "\nPI = " << Example::PI
    << "\nE = " << Example::E
    << "\ninteger1 = " << Example::integer1
    << "\nFISCAL3 = " << Example::Inner::FISCAL3 << endl;

    Example::printValues();
    Example::Inner::innerFunction();

    return 0;
}

void Example::printValues()
{
    cout << "\nIn printValues:\ninteger1 = " << integer1 << "\nPI = " << PI << "\nE = " << E
    << "\ndoubleInUnnamed = " << doubleInUnnamed
    << "\n(global) integer1 = " << ::integer1
    << "\nFISCAL3 = " << Inner::FISCAL3 <<endl;
}

void Example::Inner::innerFunction()
{
    cout << "Hi in innerFunction.\n";
    cout << "FISCAL3 = " << FISCAL3 <<endl;
}