import java.util.*;

class Solution {
  public ListNode oddEvenList(ListNode head) {
    if (head == null || head.next == null || head.next.next == null) return head;
    ListNode evenhead = head.next;
    ListNode oddhead = head;
    ListNode even = head.next;
    ListNode odd = head;
    while (even != null && even.next != null) {
      odd.next = odd.next.next;
      odd = odd.next;
      even.next = even.next.next;
      even = even.next;
    }
    odd.next = evenhead;
    return head;
  }
}
