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
           cin >> s[i];
       }
       int a = 0;
       int b = n - 1;
       int cnt = 0;
       while(a<=b) {
           bool flag = true;
           for (int i = 0; a + i <= b;i++){
               if (s[a + i] < s[b - i]) {
                   flag = true;
                   break;
               } else if (s[a+i] > s[b-i]) {
                   flag = false;
                   break;
               }
           }
           if (flag) {
               cout<<s[a++];
           } else {
               cout<<s[b--];
           }
           cnt++;
           if (cnt == 80) {
               cnt = 0;
               cout<<endl;
           }
       }
       if (cnt != 0) {
           cout<<endl;
       }
    }
}
int main() {
    solve();
}