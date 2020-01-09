/**
 * @author 1157790064@qq.com
 * @date 2020/1/9 2:22 下午
 */
#include <algorithm>
#include <iostream>
#include <queue>

#define ll long long

using namespace std;

int n;

void solve() {

    std::ios::sync_with_stdio(false);
    priority_queue<ll, vector<ll>,  greater<ll>> q;//小顶堆
    while (cin>>n) {
        for (int i = 0; i < n; i++) {
            ll x;
            cin>>x;
            q.push(x);
        }
        ll ans = 0;
        while (1) {
            ll a = q.top();
            q.pop();
            if (q.empty()) break;
            ll b = q.top();
            q.pop();
            ans += (a + b);
            q.push(a + b);
        }
        cout<<ans<<endl;
    }
}
int main() {
    solve();
}