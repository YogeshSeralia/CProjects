#include "stack/StackImpl.cpp"

void doStackImpl();

int main() {
    doStackImpl();
    return 0;
}

void doStackImpl() {
    Stack stackImpl = StackImpl();
    stackImpl.push(10);
    stackImpl.push(20);
    stackImpl.push(30);
    stackImpl.push(5);
    stackImpl.traverse();
}