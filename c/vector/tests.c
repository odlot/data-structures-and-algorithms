#include "tests.h"
#include "vector.h"
#include <assert.h>

void test_all() {
    test_allocate();
    test_push();
}

void test_allocate() {
    int capacity = 42;
    Vector *vector = allocate(capacity);
}

void test_push() {
    int capacity = 3;
    Vector *vector = allocate(capacity);
    assert(vector->capacity > vector->size);
    push(vector, 1);
    push(vector, 2);
    push(vector, 3);
    push(vector, 4);
    assert(vector->capacity > vector->size);
    push(vector, 5);
    push(vector, 6);
    push(vector, 7);
    print(vector);
    assert(vector->capacity > vector->size);
}