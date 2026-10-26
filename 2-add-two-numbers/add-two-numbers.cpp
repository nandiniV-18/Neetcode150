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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head;ListNode* ans;
        int sum=0,carry=0,idx=0;
        while(l1!=NULL || l2!=NULL){
            if(l1!=NULL && l2!=NULL)
            sum=l1->val + l2->val + carry;
            else if(l1==NULL)
            sum=l2->val + carry;
            else if(l2==NULL)
            sum=l1->val + carry;
            carry=sum/10;
            sum%=10;
            ListNode* node=new ListNode(sum);
            if (idx==0){
                head=node;
                ans=node;
                idx=1;
            }
            else{
                ans->next=node;
                ans=node;
            }
            if(l1!=NULL)
            l1=l1->next;
            if(l2!=NULL)
            l2=l2->next;
        }
        if(carry){
            ListNode* node=new ListNode(carry);
            ans->next=node;
            ans=node;
        }
        return head;
    }
};