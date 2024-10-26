#include "stack.h"
#include <stdio.h>

// Funktion til at tilføje et element til køen (enqueue)
void enqueue(stack *s1, int x) {
    push(x, s1);
}

// Funktion til at fjerne et element fra køen (dequeue)
int dequeue(stack *s1, stack *s2) {
    if (empty(s1) && empty(s2)) {
        return -1; // Køen er tom
    }

    // Hvis stack2 er tom, overfør alle elementer fra stack1 til stack2
    if (empty(s2)) {
        while (!empty(s1)) {
            int temp = pop(s1);
            push(temp, s2);
        }
    }

    // Pop det øverste element fra stack2
    return pop(s2);
}

int main() {
    stack s1, s2;
    initialize(&s1);
    initialize(&s2);

    enqueue(&s1, 1);
    enqueue(&s1, 2);
    enqueue(&s1, 3);

    printf("Dequeued: %d\n", dequeue(&s1, &s2)); // Output: 1
    printf("Dequeued: %d\n", dequeue(&s1, &s2)); // Output: 2
    printf("Dequeued: %d\n", dequeue(&s1, &s2)); // Output: 3

    return 0;
}
