#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Event structure with a timestamp
struct Event {
    int timestamp;
    string description;
};

// Function to compare events based on their timestamps
bool eventComparison(const Event& a, const Event& b) {
    return a.timestamp < b.timestamp;
}

int main() {
    vector<Event> events;

    // Simulate events with timestamps
    events.push_back({2, "Event A"});
    events.push_back({1, "Event B"});
    events.push_back({4, "Event C"});
    events.push_back({3, "Event D"});

    // Sort the events based on their timestamps
    sort(events.begin(), events.end(), eventComparison);

    // Print the events in chronological order
    cout << "Chronological Order of Events:" << endl;
    for (const Event& event : events) {
        cout << "Timestamp " << event.timestamp << ": " << event.description << endl;
    }

    return 0;
}
