
#include "library.h"

#include <stdio.h>

void hello(void)
{
    printf("Hello, World!\n");
}



#ifdef PROJB_USE_HELLO
void hello_projB(void)
{
    printf("Hello, World from ProjA!\n");
}
#endif
