// 876. Middle of the Linked List
// Given the head of a singly linked list, return the middle node of the linked list.


class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* curr= new ListNode(); 
        ListNode* temp= new ListNode(); 
        curr=head;
        temp=head;
        int count=0,mid=0;
        while(curr->next!=NULL){
           count++;
           curr=curr->next;
        }
        if(count%2==0)
        {
        mid=(count/2)+1;
        }
        else
      {  mid=(count+1)/2;
      }
      
      for(int i=1;i<count;++i){
          if(count%2==0){
              temp=temp->next;
             if(i==mid-1){
              curr= temp;
               break;
             }
          }
         else{
              temp=temp->next;
             if(i==mid){
              curr= temp;
               break;
             }

         }
        
      }
      return curr;
      
    }
};