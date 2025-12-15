#include <stdio.h>
#include <stdlib.h>
#include "env.h"

int main() {
    printf("Hello, %s!\n", getUserEnv());
    printf("This is your message: \"%s\"\n", getMessageEnv());

    return 0;
}