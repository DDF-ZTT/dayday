class Solution {
public:
    int max;
    void dfs(int root,int time,vector<vector<int>> &my_son,vector<int>& informTime){
        for(auto it:my_son[root]){
            dfs(it,time+informTime[root],my_son,informTime);
        }
        if(time>max) max=time;
    }
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        if(n==1) return 0;
        vector<vector<int>> my_son(manager.size());
        for(int i=0;i<manager.size();i++){
            if(manager[i]!=-1) my_son[manager[i]].push_back(i);
        }
        max=0;
        dfs(headID,0,my_son,informTime);
        return max;
    }
};