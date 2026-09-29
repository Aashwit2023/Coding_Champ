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
    void reorderList(ListNode* head) {
        if (head == NULL || head->next == NULL) return;
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* second_list = slow->next;
        slow->next = NULL;
        ListNode* p = NULL;
        while (second_list != NULL) {
            ListNode* curr = second_list->next;
            second_list->next = p;
            p = second_list;
            second_list = curr;
        }
        second_list = p;
        ListNode* Merge = head;
        while (Merge != NULL && second_list != NULL) {
            ListNode* nextNode = Merge->next;
            ListNode* secondNode = second_list->next;
            Merge->next = second_list;
            second_list->next = nextNode;
            Merge = nextNode;
            second_list = secondNode;
        }
    }
};