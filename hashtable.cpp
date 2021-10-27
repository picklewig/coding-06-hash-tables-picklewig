/**************
 * author: Isaac Shepherd
 * file: hashtable.cpp
 **************/

#include "hashtable.h"

int Hashtable::hash(int id){ //hash ids to find which location in array to add to
    return id % HASHTABLESIZE;
}
Hashtable::Hashtable(){
    count = 0;
}

Hashtable::~Hashtable(){
    for(int row{0}; row < HASHTABLESIZE; row++){
        table[row]->clearList();
    }
}

int Hashtable::getCount(){
    return count;
}

string Hashtable::getData(int id){

}

bool Hashtable::insertEntry(int id, string* information){
    bool inserted = false;
    int row = hash(id); //derives row to set value in
    if(table[row]->addNode(id, information)){
        count++;
        inserted = true;
    }
    return inserted;
}

void Hashtable::printTable(){

}

bool Hashtable::removeEntry(int id){

}