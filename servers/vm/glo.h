
#include <minix/sys_config.h>
#include <minix/type.h>
#include <minix/param.h>
#include <sys/stat.h>
#include <a.out.h>
#include <tools.h>

#include "vm.h"
#include "vmproc.h"

#if _MAIN
#undef EXTERN
#define EXTERN
#endif

#define VMP_EXECTMP	_NR_PROCS
#define VMP_NR		_NR_PROCS+1

EXTERN struct vmproc vmproc[VMP_NR];

EXTERN kinfo_t kernel_boot_info;

#if SANITYCHECKS
EXTERN int nocheck;
EXTERN int incheck;
EXTERN long vm_sanitychecklevel;
#endif

/* total number of memory pages */
EXTERN int total_pages;

EXTERN int meminit_done;
