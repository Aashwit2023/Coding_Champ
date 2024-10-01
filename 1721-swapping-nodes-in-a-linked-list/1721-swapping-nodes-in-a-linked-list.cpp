// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* swapNodes(ListNode* head, int k) {
//         if(head==NULL || head->next ==NULL){
//             return head;
//         }
//         ListNode *tempNode;
//         ListNode *firstNode;
//         ListNode *secondNode;
        
//         for(int i=0;i<k;i++){
            
//         }      
        
//     }
// };
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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *startMover=head;
        int c=1;
        while(startMover->next!=NULL){
            c++;
            startMover=startMover->next;
        }
        startMover=head;
        for(int i=1;i<k;i++){
            startMover=startMover->next;
        }

        ListNode *endMover=head;
        for(int i=0;i<c-k;i++){
            endMover=endMover->next;
        }
        int temp=startMover->val;
        startMover->val=endMover->val;
        endMover->val=temp;
        return head; 
    }
};