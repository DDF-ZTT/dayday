/**
 * @author 1157790064@qq.com
 * @date 2020/1/8 11:32 上午
 */
#include <iostream>
#include <algorithm>

using namespace std;
const int MAXN = 1000 + 10;
int n;
int r;
int x[MAXN];

void solve() {
    std::ios::sync_with_stdio(false);
    while (cin>>r>>n) {
        if (r == -1) break;
        for (int i = 0; i < n; i++) {
            cin>>x[i];
        }
        sort(x, x + n);
        int i = 0;
        int res = 0;
        while (i < n) {
            int left = x[i++];
            while (i < n && left + r >= x[i]) i++;
            int next = x[i - 1];
            while (i < n && next + r >= x[i]) i++;
            res++;
        }
        cout<<res<<endl;
    }
}

int main() {
    solve();
}