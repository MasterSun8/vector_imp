#include "MyVector.h"
#include <iostream>

MyVector::MyVector(unsigned int _size=0){
    size = _size;
    tablica = new int[size];
    for (int i = 0; i < size; i ++){
        tablica[i] = 0;
    }
}

int MyVector::vectorSize(){
    return size;
}

void MyVector::printVector(){
    for (int i = 0; i < size; i ++){
        std::cout << tablica[i] << "\n";
    }
}

void MyVector::pushBack(int x = 0){
    size++;
    std::cout << size << "\n";
    int *resized = new int[size];
    for (int i = 0; i < size-1; i++){
        resized[i] = tablica[i];
    }
    resized[size] = x;
    for (int i = 0; i < size; i ++){
        std::cout << resized[i] << "\n";
    }
    delete [] tablica;
    tablica = NULL;
    tablica = resized;
}