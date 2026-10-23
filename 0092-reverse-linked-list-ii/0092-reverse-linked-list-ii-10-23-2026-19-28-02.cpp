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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (left == right) return head;
        ListNode* temp = head;
        int i = 1;
        ListNode* before = NULL;
        while (i < left) {
            before = temp;
            temp = temp->next;
            i++;
        }
        ListNode* tail = temp;
        ListNode* prev = NULL;
        while (i <= right) {
            ListNode* curr = temp;
            temp = temp->next;
            curr->next = prev;
            prev = curr;
            i++;
        }
        if (before != NULL) {
            before->next = prev;
        } else {
            head = prev;
        }
        tail->next = temp;
        return head;
    }
};