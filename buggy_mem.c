#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int *p = malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++) p[i] = i; 
    char *q = malloc(100);
    strcpy(q, "Codigo arreglado!");
    printf("%s\n", q);
    free(q);
    free(p);
    return 0;
}