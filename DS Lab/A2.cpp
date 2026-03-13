#include <iostream>

using namespace std;

int main() {
    const int WINDOW_SIZE = 10;
    const int NUM_SAMPLES = 60; // Assuming 60 minutes of data

    int bandwidth[NUM_SAMPLES];

    // Assuming bandwidth data is already populated in the array

    int max_sum = 0;
    int max_start = 0;

    int current_sum = 0;
    for (int i = 0; i < WINDOW_SIZE; i++) {
        current_sum += bandwidth[i];
    }

    max_sum = current_sum;

    for (int i = WINDOW_SIZE; i < NUM_SAMPLES; i++) {
        current_sum -= bandwidth[i - WINDOW_SIZE];
        current_sum += bandwidth[i];

        if (current_sum > max_sum) {
            max_sum = current_sum;
            max_start = i - WINDOW_SIZE + 1;
        }
    }

    cout << "Time window with highest bandwidth usage:\n";
    cout << "Start time: " << max_start << "\n";
    cout << "End time: " << max_start + WINDOW_SIZE - 1 << "\n";
    cout << "Total bandwidth usage: " << max_sum << endl;

    return 0;
}
