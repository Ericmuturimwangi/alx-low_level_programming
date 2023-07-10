#include <stdlib.h>
#include <string.h>

char* str_concat(char* s1, char* s2) {
    // Treat NULL strings as empty strings
    if (s1 == NULL) {
        s1 = "";
    }
    if (s2 == NULL) {
        s2 = "";
    }

    size_t len1 = strlen(s1);
    size_t len2 = strlen(s2);
    size_t totalLen = len1 + len2;

    char* result = (char*)malloc((totalLen + 1) * sizeof(char));

    if (result == NULL) {
        return NULL; // Memory allocation failed
    }

    strcpy(result, s1);
    strcat(result, s2);

    return result;
}

