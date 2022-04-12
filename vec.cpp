#include <iostream>
#include "myVector.h"

int main(){
    myVector x(10);
    x.pushBack(10);
    x.printVector();
    x.popBack();
    x.printVector();
    x.insert(3, 1000);
    x.printVector();
    x.remove(5);
    x.printVector();
}