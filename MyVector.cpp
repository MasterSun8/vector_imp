#include "myVector.h"
#include <iostream>

myVector::myVector(unsigned int _size=0){
    size = _size;
    tablica = new int[size];
    for (int i = 0; i < size; i++){
        tablica[i] = i;
    }
}

int myVector::vectorSize(){
    return size;
}

void myVector::printVector(){
    std::cout << "\n[\n";
    for (int i = 0; i < size; i ++){
        std::cout << "\t" << tablica[i] << "\n";
    }
    std::cout << "]";
}

void myVector::pushBack(int x = 0){
    size++;
    int *resized = new int[size];
    for (int i = 0; i < size-1; i++){
        resized[i] = tablica[i];
    }
    resized[size-1] = x;
    delete [] tablica;
    tablica = resized;
}

void myVector::popBack(){
    size = size == 0 ? size : size-1;
    int *resized = new int[size];
    for (int i = 0; i < size; i++){
        resized[i] = tablica[i];
    }
    delete [] tablica;
    tablica = resized;
}

int myVector::at(int x){
    return tablica[x];
}

void myVector::remove(int x){
    if(size <= x){
        return;
    }
    size = size == 0 ? size : size-1;
    int *resized = new int[size];
    for (int i = 0; i < x; i++){
        resized[i] = tablica[i];
    }
    for (int i = x; i < size; i++){
        resized[i] = tablica[i+1];
    }
    delete [] tablica;
    tablica = resized;
}

void myVector::insert(int x, int y = 0){
    x = size <= x ? size : x;
    size++;
    int *resized = new int[size];
    for (int i = 0; i < x; i++){
        resized[i] = tablica[i];
    }
    resized[x] = y;
    for (int i = x+1; i < size; i++){
        resized[i] = tablica[i-1];
    }
    delete [] tablica;
    tablica = resized;
}