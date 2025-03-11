#include <iostream>
#include <mutex>
#include <thread>

std::mutex mtx;
/*void task() {
    std::lock_guard<std::mutex> lock(mtx);
    std::cout<<"Captured resource\n";
} */
void task1() {
    std::unique_lock<std::mutex> lock(mtx);
    std::cout<<"Captured resource\n";
    lock.unlock();
}
void task2() {
    std::unique_lock<std::mutex> lock(mtx, std::defer_lock);
}
