#ifndef SERIAL_PRINT_H_
#define SERIAL_PRINT_H_

#include "main.h"


typedef enum
{
  EndPoint_UART3                   = 0x00,
  EndPoint_USB,
  EndPoint_All,
} Endpoints;


void PrintSerial_int(int16_t v, Endpoints endpoint);
void PrintSerial_char(char v, Endpoints endpoint);
void PrintSerial_string(const char * v, Endpoints endpoint);
void PrintSerial_stringptr(const char * v, uint16_t len, Endpoints endpoint);
void PrintSerial_long(int32_t v, Endpoints endpoint);
void PrintSerial_double(double v, Endpoints endpoint);
void PrintSerial_float(float v, Endpoints endpoint);
void PrintSerial_hexchar(char v, Endpoints endpoint);
void PrintlnSerial_int(int16_t v, Endpoints endpoint);
void PrintlnSerial_char(char v, Endpoints endpoint);
void PrintlnSerial_string(const char * v, Endpoints endpoint);
void PrintlnSerial_stringptr(const char * v, uint16_t len, Endpoints endpoint);
void PrintlnSerial_long(int32_t v, Endpoints endpoint);
void PrintlnSerial_double(double v, Endpoints endpoint);
void PrintlnSerial_float(float v, Endpoints endpoint);
void PrintlnSerial_hexstring(uint8_t v[], uint8_t len, Endpoints endpoint);
void PrintlnSerial(Endpoints endpoint);
#endif
