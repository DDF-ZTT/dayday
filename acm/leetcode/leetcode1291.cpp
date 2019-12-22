/**
 * @author 1157790064@qq.com
 * @date 2019/12/19 2:16 下午
 */

#include <bits/stdc++.h>

using namespace std;
const int MAXN = 100;
const int MAXM = 100;

char a[MAXN][MAXM];

int n, m;


vector<long> vec = {12,23,34,45,56,67,78,89,123,234,345,456,567,678,789,1234,2345,3456,4567,5678,6789,12345,23456,34567,45678,56789,123456,234567,345678,456789,1234567,2345678,3456789,12345678,23456789};


class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> vec = {12,23,34,45,56,67,78,89,123,234,345,456,567,678,789,1234,2345,3456,4567,5678,6789,12345,23456,34567,45678,56789,123456,234567,345678,456789,1234567,2345678,3456789,12345678,23456789,123456789
        };
        vector<int> ans;
        for (int i = 0; i < vec.size(); i++) {
            if (vec[i]>=low && vec[i] <= high) {
                ans.push_back(vec[i]);
            }
        }
        return ans;
    }
};
void solve() {

    vector<long> vec = {1,2,3,4,5,6,7,8,9};
    for (int i = 12; i<= 1000000000; i++) {
        int ans = i;
        int k = ans % 10;
        ans = ans / 10;
        bool flag = true;
        while (ans != 0) {
            int n = ans % 10;
            if (k - n != 1) {
                flag = false;
                break;
            }
            k = n;
            ans = ans / 10;
        }
        if (flag) {
            vec.push_back(i);
        }
        flag = true;
    }
    sort(vec.begin(), vec.end());
    return vec;
    for (int i = 0; i < vec.size();i++) {
        cout<<vec[i];
        if (i == vec.size() - 1) {
            cout<<endl;
        } else {
            cout<< ",";
        }
    }
}

int main() {
    solve();
}

