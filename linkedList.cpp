//////////////////////////////////////////////////
//
//   File        : linkedList.cpp
//
//   Author      : Adam Loo
//   Created     : 12-08-2019
//   Last Edited : Mon Aug 26 16:22:53 2019
//
//   Project     : Aiming to practice linked list
//                 data structurs and manipulation
//   Goal        : practice data structs
//   Description : singly/doubly/devinings structs
//
//////////////////////////////////////////////////

#include <iostream>
#include <cmath>
#include "linkedDef.h"


//prototypes
int makeListFromInput(linkedListStructs* lls);

int main(int argc, char **argv){

    linkedListStructs* printObj = new linkedListStructs();
    printObj->hello();

    makeListFromInput(printObj);
   
    return(0);
}


int makeListFromInput(linkedListStructs* lls) {

    int sizeOfList;
    int inputVal;

    lls->readNodes();
    
    std::cout << "how long is the list: ";
    std::cin >> sizeOfList;

    std::cout << "Int value for 1st node: ";
    std::cin >> inputVal;
    lls->setHead(inputVal);

    for(int i = 1; i < sizeOfList; i++) {
        std::cout << "Int value for " << i+1 << " node: ";
        std::cin >> inputVal;
        linkNode* newLink = new linkNode(NULL, NULL, inputVal);
        lls->pushBack(newLink);
    }

    lls->readNodes();
    
    return(0);
} 
