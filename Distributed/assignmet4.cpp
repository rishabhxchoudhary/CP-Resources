#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

mutex mtx; // Declare a mutex

void critical_section(int thread_id) {
    // Simulate the critical section
    mtx.lock(); // Lock the mutex to enter the critical section
    cout << "Thread " << thread_id << " is in the critical section." << endl;
    mtx.unlock(); // Unlock the mutex to exit the critical section
}

int main() {
    const int num_threads = 4;
    thread threads[num_threads];

    for (int i = 0; i < num_threads; ++i) {
        threads[i] = thread(critical_section, i);
    }

    for (int i = 0; i < num_threads; ++i) {
        threads[i].join();
    }

    return 0;
}
