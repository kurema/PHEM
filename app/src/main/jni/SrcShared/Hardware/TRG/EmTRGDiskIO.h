/* -*- mode: C++; tab-width: 4 -*- */
/* ===================================================================== *\
	Copyright (c) 2000-2001 Palm, Inc. or its subsidiaries.
	All rights reserved.

	This file is part of the Palm OS Emulator.

	This program is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; either version 2 of the License, or
	(at your option) any later version.
\* ===================================================================== */

#ifndef EmTRGDiskIO_h
#define EmTRGDiskIO_h

#include "EmTRGCFDefs.h"
#include "EmTRGDiskType.h"

#include <stdio.h>				// FILE

#define DISKFILE_NAME  "trgdrv.dat"

typedef struct {
	uint32            DriveNum;
	LogicalBlockAddr  Lba;
	uint32            SectorCnt;
} DiskIOParams; 

typedef enum {
	DIO_SUCCESS     = 0,
	DIO_ERROR       = 1
} DiskIOStatus;

typedef enum {
	DIO_DATA_COMPLETE   = 0,
	DIO_MORE_DATA       = 1
} DiskDataStatus;

typedef enum {
	DIO_ERR_NONE    = 0,
	DIO_ERR_GENERIC = 1
} DiskIOError;

typedef struct {
	LogicalBlockAddr	Lba;
	uint32			NumSectorsRequested;
	uint32			NumSectorsCompleted;
	EmSector		Sector;
	int                     SectorIndex;
	DiskIOStatus		Status;
	DiskIOError             Error;
} DiskIOState; 

class EmDiskIO 
{
	public:
					EmDiskIO				(void);
	 virtual			~EmDiskIO				(void);

	// EmRegs overrides
	void			Initialize(EmDiskTypeID DiskTypeID);
	void			Dispose(void);
	void                    Reset(void);
	void			StartDriveID(void);
	void			ReadNextDataByte(uint8 * val);
	void			WriteNextDataByte(uint8 val);
	uint32			GetSectorCount(void);
	void			StartRead(DiskIOParams * params);
	void			StartWrite(DiskIOParams * params);
	void			GetStatus(DiskIOStatus *   status,
				          DiskDataStatus * dataStatus);
	DiskIOError  		GetError(void);

private:
	FILE *			myFile;
	char * 			GetFileName(void);
	EmDiskTypeID		DiskTypeID;
	EmCurrDiskType		CurrDisk;
	DiskIOStatus		WriteSector(void);
	DiskIOStatus		ReadSector(void);
	void			CloseFile(void);
	DiskIOState		State;
	DiskIOStatus		TryToRead(void);
	DiskIOStatus		TryToWrite(void);
	DiskIOStatus		TryToFormat(void);
	DiskIOStatus		Format(void);
};

#endif	/* EmTRGDiskIO_h */
