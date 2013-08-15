#ifndef _D2PAK_H_
#define _D2PAK_H_


typedef struct {
    uint32_t        binfo;
}d2pak_header;


typedef struct {
    d2pak_header    d2phd;

}d2pak;


typedef struct {
    uint32_t        start;
    uint32_t        length;
    uint32_t        binfo;
}d2finfo;





void str2hash1(const char *, uint32_t *);
void str2hash2(const char *, uint32_t *);
void str2hash3(const char *, uint32_t *);





#endif
