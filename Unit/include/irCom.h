#include <Adafruit_MCP23008.h>
#include <IRremoteESP8266.h>
#include <IRsend.h>
#include <IRrecv.h>
#include <IRutils.h>
#include <Wire.h>
#include "defines.h"

void setupIR(Adafruit_MCP23008 &mcp, IRrecv &irrecv, IRsend &irsend);

bool loopIR(Adafruit_MCP23008 &mcp, IRrecv &irrecv, IRsend &irsend, irDir* irDir, uint8_t ID);