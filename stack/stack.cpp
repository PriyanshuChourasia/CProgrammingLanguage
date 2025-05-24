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
bool push(Stack *stack, int item);
bool peek(Stack *stack ,int *item);

int main() {
    Stack *stack = create_stack(5);

    if (stack == NULL) {
        printf("Error creating stack. \n");
        return 1;
    }

    if (is_empty(stack)) {
        printf("Stack is empty\n");
    }
    
    push(stack,34);
    push(stack,56);
    push(stack,67);
    push(stack,99);
    push(stack,103);
    printf("Stack size: %d\n",stack->size);
    
    if(is_full(stack)){
    	printf("Stack is full.\n");
	}
	
	bool try_push = push(stack,5);
	
	if(try_push == false){
		printf("Push failed\n");
	}
	
	int peek_val = 0;
	peek(stack,&peek_val);
	
	printf("Peek val %d\n",peek_val);
	
	int pop_val = 0;
	
	for(int i=0; i<5; i++)
	{
		pop(stack,&pop_val);
		printf("Popped value: %d\n",pop_val);
	}
	
	bool try_pop = pop(stack,&pop_val);
	
	if(try_pop == false){
		printf("Pop failed\n");
	}
	
	bool try_peek = peek(stack,&peek_val);
	if(try_peek == false){
		printf("Peek failed \n");
	}

	destroy_stack(stack);

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
    return stack->capacity == stack->size;
}

// check stack is empty or not
bool is_empty(Stack *stack) {
    return stack->size == 0;
}

bool push(Stack *stack, int item){
	if(is_full(stack)){
		return false;
	}
	
	stack->collection[stack->size] = item;
	stack->size++;
	
	
	return true;
}

bool peek(Stack *stack, int *item){
	if(is_empty(stack)){
		return false;
	}
	
	*item = stack->collection[stack->size - 1];
	
	return true;
}

bool pop(Stack *stack, int *item){
	if(is_empty(stack)){
		return false;
	}
	stack->size--;
	*item = stack->collection[stack->size];
	
	
	return true;
}

