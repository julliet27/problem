#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int time_to_minutes(int h, int m) {
    return h * 60 + m;
}

string minutes_to_time(int minutes) {
    int hours = minutes / 60;
    minutes %= 60;
    stringstream ss;
    ss << (hours < 10 ? "0" : "") << hours << ":" << (minutes < 10 ? "0" : "") << minutes;
    return ss.str();
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif  
    int T;
    cin >> T;

    for(int t = 0; t < T; t++) {
        int n, h1, m1, h2, m2;
        scanf("%d:%d:%d", &n, &h1, &m1);
        scanf("%d:%d", &h2, &m2);
        
        int start_time = time_to_minutes(h1, m1);
        int end_time = time_to_minutes(h2, m2) - 29;

        vector<pair<int, int>> intervals;
        for(int i = 0; i < n; i++) {
            int sh, sm, eh, em;
            scanf("%d:%d", &sh, &sm);
            scanf("%d:%d", &eh, &em);
            intervals.push_back({time_to_minutes(sh, sm), time_to_minutes(eh, em)});
        }

        int best_start_time = start_time;
        int max_duration = 0;

        for(int i = start_time; i <= end_time; i++) {
            int duration = 0;
            for(auto& interval : intervals) {
                int overlap = min(interval.second, i + 30) - max(interval.first, i);
                if(overlap > 0) {
                    duration += overlap;
                }
            }

            if(duration > max_duration) {
                max_duration = duration;
                best_start_time = i;
            }
        }

        cout << minutes_to_time(best_start_time) << endl;
    }
    return 0;
}