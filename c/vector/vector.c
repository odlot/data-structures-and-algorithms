#include "vector.h"
#include <stdlib.h>
#include <stdio.h>

void print(Vector *vector) {
    int size = vector->size;
    int capacity = vector->capacity;
    printf("size: %d\n", size);
    printf("capacity: %d\n", capacity);
    printf("elements: ");
    for (int i = 0; i < size; ++i) {
        printf("%d, ", *(vector->data + i));
    }
    printf("\n");
}

Vector * allocate(int capacity) {
    Vector *vector = malloc(sizeof(Vector));
    vector->size = 0;
    vector->capacity = capacity;
    vector->data = (int *)malloc(capacity * sizeof(int));
    return vector;
}

void push(Vector *vector, int value) {
    int size = vector->size;
    vector->size = size + 1;
    resize(vector, size + 1);
    *(vector->data + size) = value;
}

void resize(Vector *vector, int size) {
    int capacity = vector->capacity;
    if (size > capacity) {
        upsize(vector, capacity);
    }
}

void upsize(Vector *vector, int capacity) {
    int new_capacity = 2 * capacity;
    int *new_data = (int *)realloc(vector->data, new_capacity * sizeof(int));
    vector->data = new_data;
    vector->capacity = new_capacity;
}