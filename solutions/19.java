import java.util.*;

class Solution {
  public ListNode removeNthFromEnd(ListNode head, int n) {

    ListNode newhead = new ListNode(0);
    newhead.next = head;
    ListNode slow = newhead;
    ListNode fast = newhead;
    for (int i = 0; i < n; i++) {
      fast = fast.next;
    }
    while (fast.next != null) {
      slow = slow.next;
      fast = fast.next;
    }
    slow.next = slow.next.next;
    return newhead.next;
  }
}
