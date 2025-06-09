#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        string s; cin >> s;

        vector<int> freq(10, 0);
        for (char c : s) freq[c - '0']++;

        string ans;
        for (int i = 1; i <= 10; i++) {
            int required = 10 - i;
            // Find smallest digit >= required and freq > 0
            for (int d = required; d <= 9; d++) {
                if (freq[d] > 0) {
                    ans.push_back(d + '0');
                    freq[d]--;
                    break;
                }
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
