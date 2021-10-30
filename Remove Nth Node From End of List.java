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
    public ListNode removeNthFromEnd(ListNode head, int n) {
     
        
        int cnt = 0;
        ListNode t  = head;
        while(t != null){
            t = t.next;
            cnt+=1;
        }
        
        int i = 1;
        ListNode x = head;
        if(n==cnt){
            head = head.next;
            return head;
        }
        cnt =  cnt - n;
        while(x != null){
            
                System.out.println(cnt);
            if(i == cnt){
                System.out.println(x.val);
                x.next = x.next.next;
                break;
            }
            x = x.next;
            i++;
        }
        return head;
    }
}