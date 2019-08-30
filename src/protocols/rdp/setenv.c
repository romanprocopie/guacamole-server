#include "setenv.h"

int setenv(const char *name, const char *value, int overwrite)
{
    // alloc memory for name, equal sign, value and the terinating character
    char *nameval = (char *)malloc(sizeof(char)*(strlen(name) + strlen(value) + 2));
    if (nameval != 0) // not null
    {
        strcpy(nameval, name);
        strcat(nameval,"=");
        strcat(nameval,value);
        putenv(strcat(name, value));
        free(nameval);
    }
}