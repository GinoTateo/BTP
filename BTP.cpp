//
// Created by Gino Tateo on 3/28/22.
//


#include "BTP.h"

// Constructor
template< typename T>
Tree<T>::Tree(){
    root = new Node();
        root->right = nullptr;
        root->left = nullptr;
        root->item = NULL;
        numNodes = 0;
}

template< typename T>
void Tree<T>::Add(const T &item) {
    AddHelper(root, item);
}

template< typename T>
void Tree<T>::AddHelper(Node *curr, const T &item) {
    if (curr!=NULL){
        if(item<curr->item){
            AddHelper(curr->left,item);
        }
        if(item>curr->item){
            AddHelper(curr->right,item);
        }
    }else{
        curr = new Node(item);

    }
}


