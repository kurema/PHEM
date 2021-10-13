/*******************************************************************
 * 							 Pilot Software
 *
 *		 Copyright(c) 1995-1999, Palm Computing Inc., All Rights Reserved
 *
 *-------------------------------------------------------------------  
 * FileName:
 *		M68VZ328Hwr.h
 *
 * Description:
 *		Hardware Equates for the Motorola 68VZ328 Dragonball-VZ chip 
 *
 * History:
 *   	11/19/99  EBE	Created; integrated from M68EZ328Hwr.h
 *   	11/22/99  EBE	Added Port Defs for J, K, & M
 *   	12/03/99  EBE	Fixed up fillers @ 0x00A & 0x518
 *
 *******************************************************************/  

#ifdef	NON_PORTABLE						// So apps don't include this...


#ifndef	__M68VZ328HWR_H__
#define	__M68VZ328HWR_H__


#include <PalmTypes.h>							// Touchdown includes


//  Define location of the 68VZ328 Dragonball chip
#define	hwr68328Base		0xFFFFF000L					// Base address of 68328 


/***********************************************************************
 * Motorola 68VZ328  registers
 ***********************************************************************/
struct HwrM68VZ328Type {

	uint8_t		scr;								// $000: System Control Register
	uint8_t											___filler0[0x003-0x001];
	uint8_t		pcr;								// $003: Peripheral Control Register
	uint8_t		chipID;							// $004: Chip ID Register
	uint8_t		maskID;							// $005: Mask ID Register
	uint16_t	swID;								// $006: Software ID Register
	uint16_t	ioDriveControl;				// $008: I/O Drive Control Register
	uint8_t											___filler1[0x100-0x00A];				 
	
	uint16_t	csAGroupBase;					// $100: Chip Select Group A Base Register
	uint16_t	csBGroupBase;					// $102: Chip Select Group B Base Register
	uint16_t	csCGroupBase;					// $104: Chip Select Group C Base Register
	uint16_t	csDGroupBase;					// $106: Chip Select Group D Base Register
	
	uint16_t	csUGroupBase;					// $108: Chip Select Upper Group Base Register
	
	uint16_t	csControl1;						// $10A: Chip Select Control Register
	uint16_t	csControl2;						// $10C: Chip Select Control Register
	
	uint8_t											___filler2[0x110-0x10E];

	uint16_t	csASelect;						// $110: Group A Chip Select Register
	uint16_t	csBSelect;						// $112: Group B Chip Select Register
	uint16_t	csCSelect;						// $114: Group C Chip Select Register
	uint16_t	csDSelect;						// $116: Group D Chip Select Register
	
	uint16_t	emuCS;						   // $118: EMU Chip Select Register
	
	uint8_t											___filler3[0x150-0x11A];		
	
	uint16_t	csControl3;						// $150: Chip Select Control Register

	uint8_t											___filler3a[0x200-0x152];		
	
	uint16_t	pllControl;						// $200: PLL Control Register
	uint16_t	pllFreqSel;						// $202: CGM Frequency Select Register
	
	uint8_t											___filler4[0x207-0x204];
	
	uint8_t		pwrControl;						// $207: Power Control Register
	
	uint8_t											___filler5[0x300-0x208];
	
	uint8_t		intVector;						// $300: Interrupt Vector Register
	uint8_t											___filler6;
	uint16_t	intControl;						// $302: Interrupt Control Register
	uint16_t	intMaskHi;						// $304: Interrupt Mask Register/HIGH word
	uint16_t	intMaskLo;						// $306: Interrupt Mask Register/LOW word
	uint8_t											___filler7[0x30c-0x308];
	uint16_t	intStatusHi;					// $30C: Interrupt Status Register/HIGH word
	uint16_t	intStatusLo;					// $30E: Interrupt Status Register/LOW word
	uint16_t	intPendingHi;					// $310: Interrupt Pending Register/HIGH word
	uint16_t	intPendingLo;					// $312: Interrupt Pending Register/LOW word
	uint16_t	intLevelControl;				// $314: Interrupt Level Control Register
	
	uint8_t 										___filler4a[0x400-0x316];
	
	uint8_t		portADir;						// $400: Port A Direction Register
	uint8_t		portAData;						// $401: Port A Data Register
	uint8_t		portAPullupEn;					// $402: Port A Pullup Enable
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
	
	uint8_t											___filler17[0x438-0x434];
		
	uint8_t		portJDir;						// $438: Port J Direction Register
	uint8_t		portJData;						// $439: Port J Data Register
	uint8_t		portJPullupEn;					// $43A: Port J Pull-up Enable
	uint8_t		portJSelect;					// $43B: Port J Select Register
	
