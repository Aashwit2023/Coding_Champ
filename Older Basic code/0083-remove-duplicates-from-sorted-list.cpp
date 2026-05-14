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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode *temp=head;
        while(temp->next != NULL){
            ListNode *p=temp->next;
            // cout<<"i"<<endl;
            if(temp->val==p->val){
                // cout<<"p"<<endl;
                ListNode *mover=p->next;
                temp->next=mover;
            }
            else if(temp->val != p->val){
                temp=temp->next;
            }   
        }
        return head;
    }
};