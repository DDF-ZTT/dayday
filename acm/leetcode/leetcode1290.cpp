/**
 * @author 1157790064@qq.com
 * @date 2019/12/20 4:41 下午
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

#include <bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    int getDecimalValue(ListNode *head) {
        long ans = 0;
        ListNode* p = head;
        vector<int> vec;
        while (p) {
            vec.push_back(p->val);
            p = p->next;
        }
        int cnt = 0;
        for (int i = vec.size() - 1; i>=0; i--) {
            if (vec[i] == 1) {
                ans += pow(2, cnt);
            }
            cnt++;
        }
        return cnt;
    }
};