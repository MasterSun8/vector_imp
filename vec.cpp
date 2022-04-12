#include <iostream>
#include "myVector.h"

int main(){
    myVector x(10);
    x.insert(9, 110);
    x.printVector();
}