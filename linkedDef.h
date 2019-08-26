//////////////////////////////////////////////////
//
//   File        : linkedDef.h
//
//   Author      : Adam Loo
//   Created     : 12-08-2019
//   Last Edited : Mon Aug 26 16:21:52 2019
//
//   Project     : header file for linked list
//   Goal        : make things comppiles
//   Description :
//
//////////////////////////////////////////////////

#ifndef _LINKED_LIST_DEFINITION_
#define _LINKED_LIST_DEFINITION_

//linkedList node object
struct linkNode {
    int intVal;
    linkNode* next;
    linkNode* prev;
    
    linkNode(linkNode* next, linkNode* prev, int intVal) : intVal(intVal), next(next), prev(prev) {};

};

//make whole class public
class linkedListStructs {

public:

    //public constructor
    linkedListStructs(void);

    //access methods    
    linkNode* getHead(void);
    int readNodes(void);
    int pushFront(linkNode*);
    int pushBack(linkNode*);
    int popHead(void);
    int popTail(void); 
    int insertAt(int, linkNode*);
    int removeAt(int);
    int setHead(int);
    void hello(void);

protected:

private:
    linkNode* listHead;
    linkNode* getTail(void);
};

#endif
