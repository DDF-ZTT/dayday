class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        for (int i = 0; i < nums.size();i++) {
            int res = nums[i];
            int cnt = 0;
            while (res !=0) {
                res = res / 10;
                cnt++;
            }
            if (cnt % 2 == 0) {
                ans++;
            }
        }
        return ans;
    }
};