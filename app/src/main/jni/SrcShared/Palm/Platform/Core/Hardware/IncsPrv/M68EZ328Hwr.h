/******************************************************************************
 *
 * Copyright (c) 1995-1999 Palm Computing, Inc. or its subsidiaries.
 * All rights reserved.
 *
 * File: M68EZ328Hwr.h
 *
 * Description:
 *		Hardware Equates for the Motorola 68EZ328 Dragonball-EZ chip 
 *
 * History:
 *   	11/13/97  srj	Created from M68328Hwr.h
 *		 3/30/99	 jrb	Added JerryEZ pld defines
 *		 4/ 5/99  jrb	Added JerryEZ pld shadow register bit defines
 *		 5/31/99  SCL	Moved hwr68328Base into this file from <HardwarePrv.h>
 *
 *****************************************************************************/

#ifdef	NON_PORTABLE						// So apps don't include this...


#ifndef	__M68EZ328HWR_H__
#define	__M68EZ328HWR_H__


#include <PalmTypes.h>							// Touchdown includes


//  Define location of the 68328 Dragonball chip
#define	hwr68328Base		0xFFFFF000L					// Base address of 68328 


/***********************************************************************
 * Motorola 68328  registers
 ***********************************************************************/
struct HwrM68EZ328Type {

	uint8_t		scr;								// $000: System Control Register
	uint8_t											___filler0[0x004-0x001];
	uint8_t		chipID;							// $004: Chip ID Register
	uint8_t		maskID;							// $005: Mask ID Register
	uint16_t	swID;								// $006: Software ID Register
	uint8_t											___filler1[0x100-0x008];				 
	
	uint16_t	csAGroupBase;					// $100: Chip Select Group A Base Register
	uint16_t	csBGroupBase;					// $102: Chip Select Group B Base Register
	uint16_t	csCGroupBase;					// $104: Chip Select Group C Base Register
	uint16_t	csDGroupBase;					// $106: Chip Select Group D Base Register

	uint8_t											___filler6[0x110-0x108];

	uint16_t	csASelect;						// $110: Group A Chip Select Register
	uint16_t	csBSelect;						// $112: Group B Chip Select Register
	uint16_t	csCSelect;						// $114: Group C Chip Select Register
	uint16_t	csDSelect;						// $116: Group D Chip Select Register
	
	uint16_t	emuCS;						   // $118: EMU Chip Select Register
	
	uint8_t											___filler2[0x200-0x11A];		
	
	uint16_t	pllControl;						// $200: PLL Control Register
	uint16_t	pllFreqSel;						// $202: PLL Frequency Select Register
	uint16_t	pllTest;							// $204: PLL Test Register (do not access)
	uint8_t											___filler44;
	uint8_t		pwrControl;						// $207: Power Control Register
	
	uint8_t											___filler3[0x300-0x208];
	
	uint8_t		intVector;						// $300: Interrupt Vector Register
	uint8_t											___filler4;
	uint16_t	intControl;						// $302: Interrupt Control Register
	uint16_t	intMaskHi;						// $304: Interrupt Mask Register/HIGH word
	uint16_t	intMaskLo;						// $306: Interrupt Mask Register/LOW word
	uint8_t											___filler7[0x30c-0x308];
	uint16_t	intStatusHi;					// $30C: Interrupt Status Register/HIGH word
	uint16_t	intStatusLo;					// $30E: Interrupt Status Register/LOW word
	uint16_t	intPendingHi;					// $310: Interrupt Pending Register
	uint16_t	intPendingLo;					// $312: Interrupt Pending Register
	
	uint8_t 											___filler4a[0x400-0x314];
	
	uint8_t		portADir;						// $400: Port A Direction Register
	uint8_t		portAData;						// $401: Port A Data Register
	uint8_t		portAPullupEn;					// $402: Port A Pullup Enable (similar to Select on DB)
	uint8_t											___filler8[5];	
	
	uint8_t		portBDir;						// $408: Port B Direction Register
	uint8_t		portBData;						// $409: Port B Data Register
	uint8_t		portBPullupEn;					// $40A: Port B Pullup Enable
	uint8_t		portBSelect;					// $40B: Port B Select Register	
	
	uint8_t											___filler9[4];
	
	uint8_t		portCDir;						// $410: Port C Direction Register
	uint8_t		portCData;						// $411: Port C Data Register
	uint8_t		portCPulldnEn;					// $412: Port C Pulldown Enable
	uint8_t		portCSelect;					// $413: Port C Select Register	
	
	uint8_t											___filler10[4];
	
