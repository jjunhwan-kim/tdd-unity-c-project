
#ifndef MODE_H
#define MODE_H

#include "common.h"

PUBLIC unsigned char IsModeValid(unsigned char mode);
PUBLIC void setMode(unsigned char newMode);
PUBLIC unsigned char getMode();
PRIVATE unsigned char IsModeClear(unsigned char mode);
#endif  // MODE_H
