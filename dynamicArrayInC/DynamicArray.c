// Dynamic Arrays

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *items;
    size_t count;
    size_t capacity;
}Numbers;


int main() {
    Numbers xs = {0};
    for (int i=0; i<20; ++i) {
        if (xs.count >= xs.capacity) {
            if (xs.capacity == 0) {
                xs.capacity = 256;
            }else {
                xs.capacity = xs.capacity * 2;
            }
            xs.items = realloc(xs.items,xs.capacity*sizeof(*xs.items));
        }
        xs.items[xs.count++] = i;
    }

    for (size_t i=0; i<xs.count; ++i) {
        printf("%d\n",xs.items[i]);
    }
    return 0;
}