	uint8_t											___filler18[0x440-0x43C];
		
	uint8_t		portKDir;						// $440: Port K Direction Register
	uint8_t		portKData;						// $441: Port K Data Register
	uint8_t		portKPullupdnEn;				// $442: Port K Pull-up/down Enable
	uint8_t		portKSelect;					// $443: Port K Select Register
	
	uint8_t											___filler19[0x448-0x444];
		
	uint8_t		portMDir;						// $448: Port M Direction Register
	uint8_t		portMData;						// $449: Port M Data Register
	uint8_t		portMPullupdnEn;				// $44A: Port M Pull-up/down Enable
	uint8_t		portMSelect;					// $44B: Port M Select Register
	
	uint8_t											___filler20[0x500-0x44C];

	uint16_t	pwmControl;						// $500: PWM 1 Control Register  (PWM 1 is the same as the single PWM in EZ)
	uint8_t		pwmSampleHi;    				// $502: PWM 1 Sample - high byte
	uint8_t		pwmSampleLo;					// $503: PWM 1 Sample - low byte
	uint8_t		pwmPeriod;						// $504: PWM 1 Period
	uint8_t		pwmCounter;						// $505: PWM 1 Counter
	
	uint8_t											___filler22[0x510-0x506];

	uint16_t	pwm2Control;					// $510: PWM 2 Control Register
	uint16_t	pwm2Period;						// $512: PWM 2 Period
	uint16_t	pwm2Width;						// $514: PWM 2 Width
	uint16_t	pwm2Counter;					// $516: PWM 2 Counter

	uint8_t											___filler23[0x600-0x518];
	
	uint16_t	tmr1Control;					// $600: Timer 1 Control Register
	uint16_t	tmr1Prescaler;					// $602: Timer 1 Prescaler Register
	uint16_t	tmr1Compare;					// $604: Timer 1 Compare Register
	uint16_t	tmr1Capture;					// $606: Timer 1 Capture Register
	uint16_t	tmr1Counter;					// $608: Timer 1 Counter Register
	uint16_t	tmr1Status;						// $60A: Timer 1 Status Register
	
	uint8_t											___filler24[0x610-0x60C];
		
	uint16_t	tmr2Control;					// $610: Timer 2 Control Register
	uint16_t	tmr2Prescaler;					// $612: Timer 2 Prescaler Register
	uint16_t	tmr2Compare;					// $614: Timer 2 Compare Register
	uint16_t	tmr2Capture;					// $616: Timer 2 Capture Register
	uint16_t	tmr2Counter;					// $618: Timer 2 Counter Register
	uint16_t	tmr2Status;						// $61A: Timer 2 Status Register
	
	uint8_t											___filler25[0x700-0x61C];
	
	uint16_t	spiRxD;						// $700: SPI Unit 1 Receive Data Register
	uint16_t	spiTxD;						// $702: SPI Unit 1 Transmit Data Register
	uint16_t	spiCont1;					// $704: SPI Unit 1 Control/Status Register
	uint16_t	spiIntCS;					// $706: SPI Unit 1 Interrupt control/Status Register
	uint16_t	spiTest;					// $708: SPI Unit 1 Test Register
	uint16_t	spiSpc;						// $70A: SPI Unit 1 Sample period counter register
		
	uint8_t											___filler26[0x800-0x70C];
	
	uint16_t	spiMasterData;					// $800: SPI Unit 2 Data Register (SPI 2 is the same as the single SPI Master in EZ)
	uint16_t	spiMasterControl;				// $802: SPI Unit 2 Control/Status Register
	
	uint8_t											___filler27[0x900-0x804];
	
	uint16_t	uControl;						// $900: Uart 1 Status/Control Register (Uart 1 is the same as the single Uart in EZ)
	uint16_t	uBaud;							// $902: Uart 1 Baud Control Register
	uint16_t	uReceive;						// $904: Uart 1 Receive Register
	uint16_t	uTransmit;						// $906: Uart 1 Transmit Register
	uint16_t	uMisc;							// $908: Uart 1 Miscellaneous Register
	uint16_t	uNonIntPresc;					// $90A: Uart 1 Non-Integer Prescaler
	
	uint8_t											___filler28[0x910-0x90C];
	
