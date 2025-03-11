#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

std::timed_mutex tmux;
void task(int id) {
    std::cout<<"Thread"<<id<<"tries to acquire lock\n";
    std::unique_lock<std::timed_mutex> lock(tmux, std::defer_lock);
    if(lock.try_lock_for(std::chrono::seconds(2))) {
        std::cout<<"Thread "<<id<<" acquired lock\n";
        std::this_thread::sleep_for(std::chrono::seconds(3));
        std::cout<<"Thread "<<id<<" releases lock\n";
    } else {
        std::cout<<"Thread "<<id<<" filed to acquire lock\n";
    }
}
int main() {
    std::thread th1(task,1);
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::thread th2(task,2);

    th1.join();
    th2.join();
}