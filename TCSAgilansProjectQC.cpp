#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Instruction {
    string turn;
    int dist;
};

pair<int, int> move(pair<int, int> pos, int dir, int dist) {
    if (dir == 0) pos.second += dist;
    else if (dir == 1) pos.first += dist;
    else if (dir == 2) pos.second -= dist;
    else pos.first -= dist;
    return pos;
}

int turnDir(int cur, const string& turn) {
    if (turn == "left") return (cur + 1) % 4;
    if (turn == "right") return (cur + 3) % 4;
    if (turn == "straight") return cur;
    if (turn == "back") return (cur + 2) % 4;
    return cur;
}

vector<string> allTurns = {"left", "right", "straight", "back"};

int main() {
    int N;
    cin >> N;
    vector<Instruction> instr(N);
    for (int i = 0; i < N; ++i) {
        cin >> instr[i].turn >> instr[i].dist;
    }
    int x0, y0, x1, y1;
    cin >> x0 >> y0 >> x1 >> y1;

    pair<int, int> start = {x0, y0};
    bool found = false;
    string wrongTurn, correctTurn;
    int wrongDist, correctDist;

    for (int i = 0; i < N; ++i) {
        for (const string& t : allTurns) {
            if (t == instr[i].turn) continue;
            int curDir = 0;
            pair<int, int> curPos = start;
            for (int j = 0; j < N; ++j) {
                string useTurn = (j == i) ? t : instr[j].turn;
                curDir = turnDir(curDir, useTurn);
                curPos = move(curPos, curDir, instr[j].dist);
            }
            if (curPos.first == x1 && curPos.second == y1) {
                found = true;
                wrongTurn = instr[i].turn;
                wrongDist = instr[i].dist;
                correctTurn = t;
                correctDist = instr[i].dist;
                break;
            }
        }
        if (found) break;
        for (int d = 1; d <= 1000; ++d) {
            if (d == instr[i].dist) continue;
            int curDir = 0;
            pair<int, int> curPos = start;
            for (int j = 0; j < N; ++j) {
                int useDist = (j == i) ? d : instr[j].dist;
                curDir = turnDir(curDir, instr[j].turn);
                curPos = move(curPos, curDir, useDist);
            }
            if (curPos.first == x1 && curPos.second == y1) {
                found = true;
                wrongTurn = instr[i].turn;
                wrongDist = instr[i].dist;
                correctTurn = instr[i].turn;
                correctDist = d;
                break;
            }
        }
        if (found) break;
    }

    if (found) {
        cout << "Yes\n";
        cout << wrongTurn << " " << wrongDist << "\n";
        cout << correctTurn << " " << correctDist << "\n";
    } else {
        cout << "No\n";
    }
    return 0;
}