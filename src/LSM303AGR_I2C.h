#ifndef LSM303AGR_I2C__H
#define LSM303AGR_I2C__H

#include <stdint.h>

struct LSM303AGR_I2C
{
    using i2cErrorPrinter = void(*)(const uint8_t);
    using i2cHandler = uint8_t(*)(uint8_t, uint8_t, uint8_t *, uint8_t);

    i2cErrorPrinter errorPrinterFunction;
    i2cHandler readFunction;
    i2cHandler writeFunction;
};

#endif // LSM303AGR_I2C__H