	uint8_t		portDDir;						// $418: Port D Direction Register
	uint8_t		portDData;						// $419: Port D Data Register
	uint8_t		portDPullupEn;					// $41A: Port D Pull-up Enable
	uint8_t		portDSelect;					// $41B: Port D Select Register
	uint8_t		portDPolarity;					// $41C: Port D Polarity Register
	uint8_t		portDIntReqEn;					// $41D: Port D Interrupt Request Enable
	uint8_t		portDKbdIntEn;					// $41E: Port D Keyboard Interrupt Enable
	uint8_t		portDIntEdge;					// $41F: Port D IRQ Edge Register
	
	uint8_t		portEDir;						// $420: Port E Direction Register
	uint8_t		portEData;						// $421: Port E Data Register
	uint8_t		portEPullupEn;					// $422: Port E Pull-up Enable
	uint8_t		portESelect;					// $423: Port E Select Register
	
	uint8_t											___filler14[4];
	
	uint8_t		portFDir;						// $428: Port F Direction Register
	uint8_t		portFData;						// $429: Port F Data Register
	uint8_t		portFPullupdnEn;				// $42A: Port F Pull-up/down Enable
	uint8_t		portFSelect;					// $42B: Port F Select Register
	
	uint8_t											___filler16[4];
		
	uint8_t		portGDir;						// $430: Port G Direction Register
	uint8_t		portGData;						// $431: Port G Data Register
	uint8_t		portGPullupEn;					// $432: Port G Pull-up Enable
	uint8_t		portGSelect;					// $433: Port G Select Register
	
	uint8_t											___filler2000[0x500-0x434];

	uint16_t	pwmControl;						// $500: PWM Control Register
	uint8_t		pwmSampleHi;    				// $502: PWM Sample - high byte
	uint8_t		pwmSampleLo;					// $503: PWM Sample - low byte
	uint8_t		pwmPeriod;						// $504: PWM Period
	uint8_t		pwmCounter;						// $505: PWM Counter
	
	uint8_t											___filler24[0x600-0x506];
	
	uint16_t	tmr1Control;					// $600: Timer 1 Control Register
	uint16_t	tmr1Prescaler;					// $602: Timer 1 Prescaler Register
	uint16_t	tmr1Compare;					// $604: Timer 1 Compare Register
	uint16_t	tmr1Capture;					// $606: Timer 1 Capture Register
	uint16_t	tmr1Counter;					// $608: Timer 1 Counter Register
	uint16_t	tmr1Status;						// $60A: Timer 1 Status Register
	
	uint8_t											___filler25[0x800-0x60C];
		
	uint16_t	spiMasterData;					// $800: SPI Master Data Register
	uint16_t	spiMasterControl;				// $802: SPI Master Control Register
	
	uint8_t											___filler27[0x900-0x804];
	
	uint16_t	uControl;						// $900: Uart Control Register
	uint16_t	uBaud;							// $902: Uart Baud Control Register
	uint16_t	uReceive;						// $904: Uart Receive Register
	uint16_t	uTransmit;						// $906: Uart Transmit Register
	uint16_t	uMisc;							// $908: Uart Miscellaneous Register
	uint16_t	uNonIntPresc;					// $90A: Uart IRDA Non-Integer Prescaler
	
	uint8_t											___filler28[0xA00-0x90C];
	
	uint32_t	lcdStartAddr;					// $A00: Screen Starting Address Register
	uint8_t											___filler29;
	uint8_t		lcdPageWidth;					// $A05: Virtual Page Width Register
	uint8_t											___filler30[2];
	uint16_t	lcdScreenWidth;				// $A08: Screen Width Register
	uint16_t	lcdScreenHeight;				// $A0A: Screen Height Register
	uint8_t											___filler31[0xA18-0xA0C];
	uint16_t	lcdCursorXPos;					// $A18: Cursor X Position
	uint16_t	lcdCursorYPos;					// $A1A:	Cursor Y Position
	uint16_t	lcdCursorWidthHeight;		// $A1C: Cursor Width and Height
	uint8_t											___filler32;
	uint8_t		lcdBlinkControl;				// $A1F: Blink Control Register
	uint8_t		lcdPanelControl;				// $A20: Panel Interface Control Register
	uint8_t		lcdPolarity;					// $A21: Polarity Config Register
	uint8_t											___filler33;						
	uint8_t		lcdACDRate;						// $A23: ACD (M) Rate Control Register
	uint8_t											___filler34;
	uint8_t		lcdPixelClock;					// $A25: Pixel Clock Divider Register
	uint8_t											___filler35;
	uint8_t		lcdClockControl;				// $A27: Clocking Control Register
	uint8_t											___filler36;
	uint8_t		lcdRefreshRateAdj;			// $A29: Refresh Rate Adjustment Register
	uint8_t											___filler2003[0xA2D-0xA2A];
	uint8_t    lcdPanningOffset;				// $A2D: Panning Offset Register
	
