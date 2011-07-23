
#ifndef __HERBSTLUFT_COMMAND_H_
#define __HERBSTLUFT_COMMAND_H_

#include "glib.h"
#include <stdbool.h>

typedef int (*HerbstCmd)(int argc,      // number of arguments
                         char** argv,   // array of args
                         GString** output  // result-data/stdout
                        );
typedef int (*HerbstCmdNoOutput)(int argc,  // number of arguments
                         char** argv        // array of args
                        );

#define CMD_BIND(FUNC) \
    { .cmd = { .standard = (FUNC) }, .name = #FUNC, .has_output = 1 }


typedef struct CommandBinding {
    union {
        HerbstCmd standard;
        HerbstCmdNoOutput no_output;
    } cmd;
    char*   name;
    bool    has_output;
} CommandBinding;

extern CommandBinding g_commands[];

int call_command(int argc, char** argv, GString** output);
int call_command_no_ouput(int argc, char** argv);

#endif

