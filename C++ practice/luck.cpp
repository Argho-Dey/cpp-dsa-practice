#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

struct Player {
    string team;
    int score;
};

int main() {
    unordered_map<string, Player> players;


    string team1, team2;
    cin >> team1;
    for (int i = 0; i < 5; ++i) {
        string name;
        cin >> name;
        players[name] = {team1, 0};
    }

    cin >> team2;
    for (int i = 0; i < 5; ++i) {
        string name;
        cin >> name;
        players[name] = {team2, 0};
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; ++i) {
        string event, team, playerIn, playerOut;
        int score;
        cin >> event;
        if (event == "Team") {
            cin >> team >> score;
            for (auto& p : players) {
                if (p.second.team == team) {
                    p.second.score += score;
                } else {
                    p.second.score -= score;
                }
            }
        } else {
            cin >> team >> playerIn >> playerOut;
            players[playerIn].team = team;
            players[playerOut].team = "";
        }
    }


    for (auto& p : players) {
        if (!p.second.team.empty()) {
            cout << p.first << " (" << p.second.team << ") ";
            if (p.second.score > 0) {
                cout << "+" << p.second.score << endl;
            } else {
                cout << p.second.score << endl;
            }
        }
    }

    return 0;
}

