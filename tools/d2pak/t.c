#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>





/*
 * tad -u8   x   file
 * tad -u16  x   file
 * tad -u32  x   file
 *               file
 * tad -i8   x   file
 * tad -i16  x   file
 * tad -i32  x   file
 *               file
 */

int main(int argc, char* argv[])
{

    FILE            *fp;
    uint8_t         u8;
    uint16_t        u16;
    uint32_t        u32;
    int8_t          i8;
    int16_t         i16;
    int32_t         i32;

    fp=fopen("./test","ab+");


    u32=0;
    u16=0;
    fread(&u32, 4, 1, fp);
    printf("%lu\n", u32);
    fread(&u32, 4, 1, fp);
    printf("%lu\n", u32);
    fread(&u16, 2, 1, fp);
    printf("%u\n", u16);

    fclose(fp);
    return 0;
}
