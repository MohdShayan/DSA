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

    ListNode* merge2LinkedList(ListNode *l1, ListNode *l2){
        ListNode *t1= l1;
        ListNode *t2= l2;
        ListNode *dummy = new ListNode(-1);
        ListNode *temp=dummy;

        while(t1 && t2){
            if(t1->val < t2->val){
                temp->next = t1;
                t1=t1->next;
                temp = temp->next;
            }
            else{
                temp->next = t2;
                t2=t2->next;
                temp=temp->next;
            }
        }
        if(t1){
            temp->next = t1;
        }
        if(t2){
            temp->next = t2;
        }
        return dummy->next;

    }

    ListNode* getMiddle(ListNode *head){
        ListNode *slow =head;
        ListNode *fast= head->next;

        while(fast && fast->next){
            slow = slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next==NULL) return head;
        ListNode *mid = getMiddle(head);
        ListNode *lhead = head;
        ListNode *rhead = mid->next;
        mid->next=NULL;
       lhead =  sortList(lhead);
        rhead = sortList(rhead);
        return merge2LinkedList(lhead,rhead);
    }
};