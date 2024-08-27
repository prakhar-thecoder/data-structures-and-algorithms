#include<iostream>
#include "ListNode.h"
using namespace std;

ListNode* insert_at_pos(ListNode *head, int data, int pos) {
    if (pos <= 1) {
        ListNode* new_node = new ListNode(data, head);
        head = new_node;
        return head;
    }

    ListNode* temp = head;
    for (int i = 2; i < pos && temp->next != nullptr; i++) temp = temp->next;

    temp->next = new ListNode(data, temp->next);

    return head;
}

int main () {
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    
    head = insert_at_pos(head, 10, 2);

    head->traverse();

    return 0;
}