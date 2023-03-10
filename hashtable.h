/**************
 * author: Isaac Shepherd
 * file: hashtable.h
 * holds class prototype and constants used in hastable.cpp. includes linklist.h to access LinkedList class
 * and call its methods to preform functions for hashtable
 **************/

#ifndef HASHTABLE_H
#define HASHTABLE_H

#include "string"
#include <iostream>
#include "linkedlist.h"
#include "data.h"

#define HASHTABLESIZE 15

using std::cout;
using std::endl;
using std::string;

class Hashtable{
    public:
        Hashtable();
        ~Hashtable();

        bool insertEntry(int, string*);
        string getData(int);
        bool removeEntry(int);
        int getCount();
        void printTable();
    private:
        int hash(int);
        int count;
        LinkedList *table[HASHTABLESIZE];
};

#endif