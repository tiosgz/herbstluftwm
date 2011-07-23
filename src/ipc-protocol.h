
#ifndef __HERBST_IPC_PROTOCOL_H_
#define __HERBST_IPC_PROTOCOL_H_


#define HERBST_IPC_CLASS "HERBST_IPC_CLASS"
//#define HERBST_IPC_READY "HERBST_IPC_READY"
//#define HERBST_IPC_ATOM  "_HERBST_IPC"
#define HERBST_IPC_SUCCESS "OK"
#define HERBST_IPC_ARGC_ATOM "_HERBST_IPC_ARGC"
#define HERBST_IPC_ARGV_ATOM "_HERBST_IPC_ARGV"

// function exit codes
enum {
    HERBST_EXIT_SUCCESS = 0,
    HERBST_COMMAND_NOT_FOUND,
    HERBST_INVALID_ARGUMENT,
};

#endif

