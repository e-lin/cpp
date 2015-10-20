#include <iostream>
using std::cout;
using std::cin;

#include "Tree.h"

int main(int argc, char const *argv[])
{
    Tree< int > intTree;
    int intValue;

    cout << "Enter 10 integer values:\n";

    for( int i = 0; i < 10; i++ )
    {
        cin >> intValue;
        intTree.insertNode( intValue );
    }

    cout << "\npreOrderTraversal()\n";
    intTree.preOrderTraversal();

    cout << "\ninOrderTraversal()\n";
    intTree.inOrderTraversal();

    cout << "\npostOrderTraversal()\n";
    intTree.postOrderTraversal();

    return 0;
}