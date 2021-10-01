import java.util.*;

class Solution {
  public ListNode insertionSortList(ListNode head) {
    if (head == null) return head;
    ListNode root = head;
    ListNode current = head.next;
    ListNode beforeCurrent = head;

    while (current != null) {
      if (current.val >= beforeCurrent.val) {
        beforeCurrent = current;
        current = current.next;
        continue;
      } else {
        if (root.val > current.val) {
          beforeCurrent.next = current.next;
          current.next = root;
          root = current;
          current = beforeCurrent.next;
          continue;
        }
        ListNode searchBy = root;
        while (searchBy.next.val < current.val) {
          searchBy = searchBy.next;
        }
        beforeCurrent.next = current.next;
        current.next = searchBy.next;
        searchBy.next = current;
        current = beforeCurrent.next;
      }
    }
    return root;
  }
}
