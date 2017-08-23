#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x):val(x), next(NULL){};
};

ListNode *reverse(ListNode *head) {
    ListNode *middle = NULL, *trail;
    while (head) {
        trail = middle;
        middle = head;
        head = head->next;
        middle->next = trail;
    }
    return middle;
}

ListNode * addLists2(ListNode * l1, ListNode * l2) {
    // write your code here
    ListNode *p1 = reverse(l1);
    ListNode *p2 = reverse(l2);
    ListNode *newHead = new ListNode(0);
    ListNode *p = newHead;
    int c = 0;
    while (p1 || p2) {
        if (p1) {
            c += p1->val;
            p1 = p1->next;
        }
        if (p2) {
            c += p2->val;
            p2 = p2->next;
        }
        p->next =new ListNode(c%10);
        c /= 10;
        p = p->next;
    }
    if (c > 0) {
        p->next = new ListNode(c);
    }
    return reverse(newHead->next);
}
