/**
 * @author 1157790064@qq.com
 * @date 2020/1/9 3:17 下午
 */

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>

using namespace std;

const int MAXN = 10000 + 10;
int n,w;
int max_value = -1;
struct pm {
    int w;
    int v;
};

pm a[MAXN];


// 从第i个重来不超过j的最大值
// 记忆化搜索
int dp[MAXN][MAXN];
int dfs(int i, int j) {
    if (dp[i][j] > 0) {
        return dp[i][j];
    }
    int res;
    if (i == n) {
        res = 0;
    }else if (j < a[i].w ) {
        res = dfs(i + 1, j);
    } else {
        res = max(dfs(i + 1, j), dfs(i + 1, j - a[i].w) + a[i].v);
    }
    return dp[i][j] = res;
}

// 前i个重量不超过j的最大值
void dpSolve() {
   for (int i = 0; i <= w; i++) {
       dp[0][i] = 0;
   }
   for (int i = 0; i <n ;i ++) {
       for (int j = 0; j <= w; j++) {
           if (j < a[i].w) {
               dp[i + 1][j] = dp[i][j];
           } else {
               dp[i + 1][j] = max(dp[i][j], dp[i][j + a[i].w] + a[i].v);
           }
       }
   }
}
void solve() {
    std::ios::sync_with_stdio(false);
    while (cin>>n>>w) {
        memset(dp, -1, sizeof(dp));
        max_value = -1;
        for (int i = 0; i < n; i++) {
            cin>>a[i].w>>a[i].v;
        }

        cout<<dfs(0,w);
    }
}
int main () {
   solve();
}