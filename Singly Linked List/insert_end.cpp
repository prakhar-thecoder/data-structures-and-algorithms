#include<iostream>
#include "ListNode.h"
using namespace std;

ListNode* insert_end(ListNode *head, int data) {
    ListNode* temp = head;
    while (temp->next != nullptr) temp = temp->next;

    temp->next = new ListNode(data);

    return head;
}

int main () {
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    
    head = insert_end(head, 3);

    head->traverse();

    return 0;
}