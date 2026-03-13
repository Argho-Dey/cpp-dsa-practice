#include <iostream>

using namespace std;

int maxCFSlots(int schedule[][10], int rows, int cols) {
    int max_free_slots = 0, current_free_slots = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (schedule[i][j] == 0) {
                current_free_slots++;
                max_free_slots = max(max_free_slots, current_free_slots);
            } else {
                current_free_slots = 0;
            }
        }
    }

    return max_free_slots;
}

int main() {
    int schedule[3][10] = {
        {0, 1, 1, 0, 1, 0, 0, 0, 1, 0},
        {1, 1, 1, 0, 0, 0, 1, 1, 1, 1},
        {0, 0, 0, 0, 1, 1, 0, 0, 0, 0}
    };

    int rows = 3, cols = 10;

    for (int i = 0; i < rows; i++) {
        int max_free_slots = maxCFSlots(schedule, rows, cols);
        cout << "Room " << i + 1 << ": Maximum continuous free slots = " << max_free_slots << endl;
    }

    return 0;
}
