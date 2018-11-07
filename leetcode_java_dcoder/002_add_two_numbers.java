/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class ListNode {
    int val;
    ListNode next;
    ListNode(int x) { val = x; }
}
class Dcoder {


	/*
	Approach 1: Elementary Math
	Intuition
	Keep track of the carry using a variable and simulate digits-by-digits
	sum starting from the head of list, which contains the least-significant digit.
	 */
	public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
		ListNode dummyHead = new ListNode(0);
		ListNode p = l1, q = l2, curr = dummyHead;
		int carry = 0;
		while (p != null || q != null) {
			int x = (p != null) ? p.val : 0;
			int y = (q != null) ? q.val : 0;
			int sum = carry + x + y;
			carry = sum / 10;
			curr.next = new ListNode(sum % 10);
			curr = curr.next;
			if (p != null) p = p.next;
			if (q != null) q = q.next;
		}
		if (carry > 0) {
			curr.next = new ListNode(carry);
		}
		return dummyHead.next;
	}

	public static void main(String[] args) {
        Dcoder z = new Dcoder();
		System.out.println("002");

		ListNode a = new ListNode(2);
		ListNode p = a.next = new ListNode(4);
        p.next = new ListNode(3);

        ListNode b = new ListNode(5);
        p = b.next = new ListNode(6);
        p.next = new ListNode(4);

        ListNode o = z.addTwoNumbers(a, b);
        while(o != null) {
            System.out.println(o.val);
            o = o.next;
        }

	}
}