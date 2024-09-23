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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }      
        ListNode*temp,*p=head;
        temp=head->next;
        p=temp;
        head->next=NULL;
        while(p!=NULL){
            p=temp->next;
            temp->next=head;
            head=temp;
            temp=p;
        }
        return head;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head1=reverseList(l1);
        ListNode *head2=reverseList(l2);
        
        // ListNode *temp1=head2;
        // while(temp1){
        //     cout<<temp1->val;
        //     temp1=temp1->next;
        // }
        
        
        
        ListNode *l3=new ListNode;
        ListNode *temp=l3;
        
        int carry=0;
        while(carry || head1!=NULL || head2!=NULL){
            int sum=0;
            if(head1!=NULL){
                sum+=head1->val;     
                head1=head1->next;
            }
            if(head2!=NULL){
                sum+=head2->val;
                head2=head2->next;
            }
            sum+=carry;
            carry=sum/10;
            ListNode *newNode=new ListNode(sum%10);
            temp->next=newNode;
            temp=temp->next;
        }
        ListNode *ans=reverseList(l3->next);
        return ans;
    }
};