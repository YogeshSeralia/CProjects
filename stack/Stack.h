//
// Created by Yogesh Seralia on 3/28/2018.
//

#ifndef CPROJECTS_STACK_H
#define CPROJECTS_STACK_H

class Stack {
protected:

    virtual int pop()= 0;

    virtual bool isEmpty()= 0;

    virtual int size()= 0;

public:
    virtual bool push(int entry)= 0;

    virtual void traverse()= 0;
};


#endif //CPROJECTS_STACK_H
