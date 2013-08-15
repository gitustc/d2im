#include <stdio.h>
#include <stdint.h>



int main(int argc, char *argv[])
{
    uint32_t    ret=0;

    str2hash1(argv[1], &ret);
    printf("%lu\n",ret);
    return 0;
}
