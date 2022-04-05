package chenian.leetcode;

public class AddTwoBumbers extends Solution {
    public String describe() {
        return "You are given two non-empty linked lists representing two non-negative integers.\n" +
"The digits are stored in reverse order and each of their nodes contain a single digit. Add \n" +
"the two numbers and return it as a linked list. You may assume the two numbers do not contain\n" +
"any leading zero, except the number 0 itself.";
    };

    public ListNode solute(ListNode l1, ListNode l2) {
        ListNode res = new ListNode(-1);
        ListNode cur = res;
        int carry  = 0;
        while( l1 != null || l2 != null ) {
            int v1 = l1 != null ? l1.val:0;
            int v2 = l2 != null ? l2.val:0;
            int sum = v1 + v2 + carry;
            carry = sum / 10;
            cur.next = new ListNode( sum % 10 );
            cur = cur.next;
            if ( l1 != null ) l1 = l1.next;
            if ( l2 != null ) l1 = l2.next;
        }
        if ( carry > 0 ) cur.next =  new ListNode(1);
        return res.next;
    };
}
