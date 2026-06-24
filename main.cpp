#include <iostream>
#include <thread>
#include <chrono>
#include "mThread/mThread.h"

using namespace std;

void threadFunction(int i) {
    printf("Hello %d", i);
}

void threadF(int threadIndex) {
    for (int i =0; i<1000; i++) {
        printf("Thread: %d, index: %d\n",threadIndex, i);
    }
}

class myThread : public mThread {
    private: 
    int a =0;

    public: 
     myThread(int _a) {
        a =_a;
    }
    virtual void run() {
        printf("MYThread %d\n", a);
    }
};

int main() {
    myThread t(10);
    t.Start();
    this_thread::sleep_for(chrono::seconds(2));
    printf("hello, world");
    return 0;
}
/* int main(){

    thread t(threadF,1);
    thread t1(threadF,2);
    // t.detach();
    t.join();
    t1.join();
    // t.joinable(); check if detach work properly or not

    return 0;
} */


