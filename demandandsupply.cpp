#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    //fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif     
    int inp;
    std::cin >> inp;
    for (int pr = 0; pr < inp; ++pr) {
        int n;
        std::cin >> n;
        std::vector<std::pair<int, int>> data(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> data[i].first >> data[i].second;
        }

        std::sort(data.begin(), data.end());
        bool NotSupply = true;
        for (int i = 1; i < n; ++i) {
            if (data[i].first > data[i-1].first && data[i].second > data[i-1].second) {
                NotSupply = false;
                break;
            }
        }

        if (NotSupply) {
            std::cout << "DEMAND" << std::endl;
        } else {
            std::cout << "SUPPLY" << std::endl;
        }
    }
    return 0;
}