	uint8_t											___filler37[0xA31-0xA2E];
	
	uint8_t		lcdFrameRate;					// $A31: Frame Rate Control Modulation Register
	uint8_t											___filler2004;
	uint8_t		lcdGrayPalette;				// $A33: Gray Palette Mapping Register
	uint8_t		lcdReserved;					// $A34: Reserved
	uint8_t											___filler2005;
	uint16_t	lcdContrastControlPWM;		// $A36: Contrast Control
	
	uint8_t											___filler40[0xB00-0xA38];
	
	uint32_t	rtcHourMinSec;					// $B00: RTC Hours, Minutes, Seconds Register
	uint32_t	rtcAlarm;						// $B04: RTC Alarm Register
	uint8_t											___filler2001[0xB0A-0xB08];
	uint16_t   rtcWatchDog;               // $B0A: RTC Watchdog Timer
	uint16_t	rtcControl;						// $B0C: RTC Control Register
	uint16_t	rtcIntStatus;					// $B0E: RTC Interrupt Status Register
	uint16_t	rtcIntEnable;					// $B10: RTC Interrupt Enable Register
	uint16_t	stopWatch;						// $B12: Stopwatch Minutes
	uint8_t											___filler2002[0xB1A-0xB14];
	uint16_t	rtcDay;							// $B1A: RTC Day
	uint16_t   rtcDayAlarm;					// $B1C: RTC Day Alarm
	
   uint8_t											___filler41[0xC00-0xB1E];

   uint16_t	dramConfig;                // $C00: DRAM Memory Config Register
   uint16_t   dramControl;               // $C02: DRAM Control Register

   uint8_t                                ___filler42[0xD00-0xC04];
	
	uint32_t	emuAddrCompare;				// $D00: Emulation Address Compare Register   
	uint32_t	emuAddrMask;					// $D04: Emulation Address Mask Register
	uint16_t	emuControlCompare;			// $D08: Emulation Control Compare Register
	uint16_t	emuControlMask;				// $D0A: Emulation Control Mask Register
	uint16_t	emuControl;						// $DOC: Emulation Control Register
	uint16_t	emuStatus;						// $D0E: Emulation Status Register
};

typedef volatile struct HwrM68EZ328Type*	HwrM68EZ328Ptr;

#define HwrDBallType HwrM68EZ328Type
#define HwrDBallPtr HwrM68EZ328Ptr


/************************************************************************
 * Jerry EZ cost reduction PLD I/O register
 ***********************************************************************/
typedef struct HwrJerryPLDType {

	uint8_t dspOn;			// pld output turn dsp on/off
	uint8_t unused1;
	uint8_t	chargeOn;		// pld output turn charger on/off
	uint8_t	unused2;
	uint8_t refOn;			// pld output turn 3.0 volt reference on/off
	uint8_t	unused3;
	uint8_t	pipaBiasEnable;	// pld output turn PA bias on/off
	uint8_t	unused4;
	uint8_t	dspReset;		// pld output control dsp reset pin up/down
	uint8_t	unused5;
	uint8_t	ezToDsl;			// pld output comm. pin to dsp
	uint8_t unused6;
	uint8_t	rs232Shdn;		// pld output control rs232 interface chip on/off
	uint8_t	unused7;
	uint8_t	spareOut;		// pld output not used
	uint8_t	unused8;
	uint16_t	dTo3Sln;			// pld input comm. from dsp
	uint16_t	iXtrnl2;			// pld input cradle connector pin
}	HwrJerryPLDType;

typedef	volatile HwrJerryPLDType*	HwrJerryPldPtr;

/************************************************************************
 * Jerry EZ cost reduction.  PLD settings
 ***********************************************************************/
#define hwrJerryPld232Enable				0x80
#define  hwrJerryPld232Disable			0
#define hwrJerryPldChargerOn				0x80
#define  hwrJerryPldChargerOff			0
#define hwrJerryPldPaBiasEnable			0x80
#define  hwrJerryPldPaBiasDisable		0
#define hwrJerryPldRefOn					0x80
#define  hwrJerryPldRefOff					0
#define hwrJerryPldDspSelect				0x80
#define  hwrJerryPldDspDeselect			0
#define hwrJerryPldDspResetAssert		0x80
#define  hwrJerryPldDspResetDeassert	0
#define hwrJerryPldDspPowerOn				0x80
#define  hwrJerryPldDspPowerOff			0

