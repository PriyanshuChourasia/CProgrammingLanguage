#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>


typedef struct Stack{
    int *collection;
    int capacity;
    int size;
} Stack;

Stack *create_stack(int capacity);
void destroy_stack(Stack *stack);
bool is_full(Stack *stack);
bool is_empty(Stack *stack);
bool pop(Stack *stack, int *item);
bool push(Stack *stack, int *item);
bool peek(Stack *stack ,int *item);

int main() {
    Stack *stack = create_stack(5);

    if (stack == NULL) {
        printf("Error creating stack. \n");
        return 1;
    }

    if (is_empty(stack)) {
        printf("Stack is empty\n");
        destroy_stack(stack);
    }

    return 0;
}

// create a stack

Stack *create_stack(int capacity) {
    if (capacity <= 0) {
        return NULL;
    }

    Stack *stack = (Stack*)malloc(sizeof(Stack));
    if (stack == NULL) {
        return NULL;
    }
    stack->collection = (int*)malloc(sizeof(int) * capacity);
    if (stack->collection == NULL) {
        free(stack);
        return NULL;
    }
    stack->capacity = capacity;
    stack->size = 0;

    return stack;
}

// destroy a stack
void destroy_stack(Stack *stack) {
    free(stack->collection);
    free(stack);
}

// check stack is full or not
bool is_full(Stack *stack) {
    if (stack->capacity == stack->size) {
        return true;
    }
    return false;
}

// check stack is empty or not
bool is_empty(Stack *stack) {
    return stack->size == 0;
}
