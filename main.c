#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    FILE *source, *target;

    source = fopen("Desktop\t.txt", "r");
    target = fopen("Documents", "r");
    fscanf(source, "%s", &s [0]);

//  COPY
    fputc(ch, target);

//  REMOVE
    ch = fgetc(FILE *stream);
    remove(ch);

//  MOVE
    fputc(ch, target);
    ch = fgetc(FILE *stream);
    remove(ch);
}