/************************************************************************
 * Jerry EZ cost reduction.  PLD shadow settings
 ***********************************************************************/
#define hwrJerryPldDspOnBit				0x0001
#define hwrJerryPldChargeOnBit			0x0002
#define hwrJerryPldRefOnBit				0x0004
#define hwrJerryPldPaBiasEnableBit		0x0008
#define hwrJerryPldDspResetBit			0x0010
#define hwrJerryPldEzToDslBit				0x0020
#define hwrJerryPldRs232Bit				0x0040

/************************************************************************
 * Chip ID register for EZ
 ***********************************************************************/
 #define hwrEZ328chipIDEZ		0x45

/************************************************************************
 * Mask ID register for EZ
 ***********************************************************************/
#define hwrEZ328maskID0H31J	0x01
#define hwrEZ328maskID0J75C	0x02
#define hwrEZ328maskID1J75C	0x03
#define hwrEZ328maskID0J83G	0x04
 
/************************************************************************
 * LCD Controller Bits
 ************************************************************************/
// lcdCursorXPos Register
#define	hwrEZ328LcdCursorXPosCtlMask			0xC000
	#define	hwrEZ328LcdCursorXPosCtlTrans	0x0000
	#define	hwrEZ328LcdCursorXPosCtlBlack	0x4000
	#define	hwrEZ328LcdCursorXPosCtlReverse	0x8000
	#define  hwrEZ328LcdCursorXPosCtlWhite   0xC000
#define  hwrEZ328LcdCursorXPosValueMask		0x1FF
#define  hwrEZ328LcdCursorYPosValueMask		0x1FF
	
#define hwrEZ328LcdCursorWidthMask			0x1F
   #define  hwrEZ328LcdCursorWidthOffset  0x8
#define hwrEZ328LcdCursorHeightMask			0x1F

// lcdBlinkControl Register
#define	hwrEZ328LcdBlinkControlEnable		0x80 
#define  hwrEZ328LcdBlinkDivisorMask      0x7F

// lcdPanelControl Register
#define	hwrEZ328LcdPanelControlBusMask		0x0C
	#define	hwrEZ328LcdPanelControlBus1Bit	0x00
	#define	hwrEZ328LcdPanelControlBus2Bit	0x04
	#define	hwrEZ328LcdPanelControlBus4Bit	0x08
#define	hwrEZ328LcdPanelControlGrayScale	0x01
#define	hwrEZ328LcdPanelControl4BitGrayScale	0x02

// lcdPolarity Register
#define	hwrEZ328LcdPolarityShiftClock		0x08
#define	hwrEZ328LcdPolarityFLM					0x04
#define	hwrEZ328LcdPolarityLP					0x02
#define	hwrEZ328LcdPolarityPixel				0x01

// lcdClockControl Register
#define	hwrEZ328LcdClockControlEnable			0x80
#define	hwrEZ328LcdClockControl8BitBus			0x40

#define	hwrEZ328LcdClockControlBurstRateMask	0x0F
#define	hwrEZ328LcdClockControlBurstRate1		0x00
#define	hwrEZ328LcdClockControlBurstRate2		0x01
#define	hwrEZ328LcdClockControlBurstRate3		0x02
#define	hwrEZ328LcdClockControlBurstRate4		0x03
#define	hwrEZ328LcdClockControlBurstRate5		0x04
#define	hwrEZ328LcdClockControlBurstRate6		0x05
#define	hwrEZ328LcdClockControlBurstRate7		0x06
#define	hwrEZ328LcdClockControlBurstRate8		0x07
#define	hwrEZ328LcdClockControlBurstRate9		0x08
#define	hwrEZ328LcdClockControlBurstRate10		0x09
#define	hwrEZ328LcdClockControlBurstRate11		0x0A
#define	hwrEZ328LcdClockControlBurstRate12		0x0B
#define	hwrEZ328LcdClockControlBurstRate13		0x0C
#define	hwrEZ328LcdClockControlBurstRate14		0x0D
#define	hwrEZ328LcdClockControlBurstRate15		0x0E
#define	hwrEZ328LcdClockControlBurstRate16		0x0F

#define  hwrEZ328LcdContrastPWMWidthMask			0x00FF
#define  hwrEZ328LcdContrastEnable					0x0100



/************************************************************************
 * Interrupt Controller Bits
 ************************************************************************/
