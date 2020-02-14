/**
 * @author 1157790064@qq.com
 * @date 2020/2/7 8:39 下午
 */

#include <vector>
#include <map>
#include <algorithm>

#define ll long long


using namespace std;



struct TreeNode {
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


void dfs_calc_num(TreeNode* root, ll & res){
    if(root){
        res += root->val;
        dfs_calc_num(root->left,res);
        dfs_calc_num(root->right,res);
    }
}

ll dfs_calc_ji(TreeNode* root, ll & ans, ll sum){
    if(root){
        int res= root->val + dfs_calc_ji(root->left,ans, sum) + dfs_calc_ji(root->right,ans, sum);
        ans=max(ans, res * (sum - res));
        return res;
    }
    else{
        return 0;
    }
}

int maxProduct(TreeNode* root)
{
    ll sum=0;
    ll ans=0;
    dfs_calc_num(root,sum);
    dfs_calc_ji(root, ans, sum);
    return ans % 1000000007;
}

void solve() {

}
int main() {
    solve();
}
