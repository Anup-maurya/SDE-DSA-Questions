// 61. Rotate List
// Given the head of a linked list, rotate the list to the right by k places.

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
      if (!head || !head->next || k == 0)
      return head;
      ListNode* tail;
      int length = 1;
      for (tail = head; tail->next; tail = tail->next)
      ++length;
      tail->next = head; 
      const int t = length - k % length;
      for (int i = 0; i < t; ++i)
      tail = tail->next;
      ListNode* newHead = tail->next;
      tail->next = nullptr;
      return newHead;
    }
};
