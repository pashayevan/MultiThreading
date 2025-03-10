#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;
int number = 0;
void increment() {
    mtx.lock();
    for(int i=0; i!=1000000; i++)
        number++;
    mtx.unlock();
}
int main() {
    std::thread th1(increment);
    std::thread th2(increment);
    th1.join();
    th2.join();
    std::cout<<"Number after th1 and th2: "<<number<<"\n";
}