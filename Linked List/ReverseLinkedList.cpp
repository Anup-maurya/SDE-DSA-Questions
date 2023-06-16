// 206. Reverse Linked List
// Given the head of a singly linked list, reverse the list, and return the reversed list.

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *prev=new ListNode();
        ListNode *next=new ListNode();
        ListNode *curr=new ListNode();
        prev=NULL;
        curr=head;
        next=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
       head=prev;
        return prev;
        }
    
};