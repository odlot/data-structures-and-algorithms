#include "tests.h"
#include "linked-list.h"

#include <stddef.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

void test_all() {
    test_size();
    test_empty();
    test_push_back();
    test_at();
    test_erase();
}

void test_size() {
    Node *head = NULL;
    assert(size(head) == 0);
    Node *first = malloc(sizeof(Node));
    first->value = 1;
    first->next = NULL;
    head = first;
    assert(size(head) == 1);
    free(head);
}

void test_empty() {
    Node *head = NULL;
    assert(empty(head) == true);
    Node *first = malloc(sizeof(Node));
    first->value = 1;
    first->next = NULL;
    head = first;
    assert(empty(head) == false);
    free(head);
}

void test_push_back() {
    Node *head = NULL;
    push_back(&head, 1);
    assert(size(head) == 1);
    push_back(&head, 2);
    assert(size(head) == 2);
}

void test_at() {
    Node *head = NULL;
    push_back(&head, 1);
    push_back(&head, 2);
    push_back(&head, 3);
    assert(at(head, 0) == 1);
    assert(at(head, 1) == 2);
    assert(at(head, 2) == 3);
    assert(at(head, 42) == -1);
}

void test_erase() {
    Node *head = NULL;
    push_back(&head, 1);
    push_back(&head, 2);
    push_back(&head, 3);
    assert(size(head) == 3);
    erase(&head, 2);
    assert(size(head) == 2);
    erase(&head, 1);
    assert(size(head) == 1);
    erase(&head, 0);
    assert(size(head) == 0);
}