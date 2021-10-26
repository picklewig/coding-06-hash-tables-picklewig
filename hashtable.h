/**************
 * author: Isaac Shepherd
 * file: hashtable.h
 **************/

#ifndef HASHTABLE_H
#define HASHTABLE_H

#include "string"
#include <iostream>
#include "linkedlist.h"
#include "data.h"

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

};

#endif