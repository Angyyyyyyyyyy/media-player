#include "mThread.h"
#include <thread>

using namespace std;

int mThread::Start() {
    
    thread t(&mThread::run, this);
    t.detach();



    return 0;
}