	uint16_t	u2Control;						// $910: Uart 2 Status/Control Register
	uint16_t	u2Baud;							// $912: Uart 2 Baud Control Register
	uint16_t	u2Receive;						// $914: Uart 2 Receiver Register
	uint16_t	u2Transmit;						// $916: Uart 2 Transmitter Register
	uint16_t	u2Misc;							// $918: Uart 2 Miscellaneous Register
	uint16_t	u2NonIntPresc;					// $91A: Uart 2 Non-Integer Prescaler
	uint16_t	u2FIFOHMark;					// $91C: Uart 2 Half Mark FIFO Register
	
	uint8_t											___filler28a[0xA00-0x91E];
	
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
	uint8_t		lcdPanelControl;				// $A20: Panel Interface Configuration Register
	uint8_t		lcdPolarity;					// $A21: Polarity Config Register
	uint8_t											___filler33;						
	uint8_t		lcdACDRate;						// $A23: ACD (M) Rate Control Register
	uint8_t											___filler34;
	uint8_t		lcdPixelClock;					// $A25: Pixel Clock Divider Register
	uint8_t											___filler35;
	uint8_t		lcdClockControl;				// $A27: Clocking Control Register
//	uint8_t											___filler36;
	uint16_t	lcdRefreshRateAdj;			// $A28: Refresh Rate Adjustment Register
	uint8_t											___filler37;
	uint8_t		lcdReserved1;					// $A2B: Reserved
	uint8_t											___filler38;
	uint8_t    lcdPanningOffset;				// $A2D: Panning Offset Register
	
	uint8_t											___filler39[0xA31-0xA2E];
	
	uint8_t		lcdFrameRate;					// $A31: Frame Rate Control Modulation Register
	uint8_t											___filler2004;
	uint8_t		lcdGrayPalette;				// $A33: Gray Palette Mapping Register
	uint8_t		lcdReserved2;					// $A34: Reserved
	uint8_t											___filler2005;
	uint16_t	lcdContrastControlPWM;		// $A36: Contrast Control
	uint8_t		lcdRefreshModeControl;		// $A38: Refresh Mode Control Register
	uint8_t		lcdDMAControl;					// $A39:	DMA Control Register
	
	uint8_t											___filler40[0xB00-0xA3a];
	
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
   uint16_t   sdramControl;              // $C04: SDRAM Control Register
   uint16_t   sdramPwDn;              	// $C06: SDRAM Power Down Register

   uint8_t                                ___filler42[0xD00-0xC08];
	
	uint32_t	emuAddrCompare;				// $D00: Emulation Address Compare Register   
	uint32_t	emuAddrMask;					// $D04: Emulation Address Mask Register
	uint16_t	emuControlCompare;			// $D08: Emulation Control Compare Register
	uint16_t	emuControlMask;				// $D0A: Emulation Control Mask Register
	uint16_t	emuControl;						// $DOC: Emulation Control Register
	uint16_t	emuStatus;						// $D0E: Emulation Status Register
};

typedef volatile struct HwrM68VZ328Type*	HwrM68VZ328Ptr;

#define HwrDBallType HwrM68VZ328Type
#define HwrDBallPtr HwrM68VZ328Ptr


#if 0	// Take this out for Poser; it conflicts with the one in M68EZ328Hwr.h

/************************************************************************
 * Jerry EZ cost reduction PLD I/O register
 ***********************************************************************/