// intMaskHi bits
// NOTE: Due to a bug in early rev's of the DragonBall, the clear bits for
// IRQ[1236] on those early chips were different than the indicator bits
// (the order was reversed).  So some older code uses the OR of the IRQ1 and
// IRQ6 bits for either, and the OR of the IRQ2 and IRQ3 bits for either.
#define	hwrEZ328IntHiEMU							0x0080
#define	hwrEZ328IntHiSampleTimer				0x0040
#define	hwrEZ328IntHiPen							0x0010
#define	hwrEZ328IntHiIRQ6						0x0008
#define	hwrEZ328IntHiIRQ3						0x0004
#define	hwrEZ328IntHiIRQ2						0x0002
#define	hwrEZ328IntHiIRQ1						0x0001

// intMaskLo bits
#define	hwrEZ328IntLoInt3						0x0800
#define	hwrEZ328IntLoInt2						0x0400
#define	hwrEZ328IntLoInt1						0x0200
#define	hwrEZ328IntLoInt0						0x0100
#define	hwrEZ328IntLoAllKeys					0x0F00
#define	hwrEZ328IntLoInt0Bit					8
#define	hwrEZ328IntLoPWM						0x0080
#define	hwrEZ328IntLoPWMBit					7
#define	hwrEZ328IntLoKbd						0x0040
#define	hwrEZ328IntLoRTC						0x0010
#define	hwrEZ328IntLoRTCBit					4
#define	hwrEZ328IntLoWDT						0x0008
#define	hwrEZ328IntLoUART						0x0004
#define	hwrEZ328IntLoUARTBit					2
#define	hwrEZ328IntLoTimer					0x0002
#define	hwrEZ328IntLoTimerBit				1
#define	hwrEZ328IntLoSPIM						0x0001

// intControl bits
// NOTE: These are different than that documented in the User's manual 
// for the DragonBall (see erratas).  The DragonBall is the same as the EZ.
#define	hwrEZ328IntCtlEdge1						0x0800	
#define	hwrEZ328IntCtlEdge2						0x0400
#define	hwrEZ328IntCtlEdge3						0x0200
#define	hwrEZ328IntCtlEdge6						0x0100
#define	hwrEZ328IntCtlPol1						0x8000	
#define	hwrEZ328IntCtlPol2						0x4000
#define	hwrEZ328IntCtlPol3						0x2000
#define	hwrEZ328IntCtlPol6						0x1000
#define  hwrEZ328IntCtlPol5						0x0080

/************************************************************************
 * DRAM Controller Bits bits
 * Not all the bits are defined here-- some are pretty bad to muck with
 * in anything but initial setup of the DRAM.
 ************************************************************************/
#define  hwrEZ328dramControlEnable					0x8000
#define  hwrEZ328dramControlSelfRefreshEn			0x4000
#define  hwrEZ328dramControlLightSleep				0x0010
#define  hwrEZ328dramControlLowPowerRefreshEn		0x0004
#define  hwrEZ328dramControlDWEEnable				0x0001


/************************************************************************
 * Timer bits
 ************************************************************************/
#define	hwrEZ328TmrControlUnused						0xFC00
#define  hwrEZ328TmrControlTIOOutput              0x0200
#define	hwrEZ328TmrControlFreeRun						0x0100
#define	hwrEZ328TmrControlCaptureEdgeMask			0x00C0
	#define	hwrEZ328TmrControlCaptureEdgeNone		0x0000
	#define	hwrEZ328TmrControlCaptureEdgeRising	0x0040
	#define	hwrEZ328TmrControlCaptureEdgeFalling	0x0080
	#define	hwrEZ328TmrControlCaptureEdgeBoth		0x00C0
#define	hwrEZ328TmrControlOutputModeToggle			0x0020
#define	hwrEZ328TmrControlEnInterrupt				0x0010
#define	hwrEZ328TmrControlClkSrcMask					0x000E
	#define	hwrEZ328TmrControlClkSrcStop				0x0000
	#define	hwrEZ328TmrControlClkSrcSys				0x0002
	#define	hwrEZ328TmrControlClkSrcSysBy16			0x0004
	#define	hwrEZ328TmrControlClkSrcTIN				0x0006
	#define	hwrEZ328TmrControlClkSrc32KHz			0x0008
#define	hwrEZ328TmrControlEnable						0x0001

#define	hwrEZ328TmrStatusCapture						0x0002
#define	hwrEZ328TmrStatusCaptureBit					1
#define	hwrEZ328TmrStatusCompare						0x0001
#define	hwrEZ328TmrStatusCompareBit					0


/************************************************************************
 * 68EZ328 Serial Port Register Bits
 ************************************************************************/
