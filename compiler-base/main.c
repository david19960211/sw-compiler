#include <stdio.h>
#include <stdlib.h>

#include "compiler.h"

int main()
{
    /* loading the input & output files */
    char fname[LEN_ID];
    printf("Input file name:\t");
    scanf("%s", fname);

    if ((fin = fopen(fname, "r")) == NULL)
    {
        puts("cannot read the code file");
        exit(1);
    }

    parsing();
    processing();
}


