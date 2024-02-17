#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *check_parity(void *arg) {
    int number = *(int *)arg;
    if (number % 2 == 0) {
        printf("%d is even (Thread).\n", number);
    } else {
        printf("%d is odd (Thread).\n", number);
    }

    return NULL;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    pthread_t tid;
    pthread_create(&tid, NULL, check_parity, &number);
    pthread_join(tid, NULL);

    printf("Parent process has completed.\n");

    return 0;
}
