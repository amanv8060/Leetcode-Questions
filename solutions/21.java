import java.util.*;

class Solution {
  public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
    if (l1 == null && l2 == null) {
      return null;
    }
    if (l1 == null && l2 != null) {
      return l2;
    }
    if (l1 != null && l2 == null) {
      return l1;
    }
    ListNode head;
    if (l1.val < l2.val) {
      head = new ListNode(l1.val);
      l1 = l1.next;
      // head.next=new ListNode(l2.val);
    } else {
      head = new ListNode(l2.val);
      l2 = l2.next;
      // head.next=new ListNode(l1.val);
    }

    while (l1 != null && l2 != null) {
      if (l1.val < l2.val) {
        ListNode temp = head;
        while (temp.next != null) {
          temp = temp.next;
        }
        temp.next = new ListNode(l1.val);
        l1 = l1.next;
        // temp.next.next=new ListNode(l2.val);
      } else {
        ListNode temp = head;
        while (temp.next != null) {
          temp = temp.next;
        }
        temp.next = new ListNode(l2.val);
        l2 = l2.next;
        // temp.next.next=new ListNode(l1.val);
      }
    }
    while (l1 != null) {
      ListNode temp = head;
      while (temp.next != null) {
        temp = temp.next;
      }
      temp.next = new ListNode(l1.val);
      l1 = l1.next;
    }
    while (l2 != null) {
      ListNode temp = head;
      while (temp.next != null) {
        temp = temp.next;
      }
      temp.next = new ListNode(l2.val);
      l2 = l2.next;
    }
    return head;
  }
}
