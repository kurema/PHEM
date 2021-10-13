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

#ifndef EmRegsPrv_h
#define EmRegsPrv_h

#include "EmMemory.h"			// EmMemDoGet8, EmMemDoPut8, etc.

// Inline functions for reading/writing registers.

inline int8		_get_reg (int8_t* a)				{ return EmMemDoGet8 (a); }
inline int16	_get_reg (int16_t* a)				{ return EmMemDoGet16 (a); }
inline int32	_get_reg (int32_t* a)				{ return EmMemDoGet32 (a); }

inline uint8	_get_reg (uint8_t* a)				{ return EmMemDoGet8 (a); }
inline uint16	_get_reg (uint16_t* a)			{ return EmMemDoGet16 (a); }
inline uint32	_get_reg (uint32_t* a)			{ return EmMemDoGet32 (a); }

inline void		_put_reg (int8_t* a, int8_t v)		{ EmMemDoPut8 (a, v); }
inline void		_put_reg (int16_t* a, int16_t v)	{ EmMemDoPut16 (a, v); }
inline void		_put_reg (int32_t* a, int32_t v)	{ EmMemDoPut32 (a, v); }

inline void		_put_reg (uint8_t* a, uint8_t v)	{ EmMemDoPut8 (a, v); }
inline void		_put_reg (uint16_t* a, uint16_t v)	{ EmMemDoPut16 (a, v); }
inline void		_put_reg (uint32_t* a, uint32_t v)	{ EmMemDoPut32 (a, v); }

#endif	// EmRegsPrv_h