typedef volatile struct HwrJerryPLDType {

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

typedef	HwrJerryPLDType*	HwrJerryPldPtr;

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
#endif

/************************************************************************
 * Chip ID register for VZ
 ***********************************************************************/
 #define hwrVZ328chipIDVZ		0x45

/************************************************************************
 * Mask ID register for VZ
 ***********************************************************************/
#define hwrVZ328maskID0H31J	0x01
#define hwrVZ328maskID0J75C	0x02
#define hwrVZ328maskID1J75C	0x03
#define hwrVZ328maskID0J83G	0x04
 
/************************************************************************
 * LCD Controller Bits
 ************************************************************************/
// lcdCursorXPos Register
#define	hwrVZ328LcdCursorXPosCtlMask			0xC000
	#define	hwrVZ328LcdCursorXPosCtlTrans	0x0000
	#define	hwrVZ328LcdCursorXPosCtlBlack	0x4000
	#define	hwrVZ328LcdCursorXPosCtlReverse	0x8000
	#define  hwrVZ328LcdCursorXPosCtlWhite   0xC000
#define  hwrVZ328LcdCursorXPosValueMask		0x1FF
#define  hwrVZ328LcdCursorYPosValueMask		0x1FF
	
#define hwrVZ328LcdCursorWidthMask			0x1F
   #define  hwrVZ328LcdCursorWidthOffset  0x8
#define hwrVZ328LcdCursorHeightMask			0x1F

// lcdBlinkControl Register
#define	hwrVZ328LcdBlinkControlEnable		0x80 
#define  hwrVZ328LcdBlinkDivisorMask      0x7F

// lcdPanelControl Register
#define	hwrVZ328LcdPanelControlBusMask		0x0C
	#define	hwrVZ328LcdPanelControlBus1Bit	0x00
	#define	hwrVZ328LcdPanelControlBus2Bit	0x04
	#define	hwrVZ328LcdPanelControlBus4Bit	0x08
#define	hwrVZ328LcdPanelControlGrayScale	0x01
#define	hwrVZ328LcdPanelControl4BitGrayScale	0x02

// lcdPolarity Register
#define	hwrVZ328LcdPolarityShiftClock		0x08
#define	hwrVZ328LcdPolarityFLM					0x04
#define	hwrVZ328LcdPolarityLP					0x02
#define	hwrVZ328LcdPolarityPixel				0x01

// lcdClockControl Register
#define	hwrVZ328LcdClockControlEnable			0x80
#define	hwrVZ328LcdClockControl8BitBus			0x40

#define	hwrVZ328LcdClockControlBurstRateMask	0x0F
#define	hwrVZ328LcdClockControlBurstRate1		0x00
#define	hwrVZ328LcdClockControlBurstRate2		0x01
#define	hwrVZ328LcdClockControlBurstRate3		0x02
#define	hwrVZ328LcdClockControlBurstRate4		0x03
#define	hwrVZ328LcdClockControlBurstRate5		0x04
#define	hwrVZ328LcdClockControlBurstRate6		0x05
#define	hwrVZ328LcdClockControlBurstRate7		0x06
#define	hwrVZ328LcdClockControlBurstRate8		0x07
#define	hwrVZ328LcdClockControlBurstRate9		0x08
#define	hwrVZ328LcdClockControlBurstRate10		0x09
#define	hwrVZ328LcdClockControlBurstRate11		0x0A
#define	hwrVZ328LcdClockControlBurstRate12		0x0B
#define	hwrVZ328LcdClockControlBurstRate13		0x0C
#define	hwrVZ328LcdClockControlBurstRate14		0x0D
#define	hwrVZ328LcdClockControlBurstRate15		0x0E
#define	hwrVZ328LcdClockControlBurstRate16		0x0F

#define  hwrVZ328LcdContrastPWMWidthMask			0x00FF
#define  hwrVZ328LcdContrastEnable					0x0100



/************************************************************************
 * Interrupt Controller Bits
 ************************************************************************/
// intMaskHi bits
// NOTE: Due to a bug in early rev's of the DragonBall, the clear bits for
// IRQ[1236] on those early chips were different than the indicator bits
// (the order was reversed).  So some older code uses the OR of the IRQ1 and
// IRQ6 bits for either, and the OR of the IRQ2 and IRQ3 bits for either.
#define	hwrVZ328IntHiEMU						0x0080
#define	hwrVZ328IntHiSampleTimer				0x0040
#define	hwrVZ328IntHiPen						0x0010
#define	hwrVZ328IntHiIRQ6						0x0008
#define	hwrVZ328IntHiIRQ3						0x0004
#define	hwrVZ328IntHiIRQ2						0x0002
#define	hwrVZ328IntHiIRQ1						0x0001

// intMaskLo bits
#define	hwrVZ328IntLoPWM2						0x2000
#define	hwrVZ328IntLoPWM2Bit					13
#define	hwrVZ328IntLoUART2						0x1000
#define	hwrVZ328IntLoUART2Bit					12
#define	hwrVZ328IntLoInt3						0x0800
#define	hwrVZ328IntLoInt2						0x0400
#define	hwrVZ328IntLoInt1						0x0200
#define	hwrVZ328IntLoInt0						0x0100
#define	hwrVZ328IntLoAllKeys					0x0F00
#define	hwrVZ328IntLoInt0Bit					8
#define	hwrVZ328IntLoPWM						0x0080
#define	hwrVZ328IntLoPWMBit					7
#define	hwrVZ328IntLoKbd						0x0040
#define	hwrVZ328IntLoTimer2						0x0020
#define	hwrVZ328IntLoTimer2Bit					5
#define	hwrVZ328IntLoRTC						0x0010
#define	hwrVZ328IntLoRTCBit					4
#define	hwrVZ328IntLoWDT						0x0008
#define	hwrVZ328IntLoUART						0x0004
#define	hwrVZ328IntLoUARTBit					2
#define	hwrVZ328IntLoTimer					0x0002
#define	hwrVZ328IntLoTimerBit				1
#define	hwrVZ328IntLoSPIM						0x0001

// intControl bits
// NOTE: These are different than that documented in the User's manual 
// for the DragonBall (see erratas).  The DragonBall is the same as the EZ.
#define	hwrVZ328IntCtlEdge1						0x0800	
#define	hwrVZ328IntCtlEdge2						0x0400
#define	hwrVZ328IntCtlEdge3						0x0200
#define	hwrVZ328IntCtlEdge6						0x0100
#define	hwrVZ328IntCtlPol1						0x8000	
#define	hwrVZ328IntCtlPol2						0x4000
#define	hwrVZ328IntCtlPol3						0x2000
#define	hwrVZ328IntCtlPol6						0x1000
#define  hwrVZ328IntCtlPol5						0x0080

/************************************************************************
 * DRAM Controller Bits bits
 * Not all the bits are defined here-- some are pretty bad to muck with
 * in anything but initial setup of the DRAM.
 ************************************************************************/
#define  hwrVZ328dramControlEnable					0x8000
#define  hwrVZ328dramControlSelfRefreshEn			0x4000
#define  hwrVZ328dramControlEDOEn					0x0400
#define  hwrVZ328dramControlLightSleep				0x0010
#define  hwrVZ328dramControlLowPowerRefreshEn	0x0004
#define  hwrVZ328dramControlDWEEnable				0x0001


/************************************************************************
 * SDRAM Controller Bits bits
 * Not all the bits are defined here-- some are pretty bad to muck with
 * in anything but initial setup of the SDRAM.
 ************************************************************************/
// SdramControl bits
#define  hwrVZ328SdramControlEnable					0x8000
#define  hwrVZ328SdramControlContPgModeEn			0x4000
			// rsvd
#define  hwrVZ328SdramControlRefreshEn				0x1000
#define  hwrVZ328SdramControlInitPreChg			0x0800
#define  hwrVZ328SdramControlInitModeReg			0x0400
			// rsvd
			// rsvd
			// rsvd
#define  hwrVZ328SdramControlSColOpt				0x0040
			// BnkAddH[1:0]
			// BnkAddL[1:0]
#define  hwrVZ328SdramControlCASLatency			0x0002
#define  hwrVZ328SdramControlRefrActCmdLatency	0x0001

// SdramPwDn bits
#define  hwrVZ328SdramPwDnAPEn						0x8000
#define  hwrVZ328SdramPwDnPDEn						0x4000
			// rsvd
			// rsvd
			// PDTOUT[3:0]
			// rsvd
			// rsvd
			// rsvd
			// rsvd
			// rsvd
			// rsvd
			// rsvd
			// rsvd


/************************************************************************
 * Timer bits
 ************************************************************************/
#define	hwrVZ328TmrControlUnused						0xFC00
#define  hwrVZ328TmrControlTIOOutput              0x0200
#define	hwrVZ328TmrControlFreeRun						0x0100
#define	hwrVZ328TmrControlCaptureEdgeMask			0x00C0
	#define	hwrVZ328TmrControlCaptureEdgeNone		0x0000
	#define	hwrVZ328TmrControlCaptureEdgeRising	0x0040
	#define	hwrVZ328TmrControlCaptureEdgeFalling	0x0080
	#define	hwrVZ328TmrControlCaptureEdgeBoth		0x00C0
#define	hwrVZ328TmrControlOutputModeToggle			0x0020
#define	hwrVZ328TmrControlEnInterrupt				0x0010
#define	hwrVZ328TmrControlClkSrcMask					0x000E
	#define	hwrVZ328TmrControlClkSrcStop				0x0000
	#define	hwrVZ328TmrControlClkSrcSys				0x0002
	#define	hwrVZ328TmrControlClkSrcSysBy16			0x0004
	#define	hwrVZ328TmrControlClkSrcTIN				0x0006
	#define	hwrVZ328TmrControlClkSrc32KHz			0x0008
#define	hwrVZ328TmrControlEnable						0x0001

#define	hwrVZ328TmrStatusCapture						0x0002
#define	hwrVZ328TmrStatusCaptureBit					1
#define	hwrVZ328TmrStatusCompare						0x0001
#define	hwrVZ328TmrStatusCompareBit					0


/************************************************************************
 * 68VZ328 Serial Port Register Bits
 ************************************************************************/
// uControl Register
#define	hwrVZ328UControlUARTEnable			0x8000
#define	hwrVZ328UControlRxEnable				0x4000
#define	hwrVZ328UControlTxEnable				0x2000
#define	hwrVZ328UControlRxClock1xSync		0x1000
#define	hwrVZ328UControlParityEn				0x0800
#define	hwrVZ328UControlParityOdd				0x0400
#define	hwrVZ328UControlStopBits2				0x0200
#define	hwrVZ328UControlDataBits8				0x0100
#define	hwrVZ328UControlOldDataEn				0x0080
#define	hwrVZ328UControlCTSDeltaEn			0x0040
#define	hwrVZ328UControlRxFullEn				0x0020
#define	hwrVZ328UControlRxHalfEn				0x0010
#define	hwrVZ328UControlRxRdyEn				0x0008
#define	hwrVZ328UControlTxEmptyEn				0x0004
#define	hwrVZ328UControlTxHalfEn				0x0002
#define	hwrVZ328UControlTxAvailEn				0x0001

#define	hwrVZ328UControlEnableAll			   (hwrVZ328UControlUARTEnable |  	\
														 hwrVZ328UControlRxEnable |		\
														 hwrVZ328UControlTxEnable)

