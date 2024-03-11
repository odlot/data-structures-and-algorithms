#include "linked-list.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

void print(Node *head) {
    Node *current = head;
    while (current != NULL) {
        printf("%d -> ", current->value);
        current = current->next;
    }
    printf("\n");
}

int size(Node *head) {
    int size = 0;
    Node *current = head;
    while (current != NULL) {
        current = current->next;
        size = size + 1;
    }
    return size;
}

bool empty(Node *head) {
    return head == NULL;
}

void push_back(Node **head, int value) {
    Node *node = malloc(sizeof(Node));
    node->value = value;
    node->next = NULL;
    if (*head == NULL) {
        *head = node;
    } else {
        Node *current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = node;
    }
}

int at(Node *head, int n) {
    Node *current = head;
    while (current != NULL && n > 0) {
        current = current->next;
        n = n - 1;
    }
    if (current == NULL) {
        return -1;
    } else {
        return current->value;
    }
}

void erase(Node **head, int n) {
    Node *current = *head;
    Node *previous = NULL;
    while (current != NULL && n > 0) {
        previous = current;
        current = current->next;
        n = n - 1;
    }
    Node *next = current->next;
    if (previous == NULL) {
        *head = next;
    } else {
        previous->next = next;
    }
    free(current);
}