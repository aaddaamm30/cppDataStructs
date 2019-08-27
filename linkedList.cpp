//////////////////////////////////////////////////
//
//   File        : linkedList.cpp
//
//   Author      : Adam Loo
//   Created     : 12-08-2019
//   Last Edited : Mon Aug 26 17:05:46 2019
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


#define TITLE_INFO \
	"C++ Data Structures Practice -- Unemployed edition\n" \
	"Author: Adam Loo\n\n" \
#define INPUT_LIST \
    "Please enter desired manipulation from menu: \n" \
    "   1: Initialize new Linked List\n" \
    "   2: Display List\n" \
    "   3: Add variable number of links to end of list\n" \
    "   4: Add a single link to end of list\n" \
    "   5: Add variable number of links to beginning of list\n" \
    "   6: Add a single link to beginning of list\n" \
    "   7: Add Link at index x with value y\n" \
    "   8: Remove Link at index x\n" \
    "   9: Pop head\n" \
    "   10: Pop Tail\n\n" \

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
