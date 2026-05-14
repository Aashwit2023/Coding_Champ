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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL){
            return head;
        }
        if(head->next==NULL && head->val==val){
            return head->next;
        }
        ListNode *temp=head;
        while(temp->next!=NULL){
           
            ListNode *p=temp->next;
            if(p->val==val){
                ListNode *mover=p->next;
                temp->next=mover;
            }else if(p->val!=val){
                temp=temp->next;
            }
             
        }
        if(head->val==val){
            ListNode *temp1=head;
            head=head->next;
        }
        return head;
        
        
       
    }
};