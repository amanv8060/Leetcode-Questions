import java.util.*;

class Solution {
  private ListNode partition(ListNode head) {
    ListNode fast = head.next, slow = head;
    while (fast != null) {
      fast = fast.next;
      if (fast != null) {
        slow = slow.next;
        fast = fast.next;
      }
    }
    ListNode second = slow.next;
    slow.next = null;
    return second;
  }

  private ListNode merge(ListNode a, ListNode b) {
    ListNode c = null;
    if (a.val <= b.val) c = a;
    else {
      c = b;
      b = a;
      a = c;
    }
    while (a.next != null) {
      if (a.next.val > b.val) {
        ListNode temp = a.next;
        a.next = b;
        b = temp;
      }
      a = a.next;
    }
    a.next = b;
    return c;
  }

  public ListNode sortList(ListNode head) {
    if (head == null || head.next == null) return head;
    ListNode second = partition(head);
    head = sortList(head);
    second = sortList(second);
    return merge(head, second);
  }
}
