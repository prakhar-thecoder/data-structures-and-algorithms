#include <iostream>
#include "ListNode.h"
using namespace std;

ListNode* delete_begin (ListNode *head) {
    ListNode *temp = head;
    head = head->next;
    free(temp);

    return head;
}

int main () {
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    
    cout << "Before deleting: ";
    head->traverse();

    head = delete_begin(head);

    cout << "After deleting: ";
    head->traverse();

    return 0;
}