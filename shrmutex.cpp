/*
#include <iostream>
#include <thread>
#include <mutex>
#include <shared_mutex>
#include <chrono>

std::shared_mutex mtx;
int shared_data = 11;
void readData() {
    std::shared_lock<std::shared_mutex> lock(mtx);
    std::cout<<"Thread "<<std::this_thread::get_id()<<": "<<shared_data<<"entered mutex\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    std::cout<<"Thread "<<std::this_thread::get_id()<<"exited mutex\n";
}
void writeData(int n) {
    std::unique_lock<std::shared_mutex> lock(mtx);
    shared_data = n;
    std::cout<<"Thread "<<std::this_thread::get_id()<<". \n";
}

int main() {
    std::thread th1(readData);
    std::thread th2(writeData, 42);
    std::thread th3(writeData, 100);
    std::thread th4(readData);

    th1.join();
    th2.join();
    th3.join();
    th4.join();
    return 0;
}
*/