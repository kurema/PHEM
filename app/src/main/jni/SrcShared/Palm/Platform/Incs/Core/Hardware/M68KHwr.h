/******************************************************************************
 *
 * Copyright (c) 1995-1999 Palm Computing, Inc. or its subsidiaries.
 * All rights reserved.
 *
 * File: M68KHwr.h
 *
 * Description:
 *		Pilot debugger remote hardware/system info 
 *
 * History:
 *   	1/18/95  RM - Created by Ron Marianetti
 *
 *****************************************************************************/

#ifndef __M68KHWR_H
#define __M68KHWR_H

// Pilot common definitions
#include <PalmTypes.h>


/***********************************************************************
 * Breakpoint words we use
 ***********************************************************************/
#define m68kTrapInstr			0x4E40
#define m68kTrapVectorMask		0x000F

/***********************************************************************
 * 68000 Exception Vector table
 ***********************************************************************/
typedef struct M68KExcTableType {
	uint32_t	initStack;								// initial stack pointer
	uint32_t	initPC;									// initial PC
	
	uint32_t	busErr;									// 08 
	uint32_t	addressErr;								// 0C  
	uint32_t	illegalInstr;							// 10  
	uint32_t	divideByZero;							// 14  
	uint32_t	chk;										// 18
	uint32_t	trap;										// 1C
	uint32_t	privilege;								// 20
	uint32_t	trace;									// 24
	uint32_t	aTrap;									// 28
	uint32_t	fTrap;									// 2C
	uint32_t	reserved12;								// 30
	uint32_t	coproc;									// 34
	uint32_t	formatErr;								// 38
	uint32_t	unitializedInt;						// 3C
	
	uint32_t	reserved[8];							// 40-5C
	
	uint32_t	spuriousInt;							// 60
	uint32_t	autoVec1;								// 64
	uint32_t	autoVec2;								// 68
	uint32_t	autoVec3;								// 6C
	uint32_t	autoVec4;								// 70
	uint32_t	autoVec5;								// 74
	uint32_t	autoVec6;								// 78
	uint32_t	autoVec7;								// 7C
	
	uint32_t	trapN[16];								// 80 - BC
	
	uint32_t	unassigned[16];						// C0 - FC
	} M68KExcTableType;
 
 

/**************************************************************************************
 *  structure for the Motorolla 68000 processor registers (variables).
 *
 *	WARNING:
 *	This structure is used as the body of the 'read regs' command response
 *  packet.  Any changes to it will require changes in the nub's code.
 *
 **************************************************************************************/
typedef struct M68KRegsType {
	uint32_t	d[8];							/*  data registers  */
	uint32_t	a[7];							/*  address registers  */
	uint32_t	usp;							/*  user stack pointer  */
	uint32_t	ssp;							/*  supervisor stack pointer  */
	uint32_t	pc;							/*  program counter  */
	uint16_t	sr;							/*  status register  */
} M68KRegsType;



 
/**************************************************************************************
 *  bit masks for testing M68000 status register fields
 **************************************************************************************/

/* trace mode */
#define	m68kSrTraceMask			0x08000
#define	m68kSrTraceBit				15

/* supervisor state */
#define	m68kSrSupervisorMask		0x02000

/* interrupt mask */
#define	m68kSrInterruptMask		0x00700
#define	m68kSrInterruptOffset	8			/* offset for right-shifting interrupt mask */

/* condition codes */
#define	m68kSrExtendMask			0x00010
#define	m68kSrNegativeMask		0x00008
#define	m68kSrZeroMask				0x00004
#define	m68kSrOverflowMask		0x00002
#define	m68kSrCarryMask			0x00001



#endif	//__M68KHWR_H
