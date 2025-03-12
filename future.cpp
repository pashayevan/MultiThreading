/*
#include <chrono>
#include <future>
#include <iostream>

int returnTwo() {
    return 2;
}
int main() {
    std::future<int> f=std::async(std::launch::async, returnTwo);
    if(f.valid()) {
        std::cout<<f.get()<<"\n";
    } else {
        std::cout<<"Invalid state\n";
    }
    if(f.valid()) {
        std::cout<<f.get()<<"\n";
    } else {
        std::cout<<"Invalid state\n";
    }
    return 0;
}
*/