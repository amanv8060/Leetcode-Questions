/*
Problem Name: Split Linked List in Parts
Problem Link: https://leetcode.com/problems/split-linked-list-in-parts/
Time: 0ms, 100%
Memory: 39Mb, 75.06%
*/


//-----------------Solution-----------------

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode[] splitListToParts(ListNode head, int K) {
        if(K==1)
            return new ListNode[]{head};
        int size = 0;
        ListNode temp = head;
        while(temp!=null){
            temp = temp.next;
            size++;
        }
        int d = size/K;
        int rem = size%K;
        ListNode[] ans = new ListNode[K];
        ListNode pre = null;
        int i=0;
        while(i<K){
            if(head==null){
                ans[i++] = null;
            }
            else{
                int j = 0;
                ListNode start = head;
                while(j<d){
                    pre = head; 
                    head = head.next;j++;
                }
                if(rem>0){
                    pre = head; 
                    head = head.next;
                    rem--;
                }
                pre.next = null;
                ans[i++] = start;
            }
        }
        return ans;
        
            
    }
}
