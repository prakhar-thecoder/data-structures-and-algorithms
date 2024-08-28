#include <iostream>
#include "ListNode.h"
using namespace std;

ListNode* delete_end (ListNode *head) {
    if (!head || !head->next) return nullptr;

    ListNode *temp = head, *prev = temp;
    while (temp->next != nullptr) {
        prev  = temp;
        temp = temp->next;
    }

    prev->next = nullptr;
    free(temp);

    return head;
}

int main () {
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    
    cout << "Before deleting: ";
    head->traverse();

    head = delete_end(head);

    cout << "After deleting: ";
    head->traverse();

    return 0;
}