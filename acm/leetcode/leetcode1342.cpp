/**
 * @author 1157790064@qq.com
 * @date 2020/2/7 8:39 下午
 */

#include <vector>
#include <map>
#include <algorithm>

using namespace std;



bool cmp(pair<float,float> a,pair<float,float> b)
{
    return a.second < b.second;//按照value降序排序
}


int minSetSize(vector<int>& arr) {
    map<int ,int> a ;
    for (int i = 0 ; i < arr.size(); i++) {
        a[arr[i]]++;
    }
    vector<pair<int,int> > VecCount;
    for(map<int,int>::iterator it = a.begin();it!=a.end();it++) {
        VecCount.push_back(pair<float,int>(it->first,it->second));
    }
    sort(VecCount.begin(),VecCount.end(),cmp);
    int cnt;
    int ans = 0;
    for (int i = 0; i < VecCount.size(); i++) {
        cnt += VecCount[i].second;
        ans++;
        if (arr.size() % 2 == 0) {
            if (cnt >= arr.size() / 2 ) {
                return ans;
            }
        } else {
            if (cnt >= arr.size() / 2 + 1) {
                return ans;
            }
        }
    }
    return 0;
}
void solve() {

}
int main() {
    solve();
}
