#include<bits/stdc++.h>
using namespace std;
int calcWorth(const string& s) {
    int w = 0;
    for(char c : s) w += (c - 'a' + 1);
    return w;
}
int main() {
    int n, m, budget;
    cin >> n >> m;
    vector<string> words(n);
    vector<int> costs(n), worth(n);
    for(int i = 0; i < n; i++) cin >> words[i];
    for(int i = 0; i < n; i++) cin >> costs[i];
    for(int i = 0; i < n; i++) worth[i] = calcWorth(words[i]);
    unordered_map<string, int> wordIndex;
    for(int i = 0; i < n; i++) wordIndex[words[i]] = i;
    vector<vector<bool>> conflict(n, vector<bool>(n, false));
    for(int i = 0; i < m; i++) {
        string a, b;
        cin >> a >> b;
        int idxA = wordIndex[a], idxB = wordIndex[b];
        conflict[idxA][idxB] = true;
        conflict[idxB][idxA] = true;
    }
    cin >> budget;

    int half = n / 2;
    int n1 = half, n2 = n - half;
    vector<int> idx1(n1), idx2(n2);
    for(int i = 0; i < n1; i++) idx1[i] = i;
    for(int i = 0; i < n2; i++) idx2[i] = half + i;

    vector<int> contra1(n1, 0), contra2(n2, 0);
    for(int i = 0; i < n1; i++)
        for(int j = 0; j < n1; j++)
            if(conflict[idx1[i]][idx1[j]]) contra1[i] |= (1 << j);
    for(int i = 0; i < n2; i++)
        for(int j = 0; j < n2; j++)
            if(conflict[idx2[i]][idx2[j]]) contra2[i] |= (1 << j);

    vector<vector<bool>> cross(n1, vector<bool>(n2, false));
    for(int i = 0; i < n1; i++)
        for(int j = 0; j < n2; j++)
            if(conflict[idx1[i]][idx2[j]]) cross[i][j] = true;

    struct Subset {
        int cost, worth, mask;
    };
    vector<Subset> leftsubs;
    int lim1 = 1 << n1;
    for(int mask = 0; mask < lim1; mask++) {
        bool valid = true;
        for(int i = 0; i < n1 && valid; i++)
            if(mask & (1 << i))
                if(contra1[i] & mask) valid = false;
        if(!valid) continue;
        int c = 0, w = 0;
        for(int i = 0; i < n1; i++)
            if(mask & (1 << i)) {
                c += costs[idx1[i]];
                w += worth[idx1[i]];
            }
        if(c <= budget) leftsubs.push_back({c, w, mask});
    }
    map<int, pair<int,int>> best_left;
    for(auto &s : leftsubs) {
        if(best_left.count(s.cost) == 0 || best_left[s.cost].first < s.worth)
            best_left[s.cost] = {s.worth, s.mask};
    }
    vector<pair<int,int>> leftvec;
    for(auto &p : best_left) leftvec.push_back({p.first, p.second.second});
    sort(leftvec.begin(), leftvec.end());

    int max_worth = 0;
    int lim2 = 1 << n2;
    for(int mask = 0; mask < lim2; mask++) {
        bool valid = true;
        for(int i = 0; i < n2 && valid; i++)
            if(mask & (1 << i))
                if(contra2[i] & mask) valid = false;
        if(!valid) continue;
        int c = 0, w = 0;
        vector<int> sel;
        for(int i = 0; i < n2; i++)
            if(mask & (1 << i)) {
                c += costs[idx2[i]];
                w += worth[idx2[i]];
                sel.push_back(i);
            }
        if(c > budget) continue;
        int rem = budget - c;
        for(auto &p : best_left) {
            int lc = p.first;
            int lmask = p.second.second;
            if(lc > rem) continue;
            bool crossok = true;
            for(int i = 0; i < n1 && crossok; i++) {
                if(lmask & (1 << i)) {
                    for(int j : sel)
                        if(cross[i][j]) {
                            crossok = false;
                            break;
                        }
                }
            }
            if(crossok) max_worth = max(max_worth, p.second.first + w);
        }
    }
    cout << max_worth;
    return 0;
}