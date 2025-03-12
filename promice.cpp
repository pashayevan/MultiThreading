#include <chrono>
#include <future>
#include <iostream>

void foo(std::promise<int> p) {
    p.set_value(25);
}
int main() {
    std::promise<int> p;
    std::future<int> f = p.get_future();
    std::thread t(foo, std::move(p));
    t.join();
    std::cout<<f.get();
    return 0;
}