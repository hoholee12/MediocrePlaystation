#pragma once

//https://problemkaputt.de/psx-spx.htm

//memory maps for CPU bus
#define KUSEG_OFFSET 0x0
#define KSEG0_OFFSET 0x80000000
#define KSEG1_OFFSET 0xA0000000
#define KSEG2_OFFSET 0xC0000000

#define EXPANSION_REGION_1 0x1F000000
#define SCRATCHPAD 0x1F800000
#define IO_PORTS 0x1F801000
#define EXPANSION_REGION_2 0x1F802000
#define EXPANSION_REGION_3 0x1FA00000
#define BIOS_ROM 0x1FC00000
#define IO_PORTS_KSEG2 0xFFFE0000
#define ANYTHING_ELSE_IS_RAM 0x0

//memory maps for VRAM
#define VRAM_SIZE 0x00100000
#define TEXTURE_CACHE_SIZE 0x00000800

//memory maps for SOUND RAM
#define SOUND_RAM_SIZE 0x00080000

//memory maps for CDROM CONTROLLER RAM
#define CDROM_RAM_SIZE 0x00000200

//memory maps for CDROM CONTROLLER ROM
#define CDROM_ROM_SIZE 0x00004200

//memory maps for CDROM BUFFER
#define CDROM_BUF_SIZE 0x00008000

//memory maps for MEMCARD
#define MEMCARD_SIZE 0x00020000

