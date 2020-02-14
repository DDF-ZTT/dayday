/**
 * @author 1157790064@qq.com
 * @date 2020/1/14 11:06 上午
 */
#include <algorithm>
#include <iostream>
#include <cstring>

using namespace std;

string a,b;

// dp[i][j] 表a[0]-a[i]和b[0]-b[j]的lcs长度
int dp[1000][1000];

void solve() {
   while (cin>>a>>b) {
       memset(dp, 0, sizeof(dp));
       for (int i = 0; i < a.length(); i++) {
           for (int j =0; j < b.length(); j++) {
               if (a[i] ==  b[i]) {
                   dp[i + 1][j + 1] = dp[i][j] + 1;
               } else {
                   dp[i + 1][j + 1] = max(dp[i + 1][j], dp[i][j + 1]);
               }
           }
       }
       cout<<dp[a.length()][b.length()]<<endl;
   }
}

int main() {
    solve();
}