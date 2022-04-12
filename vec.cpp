#include <iostream>
#include "myVector.h"
#include <chrono>
#include <vector>

void myVec(){
    myVector x;
    for (int i = 0; i < 20000; i++){
        x.pushBack(0);
    }
}

void vec(){
    std::vector<int> v;
        for (int i = 0; i < 20000; i++){
        v.push_back(0);
    }
}

int main(){
    using std::chrono::high_resolution_clock;
    using std::chrono::duration_cast;
    using std::chrono::duration;
    using std::chrono::milliseconds;

    auto t1 = high_resolution_clock::now();
    vec();
    auto t2 = high_resolution_clock::now();

    duration<double, std::milli> ms_double = t2 - t1;

    std::cout << "vector execution: " << ms_double.count() << "ms\n";
    
    t1 = high_resolution_clock::now();
    vec();
    t2 = high_resolution_clock::now();

    ms_double = t2 - t1;

    std::cout << "my vector execution: " << ms_double.count() << "ms\n";
}