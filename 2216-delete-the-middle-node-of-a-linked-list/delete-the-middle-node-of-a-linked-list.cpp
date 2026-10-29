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
    int len(ListNode* head){
        int l=0;
        while(head!=NULL){
            head=head->next;
            l++;
        }
        return l;
    }
    ListNode* deleteMiddle(ListNode* head) {
        int l=len(head);
        int idx=l/2;
        int i=0;
        ListNode* ans=head;
        if(l==1){
            return NULL;
        }
        while(head!=NULL and i<idx){
            if((i+1)==idx){
                head->next=head->next->next;
            }
            i++;
            head=head->next;
        }
        return ans;
    }
};