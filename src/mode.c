#include "mode.h"

#include "mode_validator.h"

unsigned char IsModeValid(unsigned char mode) {
  if (IsModeNotSupported(mode)) {
    return 0;
  }

  return 1;
}