// uBaud Register
// UCLK output requires PE3 Select to be 0
#define	hwrVZ328UBaudUCLKDirOut				0x2000
#define	hwrVZ328UBaudBaudSrcUCLK				0x0800
#define	hwrVZ328UBaudDivider					0x0700
#define	hwrVZ328UBaudPrescaler					0x003F

#define	hwrVZ328UBaudDivideBitOffset			8


// uReceive Register
#define	hwrVZ328UReceiveFIFOFull				0x8000
#define	hwrVZ328UReceiveFIFOHalf				0x4000
#define	hwrVZ328UReceiveDataRdy				0x2000
#define	hwrVZ328UReceiveDataRdyBit			13
#define	hwrVZ328UReceiveOldData				0x1000
#define	hwrVZ328UReceiveOverrunErr			0x0800
#define	hwrVZ328UReceiveOverrunErrBit		11
#define	hwrVZ328UReceiveFrameErr				0x0400
#define	hwrVZ328UReceiveFrameErrBit			10
#define	hwrVZ328UReceiveBreakErr				0x0200
#define	hwrVZ328UReceiveBreakErrBit			9
#define	hwrVZ328UReceiveParityErr				0x0100
#define	hwrVZ328UReceiveParityErrBit			8
#define	hwrVZ328UReceiveData					0x00FF

