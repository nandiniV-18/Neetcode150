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
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow;
        ListNode* fast;
        slow=head;
        int flag=0;
        if(head==NULL || head->next==NULL) return NULL;
        fast=head;
        while(fast!=NULL && fast->next!=NULL && slow!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow){
                flag=1;
                break;
            }
        }
        if(flag){
            slow=head;
            while(slow!=fast and slow!=NULL and fast!=NULL){
                slow=slow->next;
                fast=fast->next;
            }
            if(slow==fast)return slow;
        }
        return NULL;
    }
};