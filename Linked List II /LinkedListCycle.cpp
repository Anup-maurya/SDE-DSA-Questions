


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
