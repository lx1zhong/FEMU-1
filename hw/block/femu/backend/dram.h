#ifndef __FEMU_MEM_BACKEND
#define __FEMU_MEM_BACKEND

/**
 * @file dram.h
 * @brief dram后端相关定义
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdint.h>

/* DRAM backend SSD address space */
typedef struct SsdDramBackend {
    void    *logical_space;
    int64_t size; /* in bytes */
    int     femu_mode;
} SsdDramBackend;

int init_dram_backend(SsdDramBackend **mbe, int64_t nbytes);
void free_dram_backend(SsdDramBackend *);

int backend_rw(SsdDramBackend *, QEMUSGList *, uint64_t *, bool);

#endif