#define	hwrVZ328UReceiveErrsMask				(hwrVZ328UReceiveOverrunErr |	\
														 hwrVZ328UReceiveFrameErr |		\
														 hwrVZ328UReceiveBreakErr |		\
														 hwrVZ328UReceiveParityErr)

// uTransmit Register
#define	hwrVZ328UTransmitFIFOEmpty			0x8000
#define	hwrVZ328UTransmitFIFOHalf				0x4000
#define	hwrVZ328UTransmitTxAvail				0x2000
#define	hwrVZ328UTransmitSendBreak			0x1000
#define	hwrVZ328UTransmitIgnoreCTS			0x0800
#define  hwrVZ328UTransmitBusy              0x0400
#define	hwrVZ328UTransmitCTSStatus			0x0200
#define	hwrVZ328UTransmitCTSDelta				0x0100
#define	hwrVZ328UTransmitData					0x00FF

// uMisc Register
#define  hwrVZ328UMiscBaudTest              0x8000
#define	hwrVZ328UMiscClkSrcUCLK				0x4000
#define	hwrVZ328UMiscForceParityErr			0x2000
#define	hwrVZ328UMiscLoopback					0x1000
#define  hwrVZ328UMiscBaudReset             0x0800
#define  hwrVZ328UMiscIRTestEn              0x0400
#define	hwrVZ328UMiscReservedMask				0x0300
#define	hwrVZ328UMiscRTSThruFIFO				0x0080
#define	hwrVZ328UMiscRTSOut						0x0040
#define	hwrVZ328UMiscIRDAEn						0x0020
#define	hwrVZ328UMiscLoopIRDA					0x0010
#define  hwrVZ328UMiscRXPolarityInv         0x0008
#define  hwrVZ328UMiscTXPolarityInv         0x0004
#define	hwrVZ328UMiscUnused						0x0003

// uNonIntPresc Register
#define	hwrVZ328UNonIntPrescSrcIntPresc		0x0000
#define	hwrVZ328UNonIntPrescSrcNonIntPresc	0x8000

