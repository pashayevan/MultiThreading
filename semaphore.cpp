/*
#include <iostream>
#include <semaphore>
#include <thread>

std::counting_semaphore<10> semaphore(3);
void worker(int id) {
    semaphore.acquire();
    std::cout<<"Thread "<<id<<" acquired semaphore\n";
    semaphore.release();
    std::cout<<"Thread "<<id<<" releases semaphore\n";
}
int main() {
    std::thread th1(worker,1);
    std::thread th2(worker,2);
    std::thread th3(worker,3);
    th1.join();
    th2.join();
    th3.join();
}
*/