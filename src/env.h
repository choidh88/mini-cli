#ifndef __ENV_H__
#define __ENV_H__

#include <stdlib.h>

char *getMessageEnv() {
    char *result = getenv("MESSAGE");
    if (result == NULL) return "(THE MESSAGE IS EMTPY)";
    return result;
}

#endif