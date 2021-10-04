class Solution {
  public void reorderList(ListNode head) {
    if (head == null || head.next == null) return;

    ListNode slow = head, fast = head, prev = null;
    ListNode l1 = head;
    while (fast != null && fast.next != null) {
      prev = slow;
      slow = slow.next;
      fast = fast.next.next;
    }

    prev.next = null; // Successfully partitions the list into two halves
    ListNode l2 = reverse(slow);

    merge(l1, l2);
  }

  private void merge(ListNode l1, ListNode l2) {
    while (l1 != null) {
      ListNode l1Next = l1.next;
      ListNode l2Next = l2.next;

      l1.next = l2;

      if (l1Next == null) {
        break;
      }
      l2.next = l1Next;
      l1 = l1Next;
      l2 = l2Next;
    }
  }

  private ListNode reverse(ListNode head) {
    if (head == null || head.next == null) return head;

    ListNode node = reverse(head.next);

    head.next.next = head;
    head.next = null;

    return node;
  }
}