#define	hwrVZ328UNonIntPrescSelDiv128			0x0000
#define	hwrVZ328UNonIntPrescSelDiv64			0x0100
#define	hwrVZ328UNonIntPrescSelDiv32			0x0200
#define	hwrVZ328UNonIntPrescSelDiv16			0x0300
#define	hwrVZ328UNonIntPrescSelDiv8			0x0400
#define	hwrVZ328UNonIntPrescSelDiv4			0x0500
#define	hwrVZ328UNonIntPrescSelDiv2			0x0600
#define	hwrVZ328UNonIntPrescSelDiv1			0x0700

#define	hwrVZ328UNonIntPrescStepMask			0x00FF
#define	hwrVZ328UNonIntPrescSelOffset			8

// see VZ docs for explanation of the following.  This provides the correct
// pulse width for IRDA, and is just a statement in the docs. The values don't
// appear to make sense, but I just push the buttons.

// This has been deprecated in favor of a prv function in the serial driver and
// the SerialMgr (depending on whether you have Bond or not) that calculates
// the value of this register based on the clock frequency you're running on.
// There was a bug when running EZ at 20MHz that caused the IrDA pulsewidth to
// get too short.

#if 0
#define 	hwrVZ328UNonIntPrescIRDAMode			(hwrVZ328UNonIntPrescSrcIntPresc \
															| hwrVZ328UNonIntPrescSelDiv32 \
															| (hwrVZ328UNonIntPrescStepMask & 0x20))
#endif

/************************************************************************
 * PWM Bits
 ************************************************************************/
// PWM register bits of interest
#define	hwrVZ328PWMControlEnable				0x0010
#define	hwrVZ328PWMControlEnableBit			4
#define	hwrVZ328PWMControlEnableIRQ			0x0040
#define	hwrVZ328PWMIRQStatus					0x0080
// PWM divider chain output selectors
#define	hwrVZ328PWMControlDivMask				0x0003
#define	hwrVZ328PWMControlDivBy2				0x0
#define	hwrVZ328PWMControlDivBy4				0x1
#define	hwrVZ328PWMControlDivBy8				0x2
#define	hwrVZ328PWMControlDivBy16				0x3
// PWM Repeat Counts
#define	hwrVZ328PWMRepeatSample1x				0x0
#define	hwrVZ328PWMRepeatSample2x				0x4
#define	hwrVZ328PWMRepeatSample4x				0x8
#define	hwrVZ328PWMRepeatSample8x				0xC
// PWM hardware constraints
#define	hwrVZ328PWMFifoSizeInBytes				4
#define	hwrVZ328PWMPrescalerMask				0x7F00
#define	hwrVZ328PWMPrescalerOffset				8

/************************************************************************
 * PLL Bits
 ************************************************************************/
#define	hwrVZ328PLLControlDisable				0x0008
#define	hwrVZ328PLLControlClkDisable			0x0010

#define	hwrVZ328PLLControlSysDMADiv2			0x0000
#define	hwrVZ328PLLControlSysDMADiv4			0x0100
#define	hwrVZ328PLLControlSysDMADiv8			0x0200
#define	hwrVZ328PLLControlSysDMADiv16			0x0300
#define	hwrVZ328PLLControlSysDMADiv1			0x0400

#define	hwrVZ328PLLControlPixDMADiv2			0x0000  
#define	hwrVZ328PLLControlPixDMADiv4			0x0800
#define	hwrVZ328PLLControlPixDMADiv8			0x1000
#define	hwrVZ328PLLControlPixDMADiv16			0x1800
#define	hwrVZ328PLLControlPixDMADiv1			0x2000

#define	hwrVZ328PLLControlPreSc1Div2			0x0080
#define	hwrVZ328PLLControlPreSc1Div1			0x0000

#define	hwrVZ328PLLControlPreSc2Div2			0x0020
#define	hwrVZ328PLLControlPreSc2Div1			0x0000

#define	hwrCZ328PLLControl32Periods			0x0000
#define	hwrCZ328PLLControl48Periods			0x0001
#define	hwrCZ328PLLControl64Periods			0x0002
#define	hwrCZ328PLLControl96Periods			0x0003

#define  hwrVZ328PLLFreqSelCLK32					0x8000

/************************************************************************
 * Real Time Clock (RTC) Bits
 ************************************************************************/

// RTC Control Register (RTCCTL) bits
#define hwrVZ328RTCControlRTCEnable				0x80
#define hwrVZ328RTCControlRefSelMask				0x20
#define hwrVZ328RTCControlRefSel38400				0x20		// 38.4 kHz reference frequency
#define hwrVZ328RTCControlRefSel32768				0x00		// 32.768 kHz reference frequency

