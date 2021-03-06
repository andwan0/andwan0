#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
 //Compiler version g++ 6.3.0

/**
 * Definition for singly-linked list.
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
 
class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        int n1 = 0, n2 = 0;
        ListNode *h1 = l1, *h2 = l2;
        int c = 0;
        ListNode *r = NULL;
        ListNode **p = &r;
        while (h1 && h2) {
            n1 = h1->val;
            n2 = h2->val;
            int n = n1 + n2 + c;
            if (n >= 10) {
                n -= 10;
                c = 1;
            }
            else c = 0;
            *p = new ListNode(n);
            p = &((*p)->next);
            h1 = h1->next;
            h2 = h2->next;
        }
        while (h1) {
            n1 = h1->val;
            int n = n1 + c;
            if (n >= 10) {
                n -= 10;
                c = 1;
            }
            else c = 0;
            *p = new ListNode(n);
            p = &((*p)->next);
            h1 = h1->next;
        }        
        while (h2) {
            n2 = h2->val;
            int n = n2 + c;
            if (n >= 10) {
                n -= 10;
                c = 1;
            }
            else c = 0;
            *p = new ListNode(n);
            p = &((*p)->next);
            h2 = h2->next;
        }
        if (c) {          
            *p = new ListNode(c);
            p = &((*p)->next);
        }
        return r;
    }
};

//taken from leetcode debug playground
string listNodeToString(ListNode* node) {
    if (node == nullptr) {
        return "[]";
    }

    string result;
    while (node) {
        result += to_string(node->val) + ", ";
        node = node->next;
    }
    return "[" + result.substr(0, result.length() - 2) + "]";
}

int main()
{
    ListNode a(2);
    ListNode *p = a.next = new ListNode(4);
    p->next = new ListNode(3);

    ListNode b(5);
    p = b.next = new ListNode(6);
    p->next = new ListNode(4);

    ListNode* ret = Solution().addTwoNumbers(&a, &b);

    string out = listNodeToString(ret);
    cout << out << endl;
    system("pause");
}