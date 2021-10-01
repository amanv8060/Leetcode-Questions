/**
 * Definition for singly-linked list. public class ListNode { int val; ListNode next; ListNode() {}
 * ListNode(int val) { this.val = val; } ListNode(int val, ListNode next) { this.val = val;
 * this.next = next; } }
 */
import java.util.*;

class Solution {
  public ListNode swapPairs(ListNode head) {
    ListNode dummy = new ListNode(0);
    dummy.next = head;
    ListNode ptr = dummy;
    while (ptr.next != null && ptr.next.next != null) {
      ListNode swap1 = ptr.next;
      ListNode swap2 = ptr.next.next;
      ptr.next = swap2;
      swap1.next = swap2.next;
      swap2.next = swap1;
      ptr = swap1;
    }
    return dummy.next;
  }
}
