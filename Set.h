#ifndef __SET_H__
#define __SET_H__

#include "Node.h"
#include <iostream>
#include <string>

using namespace std;

class Set {
 private:
    Node *myHeadNode;

 public:
    Set();
    bool add(string newEntry);
    bool remove(string entry);
    void clear();
    bool contains(string entry);
    int getSize();
    bool isEmpty();
    bool isFull();
    void display();

};

#endif
