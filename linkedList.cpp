//////////////////////////////////////////////////
//
//   File        : linkedList.cpp
//
//   Author      : Adam Loo
//   Created     : 12-08-2019
//   Last Edited : Thu Aug 15 16:51:26 2019
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
int makeListFromInput(linkedListStructs lls);

int main(int argc, char **argv){

    linkedListStructs printObj = new linkedListStructs();
    printObj.hello();


    //add several nodes
    
    return(0);
}


int makeListFromInput(linkedListStructs lls) {

    int sizeOfList;

    std::cout << "how long is the list: ";
    std::cin >> sizeOfList;

    for(int i = 1; i < sizeOfList; i++) {
        cin >> "link
