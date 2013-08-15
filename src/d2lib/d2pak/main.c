#include <stdio.h>
#include <stdint.h>



void main()
{
    char a[]="Hello World";
    uint32_t    ret;

    ret = 0;
    str2hash1(a, &ret);
    printf("%lu\n",ret);
}
