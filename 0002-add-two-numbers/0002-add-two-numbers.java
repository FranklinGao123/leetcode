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
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode output = new ListNode();
        ListNode temp = output;
        int count = 0;
        int carry = 0;
        while(l1 != null || l2 != null){
            if(l1 != null)
                count += l1.val;
            if(l2!= null)
                count += l2.val;
            temp.next = new ListNode((count + carry)%10);
            carry = (count + carry)/10;
            temp = temp.next;
            count = 0;
            if(l1!=null)
                l1 = l1.next;
            if(l2!=null)
                l2 = l2.next;
        }
        if(carry==1){
            temp.next = new ListNode(1);
        }
        return output.next;
    }
}