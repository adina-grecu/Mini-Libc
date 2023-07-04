#include <unistd.h> 
#include <stdio.h>  
#include <string.h>

int puts(const char *str)
{
    write(1, str, strlen(str) + 1); 
    write(1, "\n", 1);      
    return 0;               
}
