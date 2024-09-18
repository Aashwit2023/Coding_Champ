/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL || head-> next ==NULL || head->next->next==NULL){
            return false;
        }
        ListNode *turtle=head;
        ListNode *Hare=head;
        while(turtle !=NULL && Hare!=NULL){
            turtle=turtle->next;
            if(Hare->next ==NULL ||Hare->next->next ==NULL ){
                return false;
            }
            Hare=Hare->next->next;
            if(turtle==Hare){
                return true;
            }
        }                   
        return false;
    }
};