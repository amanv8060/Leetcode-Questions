import java.util.*;

class Solution {
  public ListNode rotateRight(ListNode head, int k) {
    if (head == null) return null;

    int len = 1;
    ListNode fast = head, slow = head;
    while (fast.next != null) {
      len++;
      fast = fast.next;
    }

    for (int i = 1; i < len - k % len; i++) slow = slow.next;

    fast.next = head;
    head = slow.next;
    slow.next = null;

    return head;
  }
}
