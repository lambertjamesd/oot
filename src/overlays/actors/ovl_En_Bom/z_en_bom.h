#ifndef _Z_EN_BOM_H_
#define _Z_EN_BOM_H_

#include <ultra64.h>
#include <global.h>

struct EnBom;

typedef struct EnBom {
    /* 0x0000 */ Actor actor;
    /* 0x014C */ char unk_14C[0xBC];
} EnBom; // size = 0x0208

extern const ActorInit En_Bom_InitVars;

#endif
