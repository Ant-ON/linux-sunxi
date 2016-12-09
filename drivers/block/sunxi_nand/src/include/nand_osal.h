/*
 * Copyright (C) 2013 Allwinnertech, kevin.z.m <kevin@allwinnertech.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __NAND_OSAL_H__
#define __NAND_OSAL_H__

#include "../../include/type_def.h"
#include "../../nfd/nand_user_cfg.h"
#include <linux/string.h>
#include <linux/slab.h>

extern void *NAND_IORemap(unsigned int base_addr, unsigned int size);

//USE_SYS_CLK
extern int NAND_ClkRequest(void);
extern void NAND_ClkRelease(void);
extern int NAND_AHBEnable(void);
extern void NAND_AHBDisable(void);
extern int NAND_ClkEnable(void);
extern void NAND_ClkDisable(void);
extern int NAND_SetClk(unsigned int nand_clk);
extern int NAND_GetClk(void);

extern void* NAND_RequestDMA(void);
extern int NAND_ReleaseDMA(void);
extern void NAND_DMAConfigStart(int rw, unsigned int buff_addr, int len);
extern int NAND_QueryDmaStat(void);
extern int NAND_WaitDmaFinish(void);

extern void NAND_EnRbInt(void);
extern void NAND_ClearRbInt(void);
extern int NAND_WaitRbReady(void);
extern void NAND_RbInterrupt(void);

//define the memory set interface
#define MEMSET(x,y,z)            			memset((x),(y),(z))

//define the memory copy interface
#define MEMCPY(x,y,z)                   	memcpy((x),(y),(z))

//define the memory alocate interface
#define MALLOC(x)                       	kmalloc((x), GFP_KERNEL)

//define the memory release interface
#define FREE(x,size)                    	kfree((x))
//define the message print interface
#define PRINT(...)							printk(KERN_WARNING __VA_ARGS__)

#define DBUG_MSG(...)

#define DBUG_INF(...)                       printk(KERN_WARNING __VA_ARGS__)


#endif //__NAND_OSAL_H__
