#include <iostream>
#include <vector>
#include <thread>
#include <atomic>
#include <chrono>

using namespace std;

const int NUM_PROCESSES = 5;
atomic<int> completedProcesses(0);

// Simulate a process
void process(int id) {
    // Simulate some work
    this_thread::sleep_for(chrono::milliseconds(1000));

    // Signal that this process has completed
    completedProcesses.fetch_add(1, memory_order_relaxed);
}

int main() {
    vector<thread> processes;

    // Create and start the processes
    for (int i = 0; i < NUM_PROCESSES; ++i) {
        processes.push_back(thread(process, i));
    }

    // Wait for all processes to complete
    for (thread& t : processes) {
        t.join();
    }

    // Termination detection
    while (completedProcesses.load(memory_order_relaxed) < NUM_PROCESSES) {
        this_thread::sleep_for(chrono::milliseconds(500));
        cout << "Waiting for processes to complete..." << endl;
    }

    cout << "All processes have completed." << endl;

    return 0;
}
