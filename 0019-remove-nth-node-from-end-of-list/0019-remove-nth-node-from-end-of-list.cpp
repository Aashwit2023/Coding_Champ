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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      // while(){
      //     vec.push_back(temp->data);
      // }
        if(head==NULL || head->next==NULL){
            head=head->next;
            return head;
        }
        int count=1;
        ListNode *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
            count++;
        }
        if(count==n && head->next!=NULL){
            head=head->next;
            return head;
        }
        n=count-n;
        temp=head;
        
        for(int i=1;i<n;i++){
            temp=temp->next;
        }
        ListNode *p=temp->next;
        ListNode *mover=temp->next->next;
        temp->next=mover;
        
        return head;
    }
};