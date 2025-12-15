#include "env.h"
#include <stdlib.h>

char *getMessageEnv() {
    char *result = getenv("MESSAGE");
    if (result == NULL) return "(THE MESSAGE IS EMPTY)";
    return result;
}

char *getUserEnv() {
    char *result = getenv("USER");
    if (result == NULL) return "(USER IS UNKNOWN)";
    return result;
}