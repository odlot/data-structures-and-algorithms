#include "linked-list.h"
#include <stddef.h>

int size(Node *head) {
    int size = 0;
    Node *current = head;
    while (current != NULL) {
        current = current->next;
        size = size + 1;
    }
    return size;
}