// uControl Register
#define	hwrEZ328UControlUARTEnable			0x8000
#define	hwrEZ328UControlRxEnable				0x4000
#define	hwrEZ328UControlTxEnable				0x2000
#define	hwrEZ328UControlRxClock1xSync		0x1000
#define	hwrEZ328UControlParityEn				0x0800
#define	hwrEZ328UControlParityOdd				0x0400
#define	hwrEZ328UControlStopBits2				0x0200
#define	hwrEZ328UControlDataBits8				0x0100
#define	hwrEZ328UControlOldDataEn				0x0080
#define	hwrEZ328UControlCTSDeltaEn			0x0040
#define	hwrEZ328UControlRxFullEn				0x0020
#define	hwrEZ328UControlRxHalfEn				0x0010
#define	hwrEZ328UControlRxRdyEn				0x0008
#define	hwrEZ328UControlTxEmptyEn				0x0004
#define	hwrEZ328UControlTxHalfEn				0x0002
#define	hwrEZ328UControlTxAvailEn				0x0001

#define	hwrEZ328UControlEnableAll			   (hwrEZ328UControlUARTEnable |  	\
														 hwrEZ328UControlRxEnable |		\
														 hwrEZ328UControlTxEnable)

// uBaud Register
// UCLK output requires PE3 Select to be 0
#define	hwrEZ328UBaudUCLKDirOut				0x2000
#define	hwrEZ328UBaudBaudSrcUCLK				0x0800
#define	hwrEZ328UBaudDivider					0x0700
#define	hwrEZ328UBaudPrescaler					0x003F

#define	hwrEZ328UBaudDivideBitOffset			8


// uReceive Register
#define	hwrEZ328UReceiveFIFOFull				0x8000
#define	hwrEZ328UReceiveFIFOHalf				0x4000
#define	hwrEZ328UReceiveDataRdy				0x2000
#define	hwrEZ328UReceiveDataRdyBit			13
#define	hwrEZ328UReceiveOldData				0x1000
#define	hwrEZ328UReceiveOverrunErr			0x0800
#define	hwrEZ328UReceiveOverrunErrBit		11
#define	hwrEZ328UReceiveFrameErr				0x0400
#define	hwrEZ328UReceiveFrameErrBit			10
#define	hwrEZ328UReceiveBreakErr				0x0200
#define	hwrEZ328UReceiveBreakErrBit			9
#define	hwrEZ328UReceiveParityErr				0x0100
#define	hwrEZ328UReceiveParityErrBit			8
#define	hwrEZ328UReceiveData					0x00FF

#define	hwrEZ328UReceiveErrsMask				(hwrEZ328UReceiveOverrunErr |	\
														 hwrEZ328UReceiveFrameErr |		\
														 hwrEZ328UReceiveBreakErr |		\
														 hwrEZ328UReceiveParityErr)

// uTransmit Register
#define	hwrEZ328UTransmitFIFOEmpty			0x8000
#define	hwrEZ328UTransmitFIFOHalf				0x4000
#define	hwrEZ328UTransmitTxAvail				0x2000
#define	hwrEZ328UTransmitSendBreak			0x1000
#define	hwrEZ328UTransmitIgnoreCTS			0x0800
#define  hwrEZ328UTransmitBusy              0x0400
#define	hwrEZ328UTransmitCTSStatus			0x0200
#define	hwrEZ328UTransmitCTSDelta				0x0100
#define	hwrEZ328UTransmitData					0x00FF

// uMisc Register
#define  hwrEZ328UMiscBaudTest              0x8000
#define	hwrEZ328UMiscClkSrcUCLK				0x4000
#define	hwrEZ328UMiscForceParityErr			0x2000
#define	hwrEZ328UMiscLoopback					0x1000
#define  hwrEZ328UMiscBaudReset             0x0800
#define  hwrEZ328UMiscIRTestEn              0x0400
#define	hwrEZ328UMiscReservedMask				0x0300
#define	hwrEZ328UMiscRTSThruFIFO				0x0080
#define	hwrEZ328UMiscRTSOut						0x0040
#define	hwrEZ328UMiscIRDAEn						0x0020
#define	hwrEZ328UMiscLoopIRDA					0x0010
#define  hwrEZ328UMiscRXPolarityInv         0x0008
#define  hwrEZ328UMiscTXPolarityInv         0x0004
#define	hwrEZ328UMiscUnused						0x0003

// uNonIntPresc Register
#define	hwrEZ328UNonIntPrescSrcIntPresc		0x0000
#define	hwrEZ328UNonIntPrescSrcNonIntPresc	0x8000

