// $Id: frq_meter.h 1144 2011-03-13 17:17:38Z tk $
/*
 * Header file for Frequency Meter
 *
 * ==========================================================================
 *
 *  Copyright (C) 2011 Thorsten Klose (tk@midibox.org)
 *  Licensed for personal non-commercial use only.
 *  All other rights reserved.
 * 
 * ==========================================================================
 */

#ifndef _FRQ_METER_H
#define _FRQ_METER_H


/////////////////////////////////////////////////////////////////////////////
// Global definitions
/////////////////////////////////////////////////////////////////////////////

#define FRQ_METER_NO_UPDATE 0x00000000
#define FRQ_METER_TOO_LOW   0x00000001
#define FRQ_METER_TOO_HIGH  0xffffffff


/////////////////////////////////////////////////////////////////////////////
// Global Types
/////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////
// Prototypes
/////////////////////////////////////////////////////////////////////////////

extern s32 FRQ_METER_Init(u32 mode);
extern u32 FRQ_METER_Tick(void);


/////////////////////////////////////////////////////////////////////////////
// Export global variables
/////////////////////////////////////////////////////////////////////////////

extern u32 frq_meter_current_frq;

#endif /* _FRQ_METER_H */