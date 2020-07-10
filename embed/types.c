#include "libc/types.h"

static const char* mbederror_tab[18] = {
    "None",                // No error.
    "No Memory",
    "No Strorage",
    "No Back End",
    "Invalid Credentials",
    "Unsupported Command",
    "Invalid State",
    "Not Ready",
    "Busy",
    "Denied",
    "Unkown",
    "Invalid Parameters",
    "Write Error",
    "Read Error",
    "Init Failed",
    "Too Big",
    "Not Found",
    "Interrupt Error"
};

const char *mbederror(mbed_error_t error) {
      if (error <= MBED_ERROR_INTR) {
          return mbederror_tab[error];
      }
      return 0;
  }
