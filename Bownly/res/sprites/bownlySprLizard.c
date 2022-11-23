#pragma bank 9

//AUTOGENERATED FILE FROM png2asset

#include <stdint.h>
#include <gbdk/platform.h>
#include <gbdk/metasprites.h>

BANKREF(bownlySprLizard)

const palette_color_t bownlySprLizard_palettes[4] = {
	RGB8(255, 255, 255), RGB8(153, 229, 80), RGB8(106, 190, 48), RGB8(34, 32, 52)
};

const uint8_t bownlySprLizard_tiles[112] = {
	0x07,0x07,0x08,0x0f,0x10,0x1f,0x10,0x1f,0x10,0x1f,0x10,0x1f,0x10,0x1f,0x08,0x0f,
	0xe0,0xe0,0x10,0xf0,0xc8,0xf8,0xe6,0xbe,0xe1,0xff,0x0e,0xfe,0x01,0xff,0x0e,0xfe,
	0x08,0x0f,0x78,0x7f,0x40,0x7f,0x78,0x7f,0x2b,0x3f,0x39,0x3f,0x0f,0x0f,0x00,0x00,
	0x1e,0xfe,0x02,0xfe,0x1e,0xfe,0x10,0xf0,0xd0,0xf0,0x50,0x70,0x48,0x78,0x78,0x78,
	0xf0,0xf0,0x08,0xf8,0xc6,0xfe,0xe1,0xbf,0xe6,0xfe,0x08,0xf8,0x06,0xfe,0x01,0xff,
	0x78,0x7f,0x40,0x7f,0x78,0x7f,0x10,0x1f,0x2b,0x3f,0x3a,0x3e,0x09,0x0f,0x0f,0x0f,
	0x1e,0xfe,0x1e,0xfe,0x02,0xfe,0x1e,0xfe,0xd0,0xf0,0x48,0x78,0x78,0x78,0x00,0x00
};

const metasprite_t bownlySprLizard_metasprite0[] = {
	METASPR_ITEM(-12, -8, 0, 0), METASPR_ITEM(0, 8, 1, 0), METASPR_ITEM(8, -8, 2, 0), METASPR_ITEM(0, 8, 3, 0), METASPR_TERM
};

const metasprite_t bownlySprLizard_metasprite1[] = {
	METASPR_ITEM(-12, -8, 0, 0), METASPR_ITEM(0, 8, 4, 0), METASPR_ITEM(8, -8, 5, 0), METASPR_ITEM(0, 8, 6, 0), METASPR_TERM
};

const metasprite_t* const bownlySprLizard_metasprites[2] = {
	bownlySprLizard_metasprite0, bownlySprLizard_metasprite1
};
