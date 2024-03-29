#include "SDL.h"

//Front end data:
int cpuRuntime();
int pcopenrom();
int pcsetuprom();

//Back end data:
int initTable();
void (*inst_table[256])();
int GUI_ACTIVE;

//GUI data:
int initGUI();
int refreshGUI();
SDL_Event e;

//CPU data
FILE *rom_file;
struct sbank {unsigned char *bank;};
struct sbank rom[256];
unsigned char *ram;
unsigned char a,b,c,d; //Registers: a: Accumulator | b: Logical Accumulator | c: RAM pointer | d: ROM pointer

//Instructions:
//...
//I'll do this later
