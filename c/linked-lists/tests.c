#include "tests.h"
#include "linked-list.h"

#include <stddef.h>
#include <stdlib.h>
#include <assert.h>

void test_all() {
    test_size();
}

void test_size() {
    Node *head = NULL;
    assert(size(head) == 0);
    Node *first = malloc(sizeof(Node));
    first->key = 1;
    first->next = NULL;
    head = first;
    assert(size(head) == 1);
    free(head);
}