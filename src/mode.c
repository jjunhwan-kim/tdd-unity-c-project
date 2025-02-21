#include "mode.h"

#include "mode_validator.h"

PRIVATE unsigned char mode;

PUBLIC unsigned char IsModeValid(unsigned char mode) {
  if (IsModeNotSupported(mode)) {
    return 0;
  }

  return 1;
}

PUBLIC void setMode(unsigned char newMode) { mode = newMode; }

PUBLIC unsigned char getMode() { return mode; }

PRIVATE unsigned char IsModeClear(unsigned char mode) {
  if (mode == 0) {
    return 1;
  }

  return 0;
}