// RTC Interrupt Enable Register (RTCIENR) bits
#define hwrVZ328RTCIntEnableSample7            0x8000
#define hwrVZ328RTCIntEnableSample6            0x4000
#define hwrVZ328RTCIntEnableSample5            0x2000
#define hwrVZ328RTCIntEnableSample4            0x1000
#define hwrVZ328RTCIntEnableSample3            0x0800
#define hwrVZ328RTCIntEnableSample2            0x0400
#define hwrVZ328RTCIntEnableSample1            0x0200
#define hwrVZ328RTCIntEnableSample0            0x0100
#define hwrVZ328RTCIntEnableHour               0x0020
#define hwrVZ328RTCIntEnableSec						0x0010
#define hwrVZ328RTCIntEnable24Hr					0x0008
#define hwrVZ328RTCIntEnableAlarm					0x0004
#define hwrVZ328RTCIntEnableMinute					0x0002
#define hwrVZ328RTCIntEnableStopWatch				0x0001

// RTC Interrupt Status Register bits
#define hwrVZ328RTCIntStatusSample7            0x8000
#define hwrVZ328RTCIntStatusSample6            0x4000
#define hwrVZ328RTCIntStatusSample5            0x2000
#define hwrVZ328RTCIntStatusSample4            0x1000
#define hwrVZ328RTCIntStatusSample3            0x0800
#define hwrVZ328RTCIntStatusSample2            0x0400
#define hwrVZ328RTCIntStatusSample1            0x0200
#define hwrVZ328RTCIntStatusSample0            0x0100
#define hwrVZ328RTCIntStatusHour               0x0020
#define hwrVZ328RTCIntStatusSec						0x0010
#define hwrVZ328RTCIntStatus24Hr					0x0008
#define hwrVZ328RTCIntStatusAlarm					0x0004
#define hwrVZ328RTCIntStatusMinute					0x0002
#define hwrVZ328RTCIntStatusStopWatch				0x0001

// RTC Alarm register (RTCALRM) masks and offsets
#define hwrVZ328RTCAlarmSecondsMask				0x0000003fL
#define hwrVZ328RTCAlarmSecondsOffset				0
#define hwrVZ328RTCAlarmMinutesMask				0x003f0000L
#define hwrVZ328RTCAlarmMinutesOffset				16
#define hwrVZ328RTCAlarmHoursMask					0x1f000000L
#define hwrVZ328RTCAlarmHoursOffset				24

// RTC hours/minutes/seconds register (RTCHMS) masks and offsets
#define hwrVZ328RTCHourMinSecSecondsMask			0x0000003fL
#define hwrVZ328RTCHourMinSecSecondsOffset		0
#define hwrVZ328RTCHourMinSecMinutesMask			0x003f0000L
#define hwrVZ328RTCHourMinSecMinutesOffset		16
#define hwrVZ328RTCHourMinSecHoursMask			0x1f000000L
#define hwrVZ328RTCHourMinSecHoursOffset			24

// RTC Day register masks/offsets
#define hwrVZ328RTCDayDayMask                  0x01FF
#define hwrVZ328RTCDayDayOffset                0

// RTC Watchdog Timer masks/offsets
#define hwrVZ328RTCWatchdogEnable              0x0001
#define hwrVZ328RTCWatchdogIntSel              0x0002
#define hwrVZ328RTCWatchdogIntStatus           0x0080
#define hwrVZ328RTCWatchdogCountMask           0x0300
#define hwrVZ328RTCWatchdogCountOffset         8

/************************************************************************
 * SPI Master bits
 ************************************************************************/
#define	hwrVZ328SPIMControlRateMask			0xE000
	#define	hwrVZ328SPIMControlRateDiv4			0x0000
	#define	hwrVZ328SPIMControlRateDiv8			0x2000
	#define	hwrVZ328SPIMControlRateDiv16			0x4000
	#define	hwrVZ328SPIMControlRateDiv32			0x6000
	#define	hwrVZ328SPIMControlRateDiv64			0x8000
	#define	hwrVZ328SPIMControlRateDiv128		0xA000
	#define	hwrVZ328SPIMControlRateDiv256		0xC000
	#define	hwrVZ328SPIMControlRateDiv512		0xE000
#define	hwrVZ328SPIMControlEnable				0x0200
#define	hwrVZ328SPIMControlExchange			0x0100
#define	hwrVZ328SPIMControlIntStatus			0x0080
#define	hwrVZ328SPIMControlIntEnable			0x0040
#define	hwrVZ328SPIMControlOppPhase			0x0020
#define	hwrVZ328SPIMControlInvPolarity		0x0010
#define	hwrVZ328SPIMControlBitsMask			0x000F


#endif // __M68VZ328_H__

#endif // NON_PORTABLE
