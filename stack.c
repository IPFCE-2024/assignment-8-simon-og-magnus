#include "stack.h"
#include <stdlib.h>
#include <stdio.h>

void initialize(stack *s) {
    s->head = NULL;
}

void push(int element, stack *s) {
    node *n = (node *)malloc(sizeof(node));
    if (n == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    n->data = element;
    n->next = s->head;
    s->head = n;
}

int pop(stack *s) {
    if (empty(s)) {
        return -1;
    }

    int gemtvardi = s->head->data;
    node *temp = s->head;
    s->head = s->head->next;
    free(temp);
    return gemtvardi;
}

bool empty(stack *s) {
    return s->head == NULL;
}

bool full(stack *s) {
    return false;
}
