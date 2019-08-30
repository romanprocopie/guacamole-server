#include "setenv.h"

int setenv(const char *name, const char *value, int overwrite)
{
    // alloc memory for name, equal sign, value and the terinating character
    char *nameval = new char[strlen(name) + strlen(value) + 2)];
    strcpy(nameval, name);
    strcat(nameval,"=");
    strcat(nameval,value);
    putenv(strcat(name, value));
    delete [] nameval;
}