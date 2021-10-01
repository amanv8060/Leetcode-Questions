import java.util.*;

class Solution {
  public ListNode reverseBetween(ListNode head, int left, int right) {
    if (head == null || head.next == null) return head;
    ListNode dummy = new ListNode(-1);
    dummy.next = head;
    ListNode ptr = dummy;
    ListNode prev = null;
    for (int i = 0; i < left; i++) {
      prev = ptr;
      ptr = ptr.next;
    }
    ListNode curr = ptr;
    ListNode pre = null;
    for (int i = left; i <= right; i++) {
      ListNode next = curr.next;
      curr.next = pre;
      pre = curr;
      curr = next;
    }
    prev.next = pre;
    ptr.next = curr;
    return dummy.next;
  }
}
