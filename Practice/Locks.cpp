#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

int counter = 0;
mutex mtx;

void task() {
    for (int i = 0; i < 100000; ++i) {
        lock_guard<mutex> lock(mtx);
        ++counter;
    }
}

int main() {
    thread t1(task);
    thread t2(task);

    t1.join();
    t2.join();

    cout << "Final counter: " << counter << endl;
    return 0;
}
