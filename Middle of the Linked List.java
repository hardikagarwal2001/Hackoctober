// https://leetcode.com/problems/middle-of-the-linked-list
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
// class Solution {
//     public ListNode middleNode(ListNode head) {
//         int cnt = 0;
//         ListNode t = head;
//         while(t!= null){
//             cnt++;
//             t = t.next;
//         }
//         cnt  = cnt / 2 + 1;
//                 ListNode p = head;

//         while(cnt>1){
//          p = p.next;
//             cnt--;
//         }
//         return p;
//     }
// }

class Solution {
    public ListNode middleNode(ListNode head) {
       
        ListNode slow = head;
        ListNode fast = head;
        while(fast != null && fast.next != null){
            slow = slow.next;
            fast = fast.next.next;
        }
        return slow;
        
    }
}