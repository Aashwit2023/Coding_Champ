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
    ListNode* deleteMiddle(ListNode* head) {
        int count=1;
        if(head == NULL || head->next == NULL){
            return NULL;
        }
        
        ListNode *temp=head;
        while(temp->next != NULL){
            count++;
            temp=temp->next;
        }
        if(count==2){
            if(head->next->next == NULL){
                head->next = NULL;
                return head;
            }   
        }
        if(count%2 ==0){
            count++;
        }
        double c=ceil(count/2.0);
        // cout<<c;
        
        
        int a=0;
        temp=head;
        cout<<c<<endl;
        while(a<c-2 && temp){
            
            temp=temp->next;
            a++;
        }
        cout<<temp->val<<"";        
        ListNode *mover=temp->next->next;
        temp->next=mover;
        return head;
    }
};