//
// Created by Gino Tateo on 3/28/22.
//

#ifndef BTP_BTP_H
#define BTP_BTP_H

#include <iostream>
using namespace std;
template< typename T = int>

class Tree {
public:
    void Add(const T &item);
    Tree();


private:
    struct Node {
        T item;

        struct Node *left;
        struct Node *right;

    };

    Node* root;
    int numNodes;


    void AddHelper(Node* curr, const T &item);

};


#endif //BTP_BTP_H
