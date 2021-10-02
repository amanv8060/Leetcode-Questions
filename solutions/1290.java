import java.uitl.*;

class Solution {
  public int getDecimalValue(ListNode head) {
    int size = 0;
    int sum = 0;
    ListNode trav = head;
    for (ListNode temp = head; temp != null; temp = temp.next) {
      size++;
    }
    for (int i = size - 1; i >= 0; i--) {
      sum = sum + (trav.val * (int) Math.pow(2, i));
      trav = trav.next;
    }
    return (int) sum;
  }
}
