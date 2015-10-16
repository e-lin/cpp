#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str = "Craft beer is the best!";
    cout << "string: " << str << endl;

    std::reverse(str.begin(), str.end());

    cout << "reverse string: " << str << endl;

    system("PAUSE");
    return 0;
}
