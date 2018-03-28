//
// Created by Yogesh Seralia on 3/28/2018.
//

#include "Stack.h"
#include<bits/stdc++.h>

#define MAX 1000

using namespace std;


class StackImpl : protected Stack {
private:
    int top;
    int a[MAX];

public:
    int pop() override {
        if (top < 0) {
            std::cout << "Stack Underflow";
            return 0;
        } else {
            int x = a[top--];
            return x;
        }
    }

    bool push(int entry) override {
        if (top >= MAX) {
            std::cout << "Stack Overflow";
            return false;
        } else {
            a[++top] = entry;
            return true;
        }
    }

    bool isEmpty() override {
        return top <= 0;
    }

    void traverse() override {
        for (int i = top; i > 0; i--) {
            std::cout << "" << a[i] << endl;
        }
    }

    int size() override {
        return top;
    }
};