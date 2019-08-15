//////////////////////////////////////////////////
//
//   File        : linkedDef.cpp
//
//   Author      : Adam Loo
//   Created     : 14-08-2019
//   Last Edited : Thu Aug 15 14:11:17 2019
//
//   Project     : hello work unfort
//   Goal        : hello to the world
//   Description : something world
//
//////////////////////////////////////////////////


#include <iostream>
#include "linkedDef.h"

//constructor, creates single instance of node
//and saves as the head
linkedListStructs::linkedListStructs(void) {
    linkNode head = linkNode(NULL, NULL, -1);
    listHead = &head;
}

//method returns the head of the list
linkNode* linkedListStructs::getHead() {
    return listHead;
}

//simply reads and prints singly linked list
int linkedListStructs::readNodes() {
    linkNode* iter = listHead;
    int i = 0;
    while (iter != NULL) {
    
        std::cout << "Node # " << i << ":\n";
        std::cout << "intVal = " << iter->intVal << std::endl;
        std::cout << "floatVal = " << iter->floatVal << std::endl;
        std::cout << "charVal = " << iter->charVal << std::endl;
        std::cout << "next -> " << iter->next << std::endl;
        std::cout << "prev -> " << iter->prev << std::endl;
        iter = iter->next;
        i++;
    }

    std::cout << ">>>>>> End Of List || length = " << i << std::endl;
    return(0);
}

//pushFront function
int linedListStructs::pushFront(linkNode* toInsert) {
    linkNode* head = listHead;
    
    toInsert->next = head;
    head->prev = toInsert;
    listHead = toInsert;
    toInsert->prev = NULL;

    return(0);
}

//pushBack function that adds the given node to the end of the list
int linkedListStructs::pushBack(linkNode* toInsert) {
    linkNode* endNode = linkedListStructs::getTail();

    if (endNode->next != NULL)
        std::cout << "tail not found\n";

    endNode->next = toInsert;
    toInsert->prev = endNode;
    toInsert->next = NULL;

    return(0);
}

//pop head function
int linkedListStructs::popHead() {
    linkNode* head = listHead;
    linkNode* newHead;
    int value = head->intVal;

    if (head->next == NULL) {
        std::cout << "link is only 1 node long, node not removed" << std::endl;
        return head->intVal;
    }
    newHead = head->next;
    listHead = newHead;
    newHead->prev = NULL;
    free(head);
    return(value);
}

//popTailFunction
int linkedListStructs::popTail() {
    linkNode* tail = linkedListStructs::getTail();    
    int value = tail->intVal;

    if (tail->prev == NULL) {
        std::cout << "link is only 1 node long, node not removed" << std::endl;
        return(value);
    }
    tail->prev->next = NULL;
    free(tail);
    return(value);
}

//insert at function, fails if index is out of range
int linkedListStructs::insertAt(int index, linkNode* toInsert) {
    linkNode* iter = listHead;
    int i = 0;

    if(index < 0) {
        std::cout << "index is less than 0\n";
        return(1);
    }else if(index == 0) {
        toInsert->next = iter;
        toInsert->prev = NULL;
        iter->prev = toInsert;
        listHead = toInsert;
        return(0);
    }

    return(0);
}         
 
//Hello world method
void linkedListStructs::hello() {
    std::cout << "Hello World!" << std::endl;
}

//private method to get tail of list
linkNode* linkedListStructs::getTail(void) {
    linkNode* tracker = listHead;

    while(tracker->next != NULL) {
        tracker = tracker->next;
    }
    return tracker;
}
