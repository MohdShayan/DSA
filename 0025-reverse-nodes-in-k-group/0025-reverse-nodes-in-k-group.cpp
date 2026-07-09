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


ListNode* reverseLL(ListNode *head){
    ListNode *prev=NULL;
    ListNode *temp=head;
    while(temp){
        ListNode* nextNode = temp->next;
        temp->next=prev;
        prev=temp;
        temp=nextNode;
    }
    return prev;
}

    ListNode* getKNode(ListNode *head, int k){
        ListNode *temp=head;
        k--;
        while(k>0 && temp!=NULL){
            k--;
            temp=temp->next;
        }
        return temp;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *temp=head;
        ListNode *prev=NULL;
        while(temp!=NULL){
            ListNode *knode = getKNode(temp,k);
            if(knode ==NULL){
                if(prev){
                    prev->next=temp;
                }
                break;
            }
            else{
                ListNode *nextNode = knode->next;
                knode->next=NULL;
                ListNode *newhead= reverseLL(temp);

                if(temp==head){
                    head=newhead;

                }
                else{
                    prev->next=newhead;
                }
                prev=temp;
                temp=nextNode;

            }

        }
        return head;
    }
};