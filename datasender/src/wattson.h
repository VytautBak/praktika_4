#include "iotp_device.h"
#include <stdbool.h>
#ifndef WATTSON_H
#define WATTSON_H

int init_wattson(IoTPConfig **config, IoTPDevice **device, int argc, char argv[]);
int wattson_end(IoTPDevice *device, IoTPConfig *config);

#endif



