#include "fatfs.h"

uint8_t retSD;
char    SDPath[4];
FATFS   SDFatFS;
FIL     SDFile;

void dsy_fatfs_init(void)
{
    retSD = FATFS_LinkDriver(&SD_Driver, SDPath);
}

DWORD get_fattime(void) 
{
    return 0;
}
