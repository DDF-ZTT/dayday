/**
 * @author 1157790064@qq.com
 * @date 2019/12/19 2:17 下午
 */

#include <iostream>
#include <algorithm>

using namespace std;

const int MAXN = 1e6 + 10;
const int MAX_VALUE = 1e6 + 10;

int l;
int n;
int a[MAXN];

void solve() {
    std::ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while (t--) {
        cin>>l>>n;
        int minT = -1;
        int maxT = -1;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            minT = max(minT, min(a[i], l - a[i]));
            maxT = max(maxT, max(a[i], l - a[i]));
        }
        cout << minT << " " << maxT<<endl;
    }
}

int main() {
    solve();
}

