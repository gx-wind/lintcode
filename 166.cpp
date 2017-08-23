#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x): val(x), next(NULL){}
};

ListNode *nthToLast(ListNode *head, int n) {
    // write your code here
    ListNode *fast = head, *slow = head;
    for (int i = 0; i < n; i++) {
        fast = fast->next;
    }
    while(fast) {
        fast = fast->next;
        slow = slow->next;
    }
    return slow;
}

int main() {
    return 0;
}
