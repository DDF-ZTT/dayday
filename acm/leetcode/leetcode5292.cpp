class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        int cnt = 0;
        sort(nums.begin(), nums.end());
        map<int, int> map;
        for (int i = 0; i < nums.size();i++) {
            map[nums[i]]++;
        }
        int a;
        int res = 0;
        if (nums.size() % k != 0) {
            return false;
        }
        while (true) {
            if (cnt == 0) {
                bool flag = true;
                for (int j = 0; j < nums.size(); j++) {
                    if (map[nums[j]] != 0) {
                        a = nums[j];

                        res++;
                        map[nums[j]]--;
                        flag = false;
                        break;
                    }
                }
                if (flag == true) {
                    return false;
                }
                cnt++;
            }
            if (map[a + 1] != 0) {
                res++;
                map[a + 1]--;
                cnt++;
                a++;
            } else {
                return false;
            }
            if (cnt == k) {
                cnt = 0;
            }
            if (res == nums.size()) {
                return true;
            }

        }
    }
};