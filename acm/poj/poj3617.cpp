/**
 * @author 1157790064@qq.com
 * @date 2019/12/20 1:49 下午
 */

#include <iostream>

using namespace std;

const int MAXN = 2000 + 10;
char s[MAXN];
int n;
void solve() {
    std::ios::sync_with_stdio(false);
    while (cin>>n) {
       for (int i = 0; i < n; i++) {
           cin>>s[i];
       }
       string ans;
       int l = 0;
       int r = n - 1;
        for (int i = 0; l + i <= r; i++) {
            if (s[l + i] > s[r - i]) {
                ans += s[r-i];
                r--;

            } else if(s[l + i] <= s[r - i]) {
                ans += s[l+i];
                l++;
            }
        }
       cout<<ans<<endl;
    }
}
int main() {
    solve();
}