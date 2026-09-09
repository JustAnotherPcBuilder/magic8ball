#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 120
int main()
{
    char *question = NULL;
    ssize_t max = BUFFER_SIZE;
    getline(&question, &max, stdin);
    printf("Your question: %s\n", question);

    free(question);
    return 0;
}
