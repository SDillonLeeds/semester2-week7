#include <stdio.h>
#include <stdlib.h>

static unsigned long long factorial(int n) {
    if (n==0) {return 1; /* Base case */}
    return n * factorial(n - 1); //Recurse
}

int main(int argc, char** argv) {
    if (argc != 2) {
        fprintf(stderr, "Usage: ./factorial <value>\n");
        return 1;
    }

    int value = atoi(argv[1]);
    unsigned long long result = factorial(value);

    printf("%d! = %llu\n", value, result);

    return 0;
}
