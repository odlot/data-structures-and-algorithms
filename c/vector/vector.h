typedef struct Vector {
    int size;
    int capacity;
    int *data;
} Vector;

void print(Vector *vector);

Vector * allocate(int capacity);
void push(Vector *vector, int value);
void resize(Vector *vector, int size);
void upsize(Vector *vector, int capacity);