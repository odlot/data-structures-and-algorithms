#include <stdbool.h>

typedef struct Node {
    int value;
    struct Node *next;
} Node;

void print(Node *head);

int size(Node *head);
bool empty(Node *head);
void push_back(Node **head, int value);
int at(Node *head, int n);
void erase(Node **head, int n);