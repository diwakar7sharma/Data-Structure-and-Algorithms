#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int k, x;
        cin >> k >> x;
        set<int> cur = {x};

        for (int step = 0; step < k; step++) {
            set<int> nxt;
            for (int val : cur) {
                nxt.insert(val * 2); // even predecessor
                if ((val - 1) % 3 == 0) {
                    int prev = (val - 1) / 3;
                    if (prev % 2 == 1) nxt.insert(prev);
                }
            }
            cur = nxt;
        }
        cout << *cur.begin() << "\n";
    }
}
