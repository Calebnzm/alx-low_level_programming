#include <stddef.h>


char *_strpbrk(char *s, char *accept) {
    while (*s != '\0') {
        char *ptr = accept;
        while (*ptr != '\0') {
            if (*s == *ptr) {
                return s;
            }
            ptr++;
        }
        s++;
    }
    return NULL;
}
