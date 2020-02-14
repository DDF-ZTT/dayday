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
    if(a.second == b.second)//如果value相等
    {
        return a.first<b.first;//则以key升序排序
    }
    return a.second < b.second;//按照value降序排序
}

vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
    map<int ,int > a;
    for (int i = 0 ; i < mat.size(); i++) {
        int cnt = 0;
        for (int j = 0; j < mat[i].size(); j++) {
            if (mat[i][j] == 1) {
                cnt++;
            }
        }
        a[i] = cnt;
    }

    vector<pair<int,int> > VecCount;

    for(map<int,int>::iterator it = a.begin();it!=a.end();it++) {
        VecCount.push_back(pair<float,int>(it->first,it->second));
    }
    sort(VecCount.begin(),VecCount.end(),cmp);
    vector<int> ans;
    for (int i = 0 ; i < k; i++) {
        ans.push_back((VecCount[i].first));
    }
    return ans;
}

void solve() {

}
int main() {
    solve();
}
