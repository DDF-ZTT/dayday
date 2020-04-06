/**
 * @author 1157790064@qq.com
 * @date 2020/2/7 8:39 下午
 */

#include <vector>
#include <map>
#include <algorithm>

using namespace std;


bool cmp(pair<float,float> p1,pair<float,float> p2)
{
    if (p1.first > p2.first) return true;
    else if (p1.first == p2.first) return p1.second > p2.second;
    else return false;
}
int insertVector(vector<int> & L, int k){
    if(L.empty()){
        L.push_back(k);
        ;
    }
    else if(k<L.front()){
        L.insert(L.begin(),k);
        ;
    }
    else if(k>L.back()){
        L.push_back(k);
        ;
    }
    else{
        ;
        vector<int>::iterator it=L.begin();
        vector<int>::iterator temp;
        for (it; it!=L.end(); ++it){
            ++count;
            temp=(it+);
            if (*it<k&&k<=*temp)
            {
                L.insert(it+,k);
                break;
            }
        }
        return count;
    }

}
int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
    vector<pair<int,int> > VecCount;
    for (int i = 0; i < speed.size()) {
       VecCount.push_back(pair<float,int>(efficiency[i], speed[i]));
    }
    sort(VecCount.begin(),VecCount.end(),cmp);
    long long speedAns = 0;
    vector<long long> speedVec;
    long long res = 0;
    for (int i = 0; i < n; ++i) {
        if (i < k) {
            speedAns += VecCount[i].second;
            insertVector(speedVec, VecCount[i].second);
        }
        else if (VecCount[i].second > speedVec[0]) {
            speedAns += VecCount[i].second - speedVec[0];
            speedVec.remove(speedVec[0]);
            insertVector(speedVec, VecCount[i].second);
        }

        res = max(speedAns * VecCount[i].first, result);
    }
    return result % 1000000007;

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
