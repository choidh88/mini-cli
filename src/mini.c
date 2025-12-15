#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Goodbye, World!\n");
    printf("This is your message: \"%s\"\n", getenv("MESSAGE"));

    return 0;
}