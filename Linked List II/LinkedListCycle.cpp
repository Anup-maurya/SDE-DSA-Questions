// 141. Linked List Cycle
// Given head, the head of a linked list, determine if the linked list has a cycle in it.


class Solution {
 public:
  bool hasCycle(ListNode* head) {
    ListNode* temp = head;
    ListNode* curr = head;

    while (curr && curr->next) {
      temp = temp->next;
      curr = curr->next->next;
      if (temp == curr)
        return true;
    }

    return false;
  }
};
