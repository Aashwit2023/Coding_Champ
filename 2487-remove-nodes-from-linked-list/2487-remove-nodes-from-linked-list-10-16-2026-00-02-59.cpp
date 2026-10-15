/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        vector<int> vec;
        ListNode* temp = head;
        while (temp != NULL) {
            vec.push_back(temp->val);
            temp = temp->next;
        }
        int n = vec.size();
        for (int i = n - 2; i >= 0; i--) {
            vec[i] = max(vec[i], vec[i + 1]);
        }
        temp = head;
        ListNode* prev = NULL;
        int count = 0;
        bool flag = false;
        while (temp != NULL) {
            if (temp->val < vec[count]) {
                if (prev == NULL) {
                    head = temp->next;
                } else {
                    prev->next = temp->next;
                }
            } else {
                prev = temp;
            }
            temp = temp->next;
            count++;
        }
        return head;
    }
};