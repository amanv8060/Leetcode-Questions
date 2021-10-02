import java.util.*;

class Solution {
  public ListNode deleteDuplicates(ListNode head) {
    if (head == null || head.next == null) return head;
    ListNode dummy = new ListNode(-1);
    ListNode newhead = dummy;
    newhead.next = head;
    ListNode temp = head.next;
    while (temp != null) {
      boolean loop = false;
      while (temp != null && temp.val == newhead.next.val) {
        loop = true;
        temp = temp.next;
      }
      if (loop) {
        newhead.next = temp;
      } else {
        newhead = newhead.next;
      }
      if (temp != null) temp = temp.next;
    }
    return dummy.next;
  }
}
