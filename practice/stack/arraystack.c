#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    int *collection;
    int capacity;
    int size;
} Stack;

Stack *create_stack(int capacity);
void destroy_stack(Stack *stack);
void display_stack(Stack *stack);
bool is_full(Stack *stack);
bool is_empty(Stack *stack);
bool pop_stack(Stack *stack, int *item);
bool push_stack(Stack *stack, int item);
bool peek_stack(Stack *stack, int *item);

int main() {
    Stack *stack = create_stack(5);

    int peek_val = -1;
    int pop_val = -1;

    if (stack == NULL) {
        printf("Error creating stack\n");
        return 1;
    }

    if (is_empty(stack)) {
        printf("Stack is empty\n");
    }

    push_stack(stack,45);
    printf("Stack size: %d\n",stack->size);


    push_stack(stack,155);
    push_stack(stack,55);
    push_stack(stack,665);
    push_stack(stack,67);

    display_stack(stack);

    if (is_full(stack)) {
        printf("Stack is full.\n");
        printf("Stack size: %d\n",stack->size);
    }

    bool try_push = push_stack(stack,67);

    if (try_push == false) {
        printf("Push failed\n");
    }

    peek_stack(stack,&peek_val);
    printf("Peek Val: %d\n",peek_val);
    pop_stack(stack,&pop_val);
    printf("Popped Value: %d\n",pop_val);

    pop_stack(stack,&pop_val);
    printf("Popped Value: %d\n",pop_val);

    pop_stack(stack,&pop_val);
    printf("Popped Value: %d\n",pop_val);
    peek_stack(stack,&peek_val);
    printf("Peek Val: %d\n",peek_val);

    display_stack(stack);

    destroy_stack(stack);

    return 0;
}


Stack *create_stack(int capacity) {
    if (capacity<=0) return NULL;

    Stack *stack = malloc(sizeof(Stack));
    if (stack == NULL) {
        return NULL;
    }

    stack->collection = malloc(sizeof(int) * capacity);

    if (stack->collection == NULL) {
        free(stack);
        return NULL;
    }

    stack->capacity = capacity;
    stack->size = 0;

    return stack;
}

void destroy_stack(Stack *stack) {
    free(stack->collection);
    free(stack);
}

void display_stack(Stack *stack) {
    if (is_empty(stack)) {
        printf("Stack is Empty");
        return;
    }

    printf("Stack List\n");

    for (int i=0; i<stack->size; i++) {
        printf("%d\n",stack->collection[i]);
    }
}

bool is_full(Stack *stack) {
    return stack->capacity == stack->size;
}

bool is_empty(Stack *stack) {
    return stack->size == 0;
}

bool push_stack(Stack *stack, int item) {
    if (is_full(stack)) {
        return false;
    }

    stack->collection[stack->size] = item;
    stack->size++;

    return true;
}

bool peek_stack(Stack *stack, int *item) {
    if (is_empty(stack)) {
        return false;
    }
    *item = stack->collection[stack->size - 1];
    return true;
}

bool pop_stack(Stack *stack, int *item) {
    if (is_empty(stack)) {
        return false;
    }
    *item = stack->collection[stack->size - 1];
    stack->collection[stack->size - 1] = -1;
    stack->size--;
}