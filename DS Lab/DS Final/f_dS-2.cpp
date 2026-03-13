#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<string> ticketQueue;
    string command, name;

    while (true) {
        cout << "Enter command (Join, Serve, Display, Exit): ";
        cin >> command;

        if (command == "Join") {
            cout << "Enter name: ";
            cin >> name;
            ticketQueue.push(name);
        }
        else if (command == "Serve") {
            if (!ticketQueue.empty()) {
                cout << "Serving " << ticketQueue.front() << endl;
                ticketQueue.pop();
            } else {
                cout << "Queue is empty!" << endl;
            }
        }
        else if (command == "Display") {
            queue<string> tempQueue = ticketQueue;
            cout << "Current Queue: ";
            while (!tempQueue.empty()) {
                cout << tempQueue.front() << " ";
                tempQueue.pop();
            }
            cout << endl;
        }
        else if (command == "Exit") {
            break;
        }
        else {
            cout << "Invalid command!" << endl;
        }
    }
    return 0;
}
