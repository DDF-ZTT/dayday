//#include <bits/stdc++.h>
#include <iostream>

using namespace std;
const int MAXN = 100;
const int MAXM = 100;

char a[MAXN][MAXM];

int n, m;


void dfs(int i, int j) {
    a[i][j] = '.';
    for (int x = -1 ; x <= 1; x++) {
        for(int y = -1; y <= 1; y++) {
            int dx = i + x;
            int dy = j + y;
            if (dx>= 0 && dx < n && dy >=0 && dy < m && a[dx][dy] == 'W') {
                dfs(dx, dy);
            }
        }
    }
}

void solve() {
    std::ios::sync_with_stdio(false);
    while (cin >> n >> m) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] == 'W') {
                    dfs(i, j);
                    cnt++;
                }
            }
        }
    }
}

int main() {
    solve();
}

