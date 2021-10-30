//https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer
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
    public int getDecimalValue(ListNode head) {
        
//         int cnt=0;
//         ListNode t = head;
        
//         while(t!=null){
//             cnt++;
//             t = t.next;
//         }
//         if(cnt == 1){
//             return head.val;
//         }
//         cnt--;
//         ListNode p = head;
//         int ans = 0;
//         while(cnt>=0){
//             ans = ans + ((int)Math.pow(2,cnt))*p.val;
//             p = p.next;
//             cnt--;
//         }
//         return ans;
        
        
        StringBuilder s = new StringBuilder();
        while(head != null){
            s.append(head.val);
            head = head.next;
        }
        
        return Integer.parseInt(s.toString(),2);
    }
}