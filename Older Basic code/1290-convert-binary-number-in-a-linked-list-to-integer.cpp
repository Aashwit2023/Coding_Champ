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
    int getDecimalValue(ListNode* head) {
        if(head==NULL ){
            return 0;
        }
        int count=0;
        int sum=0;
        ListNode *temp=head;
        while(temp->next!=NULL){
            count++;
            temp=temp->next;
        }
        // cout<<count<<endl;
        temp=head;
        while(temp){
            sum+=temp->val*pow(2,count);
            // cout<<temp->val<<endl;
            count--;
            temp=temp->next;
        }
        return sum;
    }
};