#ifndef TREE_H
#define TREE_H

#include <iostream>
using std::cout;
using std::endl;

#include "Treenode.h"

template< typename NODETYPE > class Tree
{
public:
    Tree();
    ~Tree();
    void insertNode( const NODETYPE & );
    void preOrderTraversal() const;
    void inOrderTraversal() const;
    void postOrderTraversal() const;
private:
    TreeNode< NODETYPE > *rootPrt;

    //utility functions
    void insertNodeHelper( TreeNode< NODETYPE > **, const NODETYPE & );
    void preOrderHelper( TreeNode< NODETYPE > * ) const;
    void inOrderHelper( TreeNode< NODETYPE > * ) const;
    void postOrderHelper( TreeNode< NODETYPE > * ) const;
};

template< typename NODETYPE >
Tree< NODETYPE >::Tree()
:rootPrt( 0 )
{

}

template < typename NODETYPE >
Tree< NODETYPE >::~Tree()
{
    delete rootPrt;
}

template <typename NODETYPE>
void Tree< NODETYPE >::insertNode( const NODETYPE &value )
{
    insertNodeHelper( &rootPrt, value );
}

template <typename NODETYPE>
void Tree<NODETYPE>::insertNodeHelper( TreeNode<NODETYPE> **ptr, const NODETYPE &value )
{
    //subtree is empty, create new TreeNode containing value
    if( 0 == *ptr )
    {
        *ptr = new TreeNode<NODETYPE>(value);
    }else{
        //subtree is not empty
        if( value < (*ptr)->data )
        {
            insertNodeHelper( &((*ptr)->leftPtr), value );
        }else{
            if( value > (*ptr)->data )
            {
                insertNodeHelper( &((*ptr)->rightPtr), value );
            }else{
                //ingnore duplicate
                cout << value << "dup" <<endl;
            }
        }
    }
}

template <typename NODETYPE>
void Tree<NODETYPE>::preOrderTraversal() const
{
    preOrderHelper( rootPrt );
}

template <typename NODETYPE>
void Tree<NODETYPE>::preOrderHelper( TreeNode<NODETYPE> *ptr ) const
{
    if( 0 != ptr )
    {
        cout << ptr->data << " ";
        preOrderHelper( ptr->leftPtr );
        preOrderHelper( ptr->rightPtr );
    }

}

template <typename NODETYPE>
void Tree<NODETYPE>::inOrderTraversal() const
{
    inOrderHelper( rootPrt );
}

template <typename NODETYPE>
void Tree<NODETYPE>::inOrderHelper( TreeNode<NODETYPE> *ptr ) const
{
    if( 0 != ptr )
    {
        inOrderHelper( ptr->leftPtr );
        cout << ptr->data << " ";
        inOrderHelper( ptr->rightPtr );
    }
}

template <typename NODETYPE>
void Tree<NODETYPE>::postOrderTraversal() const
{
    postOrderHelper( rootPrt );
}

template <typename NODETYPE>
void Tree<NODETYPE>::postOrderHelper( TreeNode<NODETYPE> *ptr ) const
{
    if( 0 != ptr )
    {
        postOrderHelper( ptr->leftPtr );
        postOrderHelper( ptr->rightPtr );
        cout << (*ptr).data << " ";
    }
}
#endif