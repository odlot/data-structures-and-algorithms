typedef struct Node {
    int key;
    struct Node *next;
} Node;

int size(Node *head);