class Solution {
public:
    vector<vector<int>> generateSchedule(int n) {
        if (n == 2) {
            return {{0, 1}, {1, 0}};
        }
        if (n == 3) {
            return {};
        }
        
        vector<vector<int>> schedule;
        int virtualN = n % 2 == 0 ? n : n + 1;
        
        vector<int> teams(virtualN);
        for (int i = 0; i < virtualN; i++) teams[i] = i;
    
        vector<vector<int>> allMatches;
        for (int round = 0; round < virtualN - 1; round++) {
            for (int i = 0; i < virtualN / 2; i++) {
                if (teams[i] < n && teams[virtualN - 1 - i] < n) {
                    allMatches.push_back({teams[i], teams[virtualN - 1 - i]});
                    allMatches.push_back({teams[virtualN - 1 - i], teams[i]});
                }
            }
            rotate(teams.begin() + 1, teams.begin() + 2, teams.end());
        }

        vector<int> lastPlayed(n, -2);
        vector<bool> used(allMatches.size(), false);
        
        for (int day = 0; day < allMatches.size(); day++) {
            for (int i = 0; i < allMatches.size(); i++) {
                if (used[i]) continue;
                
                int home = allMatches[i][0];
                int away = allMatches[i][1];
                
                if (lastPlayed[home] != day - 1 && lastPlayed[away] != day - 1) {
                    schedule.push_back(allMatches[i]);
                    lastPlayed[home] = day;
                    lastPlayed[away] = day;
                    used[i] = true;
                    break;
                }
            }
        }
        
        if (schedule.size() != n * (n - 1)) {
            return {};
        }
        
        return schedule;
    }
};

int main(){
    int i
}