#define	hwrEZ328UNonIntPrescSelDiv128			0x0000
#define	hwrEZ328UNonIntPrescSelDiv64			0x0100
#define	hwrEZ328UNonIntPrescSelDiv32			0x0200
#define	hwrEZ328UNonIntPrescSelDiv16			0x0300
#define	hwrEZ328UNonIntPrescSelDiv8			0x0400
#define	hwrEZ328UNonIntPrescSelDiv4			0x0500
#define	hwrEZ328UNonIntPrescSelDiv2			0x0600
#define	hwrEZ328UNonIntPrescSelDiv1			0x0700

#define	hwrEZ328UNonIntPrescStepMask			0x00FF
#define	hwrEZ328UNonIntPrescSelOffset			8

// see EZ docs for explanation of the following.  This provides the correct
// pulse width for IRDA, and is just a statement in the docs. The values don't
// appear to make sense, but I just push the buttons.

// This has been deprecated in favor of a prv function in the serial driver and
// the SerialMgr (depending on whether you have Bond or not) that calculates
// the value of this register based on the clock frequency you're running on.
// There was a bug when running EZ at 20MHz that caused the IrDA pulsewidth to
// get too short.

#if 0
#define 	hwrEZ328UNonIntPrescIRDAMode			(hwrEZ328UNonIntPrescSrcIntPresc \
															| hwrEZ328UNonIntPrescSelDiv32 \
															| (hwrEZ328UNonIntPrescStepMask & 0x20))
#endif

/************************************************************************
 * PWM Bits
 ************************************************************************/
// PWM register bits of interest
#define	hwrEZ328PWMControlEnable				0x0010
#define	hwrEZ328PWMControlEnableBit			4
#define	hwrEZ328PWMControlEnableIRQ			0x0040
#define	hwrEZ328PWMIRQStatus					0x0080
// PWM divider chain output selectors
#define	hwrEZ328PWMControlDivMask				0x0003
#define	hwrEZ328PWMControlDivBy2				0x0
#define	hwrEZ328PWMControlDivBy4				0x1
#define	hwrEZ328PWMControlDivBy8				0x2
#define	hwrEZ328PWMControlDivBy16				0x3
// PWM Repeat Counts
#define	hwrEZ328PWMRepeatSample1x				0x0
#define	hwrEZ328PWMRepeatSample2x				0x4
#define	hwrEZ328PWMRepeatSample4x				0x8
#define	hwrEZ328PWMRepeatSample8x				0xC
// PWM hardware constraints
#define	hwrEZ328PWMFifoSizeInBytes				4
#define	hwrEZ328PWMPrescalerMask				0x7F00
#define	hwrEZ328PWMPrescalerOffset				8

/************************************************************************
 * PLL Bits
 * note that these do not follow the '328 spec-- however, they seem to 
 * follow the 'EZ328 spec, so maybe Motorola is behind in their tech pubs
 * department?? (Naah.)
 ************************************************************************/
#define	hwrEZ328PLLControlDisable				0x0008
#define	hwrEZ328PLLControlClkEn				0x0010

#define	hwrEZ328PLLControlSysDMADiv2			0x0000
#define	hwrEZ328PLLControlSysDMADiv4			0x0100
#define	hwrEZ328PLLControlSysDMADiv8			0x0200
#define	hwrEZ328PLLControlSysDMADiv16		0x0300
#define	hwrEZ328PLLControlSysDMADiv1			0x0400

#define	hwrEZ328PLLControlPixDMADiv2			0x0000  
#define	hwrEZ328PLLControlPixDMADiv4			0x0800
#define	hwrEZ328PLLControlPixDMADiv8			0x1000
#define	hwrEZ328PLLControlPixDMADiv16		0x1800
#define	hwrEZ328PLLControlPixDMADiv1			0x2000

#define  hwrEZ328PLLControlDMAVCODiv2       0x0000
#define  hwrEZ328PLLControlDMAVCODiv4       0x0020
#define  hwrEZ328PLLControlDMAVCODiv8       0x0040
#define  hwrEZ328PLLControlDMAVCODiv16      0x0060
#define  hwrEZ328PLLControlDMAVCODiv1       0x0080

#define  hwrEZ328PLLFreqSelCLK32				0x8000

/************************************************************************
 * Real Time Clock (RTC) Bits
 ************************************************************************/

// RTC Control Register (RTCCTL) bits
#define hwrEZ328RTCControlRTCEnable				0x80
#define hwrEZ328RTCControlRefSelMask				0x20
#define hwrEZ328RTCControlRefSel38400				0x20		// 38.4 kHz reference frequency
#define hwrEZ328RTCControlRefSel32768				0x00		// 32.768 kHz reference frequency

// RTC Interrupt Enable Register (RTCIENR) bits
#define hwrEZ328RTCIntEnableSample7            0x8000
#define hwrEZ328RTCIntEnableSample6            0x4000
#define hwrEZ328RTCIntEnableSample5            0x2000
#define hwrEZ328RTCIntEnableSample4            0x1000
#define hwrEZ328RTCIntEnableSample3            0x0800
#define hwrEZ328RTCIntEnableSample2            0x0400
#define hwrEZ328RTCIntEnableSample1            0x0200
#define hwrEZ328RTCIntEnableSample0            0x0100
#define hwrEZ328RTCIntEnableHour               0x0020
#define hwrEZ328RTCIntEnableSec						0x0010
#define hwrEZ328RTCIntEnable24Hr					0x0008
#define hwrEZ328RTCIntEnableAlarm					0x0004
#define hwrEZ328RTCIntEnableMinute					0x0002
#define hwrEZ328RTCIntEnableStopWatch				0x0001

// RTC Interrupt Status Register bits
#define hwrEZ328RTCIntStatusSample7            0x8000
#define hwrEZ328RTCIntStatusSample6            0x4000
#define hwrEZ328RTCIntStatusSample5            0x2000
#define hwrEZ328RTCIntStatusSample4            0x1000
#define hwrEZ328RTCIntStatusSample3            0x0800
#define hwrEZ328RTCIntStatusSample2            0x0400
#define hwrEZ328RTCIntStatusSample1            0x0200
#define hwrEZ328RTCIntStatusSample0            0x0100
#define hwrEZ328RTCIntStatusHour               0x0020
#define hwrEZ328RTCIntStatusSec						0x0010
#define hwrEZ328RTCIntStatus24Hr					0x0008
#define hwrEZ328RTCIntStatusAlarm					0x0004
#define hwrEZ328RTCIntStatusMinute					0x0002
#define hwrEZ328RTCIntStatusStopWatch				0x0001

// RTC Alarm register (RTCALRM) masks and offsets
#define hwrEZ328RTCAlarmSecondsMask				0x0000003fL
#define hwrEZ328RTCAlarmSecondsOffset				0
#define hwrEZ328RTCAlarmMinutesMask				0x003f0000L
#define hwrEZ328RTCAlarmMinutesOffset				16
#define hwrEZ328RTCAlarmHoursMask					0x1f000000L
#define hwrEZ328RTCAlarmHoursOffset				24

// RTC hours/minutes/seconds register (RTCHMS) masks and offsets
#define hwrEZ328RTCHourMinSecSecondsMask			0x0000003fL
#define hwrEZ328RTCHourMinSecSecondsOffset		0
#define hwrEZ328RTCHourMinSecMinutesMask			0x003f0000L
#define hwrEZ328RTCHourMinSecMinutesOffset		16
#define hwrEZ328RTCHourMinSecHoursMask			0x1f000000L
#define hwrEZ328RTCHourMinSecHoursOffset			24

// RTC Day register masks/offsets
#define hwrEZ328RTCDayDayMask                  0x01FF
#define hwrEZ328RTCDayDayOffset                0

// RTC Watchdog Timer masks/offsets
#define hwrEZ328RTCWatchdogEnable              0x0001
#define hwrEZ328RTCWatchdogIntSel              0x0002
#define hwrEZ328RTCWatchdogIntStatus           0x0080
#define hwrEZ328RTCWatchdogCountMask           0x0300
#define hwrEZ328RTCWatchdogCountOffset         8

/************************************************************************
 * SPI Master bits
 ************************************************************************/
#define	hwrEZ328SPIMControlRateMask			0xE000
	#define	hwrEZ328SPIMControlRateDiv4			0x0000
	#define	hwrEZ328SPIMControlRateDiv8			0x2000
	#define	hwrEZ328SPIMControlRateDiv16			0x4000
	#define	hwrEZ328SPIMControlRateDiv32			0x6000
	#define	hwrEZ328SPIMControlRateDiv64			0x8000
	#define	hwrEZ328SPIMControlRateDiv128		0xA000
	#define	hwrEZ328SPIMControlRateDiv256		0xC000
	#define	hwrEZ328SPIMControlRateDiv512		0xE000
#define	hwrEZ328SPIMControlEnable				0x0200
#define	hwrEZ328SPIMControlExchange			0x0100
#define	hwrEZ328SPIMControlIntStatus			0x0080
#define	hwrEZ328SPIMControlIntEnable			0x0040
#define	hwrEZ328SPIMControlOppPhase			0x0020
#define	hwrEZ328SPIMControlInvPolarity		0x0010
#define	hwrEZ328SPIMControlBitsMask			0x000F


#endif // __M68EZ328_H__

#endif // NON_PORTABLE
