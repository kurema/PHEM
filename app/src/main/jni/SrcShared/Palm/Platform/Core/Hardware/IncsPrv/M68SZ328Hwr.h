/*******************************************************************
 * 							 Pilot Software
 *
 *		 Copyright(c) 1995-1999, Palm Computing Inc., All Rights Reserved
 *
 *-------------------------------------------------------------------  
 * FileName:
 *		M68SZ328Hwr.h
 *
 * Description:
 *		Hardware Equates for the Motorola 68SZ328 Dragonball-SZ chip 
 *
 * History:
 *   	07/05/99  TJC	Created; integrated from M68VZ328Hwr.h
 *
 *******************************************************************/  

#ifdef	NON_PORTABLE						// So apps don't include this...


#ifndef	__M68SZ328HWR_H__
#define	__M68SZ328HWR_H__

#if INCLUDE_SECRET_STUFF


#include <PalmTypes.h>							// Touchdown includes


//  Define location of the 68328 Dragonball chip
//	Note: this is not the same as kMemoryStart in this chip
#define	hwr68328Base		0xFFFFF000L					// Base address of 68328 


/***********************************************************************
 * Motorola 68SZ328  registers
 ***********************************************************************/
struct HwrM68SZ328Type
{
	uint16_t	dmaControl;					// $00000: DMA Control Register
	uint16_t	dmaInterruptStatus;			// $00002: DMA Interrupt Status Register
	uint16_t	dmaInterruptMask;			// $00004: DMA Interrupt Mask Register
	uint16_t	dmaBurstTimeOutStatus;		// $00006: DMA Burst Time-Out Status Register
	uint16_t	dmaRequestTimeOutStatus;	// $00008: DMA Request Time-Out Status Register

												// Note, the spaces around the minus sign are
												// necessary.  Without them, a proper compiler
												// like gcc 3.0 thinks that the expression
												// is an invalid scientific notion number.
	uint8_t									___filler00[0x00E - 0x00A];

	uint16_t	dmaBurstTimeOutControl;		// $0000E: DMA Burst Time-Out Control Register

	uint8_t									___filler01[0x040-0x010];

	uint32_t	mem0SourceAddress;			// $00040: Memory Channel 0 Source Address Register
	uint32_t	mem0DestAddress;			// $00044: Memory Channel 0 Destination Address Register
	uint32_t	mem0Count;					// $00048: Memory Channel 0 Count Register
	uint16_t	mem0Control;				// $0004C: Memory Channel 0 Control Register
	uint16_t	mem0BurstLength;			// $0004E: Memory Channel 0 Burst Length Register
	uint16_t	mem0BusUtilizationControl;	// $00050: Memory Channel 0 Bus Utilization Control Register
	uint16_t	mem0BlockLength;			// $00052: Memory Channel 0 Block Length Register
	uint16_t	mem0BlockSeparationDist;	// $00054: Memory Channel 0 Block Separation Distance Register
	uint16_t	mem0DMARequestTimeOut;		// $00056: Memory Channel 0 DMA Request Time Out Register

	uint8_t									___filler02[0x080-0x058];

	uint32_t	mem1SourceAddress;			// $00080: Memory Channel 1 Source Address Register
	uint32_t	mem1DestAddress;			// $00084: Memory Channel 1 Destination Address Register
	uint32_t	mem1Count;					// $00088: Memory Channel 1 Count Register
	uint16_t	mem1Control;				// $0008C: Memory Channel 1 Control Register
	uint16_t	mem1BurstLength;			// $0008E: Memory Channel 1 Burst Length Register
	uint16_t	mem1BusUtilizationControl;	// $00090: Memory Channel 1 Bus Utilization Control Register
	uint16_t	mem1BlockLength;			// $00092: Memory Channel 1 Block Length Register
	uint16_t	mem1BlockSeparationDist;	// $00094: Memory Channel 1 Block Separation Distance Register
	uint16_t	mem1DMARequestTimeOut;		// $00096: Memory Channel 1 DMA Request Time Out Register

	uint8_t									___filler03[0x0C0-0x098];

	uint32_t	io2MemoryAddress;			// $000C0: I/O Channel 2 Memory Address Register
	uint32_t	io2PeripheralAddress;		// $000C4: I/O Channel 2 Peripheral Address Register
	uint32_t	io2CountRegister;			// $000C8: I/O Channel 2 Count Register
	uint16_t	io2Control;					// $000CC: I/O Channel 2 Control Register
	uint16_t	io2RequestSourceSelect;		// $000CE: I/O Channel 2 Request Source Select Register
	uint16_t	io2BurstLength;				// $000D0: I/O Channel 2 Burst Length Register
	uint16_t	io2DMARequestTimeOut;		// $000D2: I/O Channel 2 DMA Request Time-Out Register

	uint8_t									___filler04[0x100-0x0D4];

	uint32_t	io3MemoryAddress;			// $00100: I/O Channel 3 Memory Address Register
	uint32_t	io3PeripheralAddress;		// $00104: I/O Channel 3 Peripheral Address Register
	uint32_t	io3CountRegister;			// $00108: I/O Channel 3 Count Register
	uint16_t	io3Control;					// $0010C: I/O Channel 3 Control Register
	uint16_t	io3RequestSourceSelect;		// $0010E: I/O Channel 3 Request Source Select Register
	uint16_t	io3BurstLength;				// $00110: I/O Channel 3 Burst Length Register
	uint16_t	io3DMARequestTimeOut;		// $00112: I/O Channel 3 DMA Request Time-Out Register

	uint8_t									___filler05[0x140-0x114];

	uint32_t	io4MemoryAddress;			// $00140: I/O Channel 4 Memory Address Register
	uint32_t	io4PeripheralAddress;		// $00144: I/O Channel 4 Peripheral Address Register
	uint32_t	io4CountRegister;			// $00148: I/O Channel 4 Count Register
	uint16_t	io4Control;					// $0014C: I/O Channel 4 Control Register
	uint16_t	io4RequestSourceSelect;		// $0014E: I/O Channel 4 Request Source Select Register
	uint16_t	io4BurstLength;				// $00150: I/O Channel 4 Burst Length Register
	uint16_t	io4DMARequestTimeOut;		// $00152: I/O Channel 4 DMA Request Time-Out Register

	uint8_t									___filler06[0x180-0x154];

	uint32_t	io5MemoryAddress;			// $00180: I/O Channel 5 Memory Address Register
	uint32_t	io5PeripheralAddress;		// $00184: I/O Channel 5 Peripheral Address Register
	uint32_t	io5CountRegister;			// $00188: I/O Channel 5 Count Register
	uint16_t	io5Control;					// $0018C: I/O Channel 5 Control Register
	uint16_t	io5RequestSourceSelect;		// $0018E: I/O Channel 5 Request Source Select Register
	uint16_t	io5BurstLength;				// $00190: I/O Channel 5 Burst Length Register
	uint16_t	io5DMARequestTimeOut;		// $00192: I/O Channel 5 DMA Request Time-Out Register

	uint8_t									___filler07[0x200-0x194];

	uint16_t	adcPenSampleFifo;			// $00200: ADC Pen Sample FIFO

	uint8_t									___filler08[0x210-0x202];

	uint32_t	adcControl;					// $00210: ADC Control Register
	uint16_t	adcPenADSampleRateControl;	// $00214: ADC Pen A/D Sample Rate Control Register

	uint8_t									___filler09[0x218-0x216];

	uint16_t	adcInterruptControl;		// $00218: ADC Interrupt Control Register
	uint16_t	adcInterruptErrorStatus;	// $0021A: ADC Interrupt/Error Status Register

	uint8_t									___filler10[0x22C-0x21C];

	uint16_t	adcClockDivide;				// $0022C: ADC Clock Divide Register

	uint8_t									___filler11[0x230-0x22E];

	uint32_t	adcCompareControl;			// $00230: ADC Compare Control Register

	uint8_t									___filler12[0x300-0x234];

	uint16_t	mmcClockControl;			// $00300: MMC Clock Control Register

	uint8_t									___filler13[0x304-0x302];

	uint16_t	mmcStatus;					// $00304: MMC Status Register

	uint8_t									___filler14[0x308-0x306];

	uint16_t	mmcClockRate;				// $00308: MMC Clock Rate Register

	uint8_t									___filler15[0x310-0x30A];

	uint16_t	mmcCommandDataControl;		// $00310: MMC Command and Data Control Register

	uint8_t									___filler16[0x314-0x312];

	uint16_t	mmcResponseTimeOut;			// $00314: MMC Response Time Out Register

	uint8_t									___filler17[0x318-0x316];

	uint16_t	mmcReadTimeOut;				// $00318: MMC Read Time Out Register

	uint8_t									___filler18[0x31C-0x31A];

	uint16_t	mmcBlockLength;				// $0031C: MMC Block Length Register

	uint8_t									___filler19[0x320-0x31E];

	uint16_t	mmcNumberOfBlocks;			// $00320: MMC Number of Blocks Register

	uint8_t									___filler20[0x324-0x322];

	uint16_t	mmcRevisionNumber;			// $00324: MMC Revision Number Register

	uint16_t	mmcIOPort;					// $00326: MMC IO Port Register
	uint16_t	mmcInterruptMask;			// $00328: MMC Interrupt Mask Register

	uint8_t									___filler21[0x32C-0x32A];

	uint16_t	mmcCommandNumber;			// $0032C: MMC Command Number Register

	uint8_t									___filler22[0x330-0x32E];

	uint16_t	mmcHigherArgument;			// $00330: MMC HIGHER Argument Register
	uint16_t	mmcLowerArgument;			// $00332: MMC LOWER Argument Register
	uint16_t	mmcResponseFifo;			// $00334: MMC Response FIFO Register;

	uint8_t									___filler23[0x338-0x336];

	uint16_t	mmcBufferAccess;			// $00338: MMC Buffer Access Register

	uint8_t									___filler24[0x33C-0x33A];

	uint16_t	mmcBufferPartFull;			// $0033C: MMC Buffer Part Full Register

	uint8_t									___filler25[0x400-0x33E];

	uint32_t	usbFrameNumberMatch;		// $00400: USB Frame Number and Match
	uint32_t	usbSpecificationRelease;	// $00404: USB Specification/Release Number
	uint32_t	usbStatus;					// $00408: USB Status
	uint32_t	usbControl;					// $0040C: USB Control
	uint32_t	usbConfigurationStatus;		// $00410: USB Configuration Status
	uint32_t	usbEndpointBufferData;		// $00414: USB Endpoint Buffer Data
	uint32_t	usbGeneralInterruptStatus;	// $00418: USB General Interrupt Status Register
	uint32_t	usbInterruptMask;			// $0041C: USB Interrupt Mask

	uint8_t									___filler26[0x424-0x420];

	uint32_t	usbEnable;					// $00424: USB Enable
	uint32_t	usbInterruptStatus;			// $00428: USB Interrupt Status Register

	uint8_t									___filler27[0x430-0x42C];

	uint32_t	usbEP0StatusControl;		// $00430: USB Endpoint 0 Status/Control
	uint32_t	usbEP0InterruptStatus;		// $00434: USB Endpoint 0 Interrupt Status
	uint32_t	usbEP0InterruptMask;		// $00438: USB Endpoint 0 Interrupt Mask
	uint16_t	usbEP0FifoData;				// $0043C: USB Endpoint 0 FIFO Data

	uint8_t									___filler28[0x440-0x43E];

	uint32_t	usbEP0FifoStatus;			// $00440: USB Endpoint 0 FIFO Status
	uint32_t	usbEP0FifoControl;			// $00444: USB Endpoint 0 FIFO Control
	uint32_t	usbEP0LastReadFramePointer;	// $00448: USB Endpoint 0 FIFO Last Read Frame Pointer
	uint32_t	usbEP0LastWriteFramePointer;	// $0044C: USB Endpoint 0 FIFO Last Write Frame Pointer
	uint32_t	usbEP0FifoAlarm;			// $00450: USB Endpoint 0 FIFO Alarm
	uint32_t	usbEP0FifoReadPointer;		// $00454: USB Endpoint 0 FIFO Read Pointer
	uint32_t	usbEP0FifoWritePointer;		// $00458: USB Endpoint 0 FIFO Write Pointer

	uint8_t									___filler29[0x460-0x45C];

	uint32_t	usbEP1StatusControl;		// $00460: USB Endpoint 1 Status/Control
	uint32_t	usbEP1InterruptStatus;		// $00464: USB Endpoint 1 Interrupt Status
	uint32_t	usbEP1InterruptMask;		// $00468: USB Endpoint 1 Interrupt Mask
	uint16_t	usbEP1FifoData;				// $0046C: USB Endpoint 1 FIFO Data

	uint8_t									___filler30[0x470-0x46E];

	uint32_t	usbEP1FifoStatus;			// $00470: USB Endpoint 1 FIFO Status
	uint32_t	usbEP1FifoControl;			// $00474: USB Endpoint 1 FIFO Control
	uint32_t	usbEP1LastReadFramePointer;	// $00478: USB Endpoint 1 FIFO Last Read Frame Pointer
	uint32_t	usbEP1LastWriteFramePointer;	// $0047C: USB Endpoint 1 FIFO Last Write Frame Pointer
	uint32_t	usbEP1FifoAlarm;			// $00480: USB Endpoint 1 FIFO Alarm
	uint32_t	usbEP1FifoReadPointer;		// $00484: USB Endpoint 1 FIFO Read Pointer
	uint32_t	usbEP1FifoWritePointer;		// $00488: USB Endpoint 1 FIFO Write Pointer

	uint8_t									___filler31[0x490-0x48C];

	uint32_t	usbEP2StatusControl;		// $00490: USB Endpoint 2 Status/Control
	uint32_t	usbEP2InterruptStatus;		// $00494: USB Endpoint 2 Interrupt Status
	uint32_t	usbEP2InterruptMask;		// $00498: USB Endpoint 2 Interrupt Mask
	uint16_t	usbEP2FifoData;				// $0049C: USB Endpoint 2 FIFO Data

	uint8_t									___filler32[0x4A0-0x49E];

	uint32_t	usbEP2FifoStatus;			// $004A0: USB Endpoint 2 FIFO Status
	uint32_t	usbEP2FifoControl;			// $004A4: USB Endpoint 2 FIFO Control
	uint32_t	usbEP2LastReadFramePointer;	// $004A8: USB Endpoint 2 FIFO Last Read Frame Pointer
	uint32_t	usbEP2LastWriteFramePointer;	// $004AC: USB Endpoint 2 FIFO Last Write Frame Pointer
	uint32_t	usbEP2FifoAlarm;			// $004B0: USB Endpoint 2 FIFO Alarm
	uint32_t	usbEP2FifoReadPointer;		// $004B4: USB Endpoint 2 FIFO Read Pointer
	uint32_t	usbEP2FifoWritePointer;		// $004B8: USB Endpoint 2 FIFO Write Pointer

	uint8_t									___filler33[0x4C0-0x4BC];

	uint32_t	usbEP3StatusControl;		// $004C0: USB Endpoint 3 Status/Control
	uint32_t	usbEP3InterruptStatus;		// $004C4: USB Endpoint 3 Interrupt Status
	uint32_t	usbEP3InterruptMask;		// $004C8: USB Endpoint 3 Interrupt Mask
	uint16_t	usbEP3FifoData;				// $004CC: USB Endpoint 3 FIFO Data

	uint8_t									___filler34[0x4D0-0x4CE];

	uint32_t	usbEP3FifoStatus;			// $004D0: USB Endpoint 3 FIFO Status
	uint32_t	usbEP3FifoControl;			// $004D4: USB Endpoint 3 FIFO Control
	uint32_t	usbEP3LastReadFramePointer;	// $004D8: USB Endpoint 3 FIFO Last Read Frame Pointer
	uint32_t	usbEP3LastWriteFramePointer;	// $004DC: USB Endpoint 3 FIFO Last Write Frame Pointer
	uint32_t	usbEP3FifoAlarm;			// $004E0: USB Endpoint 3 FIFO Alarm
	uint32_t	usbEP3FifoReadPointer;		// $004E4: USB Endpoint 3 FIFO Read Pointer
	uint32_t	usbEP3FifoWritePointer;		// $004E8: USB Endpoint 3 FIFO Write Pointer

	uint8_t									___filler35[0x4F0-0x4EC];

	uint32_t	usbEP4StatusControl;		// $004F0: USB Endpoint 4 Status/Control
	uint32_t	usbEP4InterruptStatus;		// $004F4: USB Endpoint 4 Interrupt Status
	uint32_t	usbEP4InterruptMask;		// $004F8: USB Endpoint 4 Interrupt Mask
	uint16_t	usbEP4FifoData;				// $004FC: USB Endpoint 4 FIFO Data

	uint8_t									___filler36[0x500-0x4FE];

	uint32_t	usbEP4FifoStatus;			// $00500: USB Endpoint 4 FIFO Status
	uint32_t	usbEP4FifoControl;			// $00504: USB Endpoint 4 FIFO Control
	uint32_t	usbEP4LastReadFramePointer;	// $00508: USB Endpoint 4 FIFO Last Read Frame Pointer
	uint32_t	usbEP4LastWriteFramePointer;	// $0050C: USB Endpoint 4 FIFO Last Write Frame Pointer
	uint32_t	usbEP4FifoAlarm;			// $00510: USB Endpoint 4 FIFO Alarm
	uint32_t	usbEP4FifoReadPointer;		// $00514: USB Endpoint 4 FIFO Read Pointer
	uint32_t	usbEP4FifoWritePointer;		// $00518: USB Endpoint 4 FIFO Write Pointer

	uint8_t									___filler37[0x800-0x51C];

	uint32_t	lcdStartAddr;				// $00800: LCD Screen Starting Address Register
	uint16_t	lcdScreenSize;				// $00804: LCD Screen Size Register
	uint16_t	lcdPageWidth;				// $00806: LCD Virtual Page Width Register
	uint16_t	lcdCursorXPos;				// $00808: LCD Cursor X Position
	uint16_t	lcdCursorYPos;				// $0080A: LCD Cursor Y Position
	uint16_t	lcdCursorSize;				// $0080C: LCD Cursor Size
	uint16_t	lcdBlinkControl;			// $0080E: LCD Blink Control Register
	uint16_t	lcdColorCursorMapping;		// $00810: LCD Color Cursor Mapping Register
	uint16_t	lcdPanelControl0;			// $00812: LCD Panel Configuration Register 0
	uint16_t	lcdPanelControl1;			// $00814: LCD Panel Configuration Register 1
	uint16_t	lcdHorizontalConfig0;		// $00816: LCD Horizontal Configuration Register 0
	uint16_t	lcdHorizontalConfig1;		// $00818: LCD Horizontal Configuration Register 1
	uint16_t	lcdVerticalConfig0;			// $0081A: LCD Vertical Configuration Register 0
	uint16_t	lcdVerticalConfig1;			// $0081C: LCD Vertical Configuration Register 1
	uint16_t	lcdPanningOffset;			// $0081E: LCD Panning Offset Register
	uint16_t	lcdGrayPalette;				// $00820: LCD Gray Palette Mapping Register
	uint16_t	lcdPWMContrastControl;		// $00822: LCD PWM Contrast Control Register
	uint16_t	lcdDMAControl;				// $00824: LCD DMA Control Register
	uint16_t	lcdRefreshModeControl;		// $00826: LCD Refresh Mode Control Register
	uint16_t	lcdInterruptConfiguration;	// $00828: LCD Interrupt Configuration
	uint16_t	lcdInterruptStatus;			// $0082A: LCD Interrupt Status

	uint8_t									___filler38[0x1F000-0x0082C];

	uint8_t	scr;						// $10000: System Control Register

	uint8_t									___filler39[0x003-0x001];

	uint8_t	pcr;						// $10003: Peripheral Control Register
	uint8_t	chipID;						// $10004: Chip ID Register
	uint8_t	maskID;						// $10005: Mask ID Register
	uint16_t	swID;						// $10006: Software ID Register
	uint16_t	ioDriveControl;				// $10008: I/O Drive Control Register

	uint8_t									___filler40[0x100-0x00A];				 

	uint16_t	csAGroupBase;				// $10100: Chip Select Group A Base Register
	uint16_t	csBGroupBase;				// $10102: Chip Select Group B Base Register
	uint16_t	csCGroupBase;				// $10104: Chip Select Group C Base Register
	uint16_t	csDGroupBase;				// $10106: Chip Select Group D Base Register

	uint8_t									___filler41[0x10c-0x108];

	uint16_t	csControl2;					// $1010C: Chip Select Control Register 2

	uint8_t									___filler42[0x110-0x10e];

	uint16_t	csASelect;					// $10110: Group A Chip Select Register
	uint16_t	csBSelect;					// $10112: Group B Chip Select Register
	uint16_t	csCSelect;					// $10114: Group C Chip Select Register
	uint16_t	csDSelect;					// $10116: Group D Chip Select Register

	uint16_t	emuCS;						// $10118: EMU Chip Select Register

	uint8_t									___filler43[0x150-0x11A];		

	uint16_t	csControl3;					// $10150: Chip Select Control Register 3

	uint8_t									___filler43a[0x180-0x152];

	uint16_t	csEGroupBase;				// $10180: Chip Select Group E Base Register
	uint16_t	csFGroupBase;				// $10182: Chip Select Group F Base Register
	uint16_t	csGGroupBase;				// $10184: Chip Select Group G Base Register

	uint8_t									___filler44[0x18A-0x186];

	uint16_t	csControl1;					// $1018A: Chip Select Control Register 1

	uint8_t									___filler45[0x190-0x18C];

	uint16_t	csESelect;					// $10190: Group E Chip Select Register
	uint16_t	csFSelect;					// $10192: Group F Chip Select Register
	uint16_t	csGSelect;					// $10194: Group G Chip Select Register

	uint8_t									___filler46[0x200-0x196];

	uint16_t	pllControl;					// $10200: PLL Control Register
	uint16_t	pllFreqSel0;				// $10202: MCU PLL Frequency Select Register 0
	uint16_t	pllFreqSel1;				// $10204: MCU PLL Frequency Select Register 1

	uint8_t									___filler47;

	uint8_t	pwrControl;					// $10207: CPU Power Control Register

	uint16_t	usbpllFreqSel0;				// $10208: USBPLL Frequency Select Register 0
	uint16_t	usbpllFreqSel1;				// $1020A: USBPLL Frequency Select Register 1

	uint16_t	clockSrcCtl;				// $1020C: Clock Source Control Register

	uint8_t									___filler48[0x300-0x20E];

	uint8_t	intVector;					// $10300: Interrupt Vector Register

	uint8_t									___filler49;

	uint16_t	intControl;					// $10302: Interrupt Control Register
	uint16_t	intMaskHi;					// $10304: Interrupt Mask Register (high word)
	uint16_t	intMaskLo;					// $10306: Interrupt Mask Register (low word)

	uint8_t									___filler50[0x30C-0x308];

	uint16_t	intStatusHi;				// $1030C: Interrupt Status Register (high word)
 	uint16_t	intStatusLo;				// $1030E: Interrupt Status Register (low word)
	uint16_t	intPendingHi;				// $10310: Interrupt Pending Register (high word)
	uint16_t	intPendingLo;				// $10312: Interrupt Pending Register (low word)
	uint16_t	intLevelControl;			// $10314: Interrupt Level Control Register
	uint16_t	intLevelControl2;			// $10316: Interrupt Level Control Register 2
	uint16_t	intLevelControl3;			// $10318: Interrupt Level Control Register 3
	uint16_t	intLevelControl4;			// $1031A: Interrupt Level Control Register 4
	uint16_t	intLevelControl5;			// $1031C: Interrupt Level Control Register 5
	uint16_t	intLevelControl6;			// $1031E: Interrupt Level Control Register 6
	uint16_t	intLevelControl7;			// $10320: Interrupt Level Control Register 7

	uint8_t 									___filler51[0x400-0x322];

	uint8_t	portADir;					// $10400: Port A Direction Register
	uint8_t	portAData;					// $10401: Port A Data Register
	uint8_t	portAPullupEn;				// $10402: Port A Pullup Enable

	uint8_t									___filler52[0x408-0x403];	

	uint8_t	portBDir;					// $10408: Port B Direction Register
	uint8_t	portBData;					// $10409: Port B Data Register
	uint8_t	portBPullupEn;				// $1040A: Port B Pullup Enable
	uint8_t	portBSelect;				// $1040B: Port B Select Register	

	uint8_t									___filler53[0x410-0x40C];

	uint8_t	portCDir;					// $10410: Port C Direction Register
	uint8_t	portCData;					// $10411: Port C Data Register
	uint8_t	portCPulldnEn;				// $10412: Port C Pulldown Enable
	uint8_t	portCSelect;				// $10413: Port C Select Register	

	uint8_t									___filler54[0x418-0x414];

	uint8_t	portDDir;					// $10418: Port D Direction Register
	uint8_t	portDData;					// $10419: Port D Data Register
	uint8_t	portDPullupEn;				// $1041A: Port D Pull-up Enable
	uint8_t	portDSelect;				// $1041B: Port D Select Register
	uint8_t	portDIntMask;				// $1041C: Port D Interrupt Mask Register
	uint8_t	portDIntStatus;				// $1041D: Port D Interrupt Status Register
	uint8_t	portDIntEdge;				// $1041E: Port D Interrupt Edge Register
	uint8_t	portDIntPolarity;			// $1041F: Port D Interrupt Polarity Register

	uint8_t	portEDir;					// $10420: Port E Direction Register
	uint8_t	portEData;					// $10421: Port E Data Register
	uint8_t	portEPullupEn;				// $10422: Port E Pull-up Enable
	uint8_t	portESelect;				// $10423: Port E Select Register
	uint8_t	portEIntMask;				// $10424: Port E Interrupt Mask Register
	uint8_t	portEIntStatus;				// $10425: Port E Interrupt Status Register
	uint8_t	portEIntEdge;				// $10426: Port E Interrupt Edge Register
	uint8_t	portEIntPolarity;			// $10427: Port E Interrupt Polarity Register

	uint8_t	portFDir;					// $10428: Port F Direction Register
	uint8_t	portFData;					// $10429: Port F Data Register
	uint8_t	portFPullupdnEn;			// $1042A: Port F Pull-up/down Enable
	uint8_t	portFSelect;				// $1042B: Port F Select Register
	uint8_t	portFIntMask;				// $1042C: Port F Interrupt Mask Register
	uint8_t	portFIntStatus;				// $1042D: Port F Interrupt Status Register
	uint8_t	portFIntEdge;				// $1042E: Port F Interrupt Edge Register
	uint8_t	portFIntPolarity;			// $1042F: Port F Interrupt Polarity Register

	uint8_t	portGDir;					// $10430: Port G Direction Register
	uint8_t	portGData;					// $10431: Port G Data Register
	uint8_t	portGPullupEn;				// $10432: Port G Pull-up Enable
	uint8_t	portGSelect;				// $10433: Port G Select Register
	uint8_t	portGIntMask;				// $10434: Port G Interrupt Mask Register
	uint8_t	portGIntStatus;				// $10435: Port G Interrupt Status Register
	uint8_t	portGIntEdge;				// $10436: Port G Interrupt Edge Register
	uint8_t	portGIntPolarity;			// $10437: Port G Interrupt Polarity Register

	uint8_t	portJDir;					// $10438: Port J Direction Register
	uint8_t	portJData;					// $10439: Port J Data Register
	uint8_t	portJPullupEn;				// $1043A: Port J Pull-up Enable
	uint8_t	portJSelect;				// $1043B: Port J Select Register
	uint8_t	portJIntMask;				// $1043C: Port J Interrupt Mask Register
	uint8_t	portJIntStatus;				// $1043D: Port J Interrupt Status Register
	uint8_t	portJIntEdge;				// $1043E: Port J Interrupt Edge Register
	uint8_t	portJIntPolarity;			// $1043F: Port J Interrupt Polarity Register

	uint8_t	portKDir;					// $10440: Port K Direction Register
	uint8_t	portKData;					// $10441: Port K Data Register
	uint8_t	portKPullupdnEn;			// $10442: Port K Pull-up/down Enable
	uint8_t	portKSelect;				// $10443: Port K Select Register
	uint8_t	portKIntMask;				// $10444: Port K Interrupt Mask Register
	uint8_t	portKIntStatus;				// $10445: Port K Interrupt Status Register
	uint8_t	portKIntEdge;				// $10446: Port K Interrupt Edge Register
	uint8_t	portKIntPolarity;			// $10447: Port K Interrupt Polarity Register

	uint8_t	portMDir;					// $10448: Port M Direction Register
	uint8_t	portMData;					// $10449: Port M Data Register
	uint8_t	portMPullupdnEn;			// $1044A: Port M Pull-up/down Enable
	uint8_t	portMSelect;				// $1044B: Port M Select Register
	uint8_t	portMIntMask;				// $1044C: Port M Interrupt Mask Register
	uint8_t	portMIntStatus;				// $1044D: Port M Interrupt Status Register
	uint8_t	portMIntEdge;				// $1044E: Port M Interrupt Edge Register
	uint8_t	portMIntPolarity;			// $1044F: Port M Interrupt Polarity Register

	uint8_t	portNDir;					// $10450: Port N Direction Register
	uint8_t	portNData;					// $10451: Port N Data Register
	uint8_t	portNPullupdnEn;			// $10452: Port N Pull-up/down Enable
	uint8_t	portNSelect;				// $10453: Port N Select Register
	uint8_t	portNIntMask;				// $10454: Port N Interrupt Mask Register
	uint8_t	portNIntStatus;				// $10455: Port N Interrupt Status Register
	uint8_t	portNIntEdge;				// $10456: Port N Interrupt Edge Register
	uint8_t	portNIntPolarity;			// $10457: Port N Interrupt Polarity Register

	uint8_t	portPDir;					// $10458: Port P Direction Register
	uint8_t	portPData;					// $10459: Port P Data Register
	uint8_t	portPPullupdnEn;			// $1045A: Port P Pull-up/down Enable
	uint8_t	portPSelect;				// $1045B: Port P Select Register
	uint8_t	portPIntMask;				// $1045C: Port P Interrupt Mask Register
	uint8_t	portPIntStatus;				// $1045D: Port P Interrupt Status Register
	uint8_t	portPIntEdge;				// $1045E: Port P Interrupt Edge Register
	uint8_t	portPIntPolarity;			// $1045F: Port P Interrupt Polarity Register

	uint8_t	portRDir;					// $10460: Port R Direction Register
	uint8_t	portRData;					// $10461: Port R Data Register
	uint8_t	portRPullupdnEn;			// $10462: Port R Pull-up/down Enable
	uint8_t	portRSelect;				// $10463: Port R Select Register
	uint8_t	portRIntMask;				// $10464: Port R Interrupt Mask Register
	uint8_t	portRIntStatus;				// $10465: Port R Interrupt Status Register
	uint8_t	portRIntEdge;				// $10466: Port R Interrupt Edge Register
	uint8_t	portRIntPolarity;			// $10467: Port R Interrupt Polarity Register

	uint8_t									___filler55[0x500-0x468];

	uint16_t	pwmControl;					// $10500: PWM 1 Control Register  (PWM 1 is the same as the single PWM in EZ)
	uint8_t	pwmSampleHi;    			// $10502: PWM 1 Sample - high byte
	uint8_t	pwmSampleLo;				// $10503: PWM 1 Sample - low byte
	uint8_t	pwmPeriod;					// $10504: PWM 1 Period
	uint8_t	pwmCounter;					// $10505: PWM 1 Counter

	uint8_t									___filler56[0x510-0x506];

	uint16_t	pwm2Control;				// $10510: PWM 2 Control Register
	uint16_t	pwm2Period;					// $10512: PWM 2 Period
	uint16_t	pwm2Width;					// $10514: PWM 2 Width
	uint16_t	pwm2Counter;				// $10516: PWM 2 Counter

	uint8_t									___filler57[0x600-0x518];

	uint16_t	tmr1Control;				// $10600: Timer 1 Control Register
	uint16_t	tmr1Prescaler;				// $10602: Timer 1 Prescaler Register
	uint16_t	tmr1Compare;				// $10604: Timer 1 Compare Register
	uint16_t	tmr1Capture;				// $10606: Timer 1 Capture Register
	uint16_t	tmr1Counter;				// $10608: Timer 1 Counter Register
	uint16_t	tmr1Status;					// $1060A: Timer 1 Status Register

	uint8_t									___filler58[0x610-0x60C];

	uint16_t	tmr2Control;				// $10610: Timer 2 Control Register
	uint16_t	tmr2Prescaler;				// $10612: Timer 2 Prescaler Register
	uint16_t	tmr2Compare;				// $10614: Timer 2 Compare Register
	uint16_t	tmr2Capture;				// $10616: Timer 2 Capture Register
	uint16_t	tmr2Counter;				// $10618: Timer 2 Counter Register
	uint16_t	tmr2Status;					// $1061A: Timer 2 Status Register

	uint8_t									___filler59[0x700-0x61C];

	uint16_t	spiRxD;						// $10700: SPI Unit 1 Receive Data Register
	uint16_t	spiTxD;						// $10702: SPI Unit 1 Transmit Data Register
	uint16_t	spiCont1;					// $10704: SPI Unit 1 Control/Status Register
	uint16_t	spiIntCS;					// $10706: SPI Unit 1 Interrupt control/Status Register
	uint16_t	spiTest;					// $10708: SPI Unit 1 Test Register
	uint16_t	spiSpc;						// $1070A: SPI Unit 1 Sample period counter register

	uint8_t									___filler60[0x800-0x70C];

	uint8_t	i2cAddress;					// $10800: I2C Address Register

	uint8_t									___filler61[0x804-0x801];

	uint8_t	i2cFreqDiv;					// $10804: I2C Frequency Divider Register

	uint8_t									___filler62[0x808-0x805];

	uint8_t	i2cControl;					// $10808: I2C Control Register

	uint8_t									___filler63[0x80C-0x809];

	uint8_t	i2cStatus;					// $1080C: I2C Status Register

	uint8_t									___filler64[0x810-0x80D];

	uint8_t	i2cDataIO;					// $10810: I2C Data I/O Register

	uint8_t									___filler65[0x900-0x811];

	uint16_t	uControl;					// $10900: Uart 1 Status/Control Register (Uart 1 is the same as the single Uart in EZ)
	uint16_t	uBaud;						// $10902: Uart 1 Baud Control Register
	uint16_t	uReceive;					// $10904: Uart 1 Receive Register
	uint16_t	uTransmit;					// $10906: Uart 1 Transmit Register
	uint16_t	uMisc;						// $10908: Uart 1 Miscellaneous Register
	uint16_t	uNonIntPresc;				// $1090A: Uart 1 Non-Integer Prescaler
	uint16_t	uFIFOHMark;					// $1090C: Uart 1 Half Mark FIFO Register

	uint8_t									___filler66[0x910-0x90E];

	uint16_t	u2Control;					// $10910: Uart 2 Status/Control Register
	uint16_t	u2Baud;						// $10912: Uart 2 Baud Control Register
	uint16_t	u2Receive;					// $10914: Uart 2 Receiver Register
	uint16_t	u2Transmit;					// $10916: Uart 2 Transmitter Register
	uint16_t	u2Misc;						// $10918: Uart 2 Miscellaneous Register
	uint16_t	u2NonIntPresc;				// $1091A: Uart 2 Non-Integer Prescaler Register
	uint16_t	u2FIFOHMark;				// $1091C: Uart 2 Half Mark FIFO Register

	uint8_t									___filler67[0xB00-0x91E];

	uint32_t	rtcHourMinSec;				// $10B00: RTC Hours, Minutes, Seconds Register
	uint32_t	rtcAlarm;					// $10B04: RTC Alarm Register

	uint8_t									___filler68[0xB0A-0xB08];

	uint16_t  rtcWatchDog;				// $10B0A: RTC Watchdog Timer
	uint16_t	rtcControl;					// $10B0C: RTC Control Register
	uint16_t	rtcIntStatus;				// $10B0E: RTC Interrupt Status Register
	uint16_t	rtcIntEnable;				// $10B10: RTC Interrupt Enable Register
	uint16_t	stopWatch;					// $10B12: Stopwatch Minutes

	uint8_t									___filler69[0xB1A-0xB14];

	uint16_t	rtcDay;						// $10B1A: RTC Day
	uint16_t  rtcDayAlarm;				// $10B1C: RTC Day Alarm

	uint8_t									___filler70[0xC00-0xB1E];

	uint32_t	sdramControlE;				// $10C00: SDRAM Control Register for Chip Select E
	uint32_t  sdramControlF;				// $10C04: SDRAM Control Register for Chip Select F
	uint32_t	edoControlE;				// $10C08: EDO Control Register for Chip Select E
	uint32_t	edoControlF;				// $10C0C: EDO Control Register for Chip Select F	
	uint16_t	secondaryControl;			// $10C10: Secondary Control Register

	uint8_t									___filler71[0xD00-0xC12];

	uint32_t	emuAddrCompare;				// $10D00: Emulation Address Compare Register   
	uint32_t	emuAddrMask;				// $10D04: Emulation Address Mask Register
	uint16_t	emuControlCompare;			// $10D08: Emulation Control Compare Register
	uint16_t	emuControlMask;				// $10D0A: Emulation Control Mask Register
	uint16_t	emuControl;					// $10DOC: Emulation Control Register
	uint16_t	emuStatus;					// $10D0E: Emulation Status Register
};

typedef volatile struct HwrM68SZ328Type*	HwrM68SZ328Ptr;

#define HwrDBallType HwrM68SZ328Type
#define HwrDBallPtr HwrM68SZ328Ptr

/************************************************************************
 * ADC / ASP register for SZ
 ***********************************************************************/
#define hwrSZ328adcLowPowerOffEnable					0x04000000
#define hwrSZ328adcVoiceEnable							0x00000004
#define hwrSZ328adcPenEnable							0x00000002

#define hwrSZ328adcIntEnable							0x00000097


/************************************************************************
 * Chip ID register for SZ
 ***********************************************************************/
 #define hwrSZ328chipIDSZ								0x45

/************************************************************************
 * Mask ID register for SZ
 ***********************************************************************/
#define hwrSZ328maskID0H31J								0x01
#define hwrSZ328maskID0J75C								0x02
#define hwrSZ328maskID1J75C								0x03
#define hwrSZ328maskID0J83G								0x04
 
/************************************************************************
 * LCD Controller Bits
 ************************************************************************/
// lcdCursorXPos Register
#define	hwrSZ328LcdCursorXPosCtlMask				0xC000
	#define	hwrSZ328LcdCursorXPosCtlTrans			0x0000
	#define	hwrSZ328LcdCursorXPosCtlBlack			0x4000
	#define	hwrSZ328LcdCursorXPosCtlReverse			0x8000
	#define hwrSZ328LcdCursorXPosCtlWhite			0xC000
#define  hwrSZ328LcdCursorXPosValueMask				0x1FF
// lcdCursorYPos Register
#define  hwrSZ328LcdCursorYPosValueMask				0x1FF
	
// lcdCursorSize Register
#define hwrSZ328LcdCursorWidthMask					0x3F
   #define  hwrSZ328LcdCursorWidthOffset			0x8
#define hwrSZ328LcdCursorHeightMask					0x3F

// lcdBlinkControl Register
#define hwrSZ328LcdBlinkDivisorMask					0xFF

// lcdPanelControl1 Register
#define	hwrSZ328LcdPanelControlBusMask				0x3000
	#define	hwrSZ328LcdPanelControlBus1Bit			0x0000
	#define	hwrSZ328LcdPanelControlBus2Bit			0x1000
	#define	hwrSZ328LcdPanelControlBus4Bit			0x2000
#define	hwrSZ328LcdPanelControlGrayScale			0x4000
#define	hwrSZ328LcdPanelControl4BitGrayScale		0x0200

// lcdPWMContrastControl Register
#define hwrSZ328LcdContrastPWMWidthMask				0x00FF
#define hwrSZ328LcdContrastEnable					0x0100
#define hwrSZ328LcdLDMask							0x8000



/************************************************************************
 * Interrupt Controller Bits
 ************************************************************************/

// intMaskHi bits
// NOTE: Due to a bug in early rev's of the DragonBall, the clear bits for
// IRQ[1236] on those early chips were different than the indicator bits
// (the order was reversed).  So some older code uses the OR of the IRQ1 and
// IRQ6 bits for either, and the OR of the IRQ2 and IRQ3 bits for either.
#define hwrSZ328IntHiUSB							0x8000
#define hwrSZ328IntHiI2C							0x4000
#define hwrSZ328IntHiMMC							0x2000
#define hwrSZ328IntHiPortK							0x1000
#define hwrSZ328IntHiPortM							0x0800
#define hwrSZ328IntHiPortN							0x0400
#define hwrSZ328IntHiPortP							0x0200
#define hwrSZ328IntHiADC							0x0100
#define	hwrSZ328IntHiEMU							0x0080
#define	hwrSZ328IntHiSampleTimer					0x0040
#define hwrSZ328IntHiCSPI							0x0020
#define hwrSZ328IntHiPortR							0x0010
#define hwrSZ328IntHiIRQ6							0x0008
#define hwrSZ328IntHiIRQ3							0x0004
#define hwrSZ328IntHiIRQ2							0x0002
#define hwrSZ328IntHiIRQ1							0x0001

// intMaskLo bits
#define	hwrSZ328IntLoDMA1							0x8000
#define	hwrSZ328IntLoDMA2							0x4000
#define	hwrSZ328IntLoPWM2							0x2000
#define	hwrSZ328IntLoPWM2Bit						13
#define	hwrSZ328IntLoUART2							0x1000
#define	hwrSZ328IntLoUART2Bit						12
#define	hwrSZ328IntLoPortD							0x0800
#define	hwrSZ328IntLoPortE							0x0400
#define	hwrSZ328IntLoPortF							0x0200
#define	hwrSZ328IntLoPortG							0x0100
#define hwrSZ328IntLoAllKeys						0x0F00
#define	hwrSZ328IntLoInt0Bit						8
#define	hwrSZ328IntLoPWM							0x0080
#define	hwrSZ328IntLoPWMBit							7
#define	hwrSZ328IntLoPortJ							0x0040
#define	hwrSZ328IntLoTimer2							0x0020
#define	hwrSZ328IntLoTimer2Bit						5
#define	hwrSZ328IntLoRTC							0x0010
#define	hwrSZ328IntLoRTCBit							4
#define	hwrSZ328IntLoWDT							0x0008
#define	hwrSZ328IntLoUART							0x0004
#define	hwrSZ328IntLoUARTBit						2
#define	hwrSZ328IntLoTimer							0x0002
#define	hwrSZ328IntLoTimerBit						1
#define	hwrSZ328IntLoLCDC							0x0001

// intControl bits
// NOTE: These are different than that documented in the User's manual 
// for the DragonBall (see erratas).  The DragonBall is the same as the EZ.
// Note 2: I am going to assume that these have not changed, since the SZ
// manual is the same as the VZ's (even thought the manual is not followed) [TJC]
#define	hwrSZ328IntCtlEdge1							0x0800	
#define	hwrSZ328IntCtlEdge2							0x0400
#define	hwrSZ328IntCtlEdge3							0x0200
#define	hwrSZ328IntCtlEdge6							0x0100
#define	hwrSZ328IntCtlPol1							0x8000	
#define	hwrSZ328IntCtlPol2							0x4000
#define	hwrSZ328IntCtlPol3							0x2000
#define	hwrSZ328IntCtlPol6							0x1000
#define hwrSZ328IntCtlPol5							0x0080


/************************************************************************
 * SDRAM Controller Bits bits
 * Not all the bits are defined here-- some are pretty bad to muck with
 * in anything but initial setup of the SDRAM.
 ************************************************************************/
// sdramControl[E,F] bits
#define  hwrSZ328SdramControlEnable					0x80000000
#define  hwrSZ328SdramControlOperatingMode			0x70000000
			// rsvd
#define  hwrSZ328SdramControlIAM					0x00800000
			// rsvd
			// rsvd
			// rsvd
#define  hwrSZ328SdramControlCASLatency				0x00000300

// edoControl[E,F] bits
#define  hwrSZ328EdoControlEnable					0x80000000


/************************************************************************
 * Timer bits
 ************************************************************************/
#define	hwrSZ328TmrControlUnused					0xFC00
#define hwrSZ328TmrControlTIOOutput					0x0200
#define	hwrSZ328TmrControlFreeRun					0x0100
#define	hwrSZ328TmrControlCaptureEdgeMask			0x00C0
	#define	hwrSZ328TmrControlCaptureEdgeNone		0x0000
	#define	hwrSZ328TmrControlCaptureEdgeRising		0x0040
	#define	hwrSZ328TmrControlCaptureEdgeFalling	0x0080
	#define	hwrSZ328TmrControlCaptureEdgeBoth		0x00C0
#define	hwrSZ328TmrControlOutputModeToggle			0x0020
#define	hwrSZ328TmrControlEnInterrupt				0x0010
#define	hwrSZ328TmrControlClkSrcMask				0x000E
	#define	hwrSZ328TmrControlClkSrcStop			0x0000
	#define	hwrSZ328TmrControlClkSrcSys				0x0002
	#define	hwrSZ328TmrControlClkSrcSysBy16			0x0004
	#define	hwrSZ328TmrControlClkSrcTIN				0x0006
	#define	hwrSZ328TmrControlClkSrc32KHz			0x0008
#define	hwrSZ328TmrControlEnable					0x0001

#define	hwrSZ328TmrStatusCapture					0x0002
#define	hwrSZ328TmrStatusCaptureBit					1
#define	hwrSZ328TmrStatusCompare					0x0001
#define	hwrSZ328TmrStatusCompareBit					0


/************************************************************************
 * 68SZ328 Serial Port Register Bits
 ************************************************************************/
// uControl Register
#define	hwrSZ328UControlUARTEnable					0x8000
#define	hwrSZ328UControlRxEnable					0x4000
#define	hwrSZ328UControlTxEnable					0x2000
#define	hwrSZ328UControlRxClock1xSync				0x1000
#define	hwrSZ328UControlParityEn					0x0800
#define	hwrSZ328UControlParityOdd					0x0400
#define	hwrSZ328UControlStopBits2					0x0200
#define	hwrSZ328UControlDataBits8					0x0100
#define	hwrSZ328UControlOldDataEn					0x0080
#define	hwrSZ328UControlCTSDeltaEn					0x0040
#define	hwrSZ328UControlRxFullEn					0x0020
#define	hwrSZ328UControlRxHalfEn					0x0010
#define	hwrSZ328UControlRxRdyEn						0x0008
#define	hwrSZ328UControlTxEmptyEn					0x0004
#define	hwrSZ328UControlTxHalfEn					0x0002
#define	hwrSZ328UControlTxAvailEn					0x0001

#define	hwrSZ328UControlEnableAll					(hwrSZ328UControlUARTEnable |  	\
														 hwrSZ328UControlRxEnable |		\
														 hwrSZ328UControlTxEnable)

// uBaud Register
// UCLK output requires PE3 Select to be 0
#define	hwrSZ328UBaudUCLKDirOut						0x2000
#define	hwrSZ328UBaudBaudSrcUCLK					0x0800
#define	hwrSZ328UBaudDivider						0x0700
#define	hwrSZ328UBaudPrescaler						0x003F

#define	hwrSZ328UBaudDivideBitOffset				8


// uReceive Register
#define	hwrSZ328UReceiveFIFOFull					0x8000
#define	hwrSZ328UReceiveFIFOHalf					0x4000
#define	hwrSZ328UReceiveDataRdy						0x2000
#define	hwrSZ328UReceiveDataRdyBit					13
#define	hwrSZ328UReceiveOldData						0x1000
#define	hwrSZ328UReceiveOverrunErr					0x0800
#define	hwrSZ328UReceiveOverrunErrBit				11
#define	hwrSZ328UReceiveFrameErr					0x0400
#define	hwrSZ328UReceiveFrameErrBit					10
#define	hwrSZ328UReceiveBreakErr					0x0200
#define	hwrSZ328UReceiveBreakErrBit					9
#define	hwrSZ328UReceiveParityErr					0x0100
#define	hwrSZ328UReceiveParityErrBit				8
#define	hwrSZ328UReceiveData						0x00FF

#define	hwrSZ328UReceiveErrsMask					(hwrSZ328UReceiveOverrunErr |	\
														 hwrSZ328UReceiveFrameErr |		\
														 hwrSZ328UReceiveBreakErr |		\
														 hwrSZ328UReceiveParityErr)

// uTransmit Register
#define	hwrSZ328UTransmitFIFOEmpty					0x8000
#define	hwrSZ328UTransmitFIFOHalf					0x4000
#define	hwrSZ328UTransmitTxAvail					0x2000
#define	hwrSZ328UTransmitSendBreak					0x1000
#define	hwrSZ328UTransmitIgnoreCTS					0x0800
#define  hwrSZ328UTransmitBusy						0x0400
#define	hwrSZ328UTransmitCTSStatus					0x0200
#define	hwrSZ328UTransmitCTSDelta					0x0100
#define	hwrSZ328UTransmitData						0x00FF

// uMisc Register
#define hwrSZ328UMiscBaudTest						0x8000
#define	hwrSZ328UMiscClkSrcUCLK						0x4000
#define	hwrSZ328UMiscForceParityErr					0x2000
#define	hwrSZ328UMiscLoopback						0x1000
#define hwrSZ328UMiscBaudReset						0x0800
#define hwrSZ328UMiscIRTestEn						0x0400
#define	hwrSZ328UMiscReservedMask					0x0300
#define	hwrSZ328UMiscRTSThruFIFO					0x0080
#define	hwrSZ328UMiscRTSOut							0x0040
#define	hwrSZ328UMiscIRDAEn							0x0020
#define	hwrSZ328UMiscLoopIRDA						0x0010
#define hwrSZ328UMiscRXPolarityInv					0x0008
#define hwrSZ328UMiscTXPolarityInv					0x0004
#define hwrSZ328UMiscErrorIntStatus					0x0002
#define hwrSZ328UMiscErrorIntEnable					0x0001
#define	hwrSZ328UMiscUnused							0x0000

// uNonIntPresc Register
#define	hwrSZ328UNonIntPrescSrcIntPresc				0x0000
#define	hwrSZ328UNonIntPrescSrcNonIntPresc			0x8000

#define	hwrSZ328UNonIntPrescSelDiv128				0x0000
#define	hwrSZ328UNonIntPrescSelDiv64				0x0100
#define	hwrSZ328UNonIntPrescSelDiv32				0x0200
#define	hwrSZ328UNonIntPrescSelDiv16				0x0300
#define	hwrSZ328UNonIntPrescSelDiv8					0x0400
#define	hwrSZ328UNonIntPrescSelDiv4					0x0500
#define	hwrSZ328UNonIntPrescSelDiv2					0x0600
#define	hwrSZ328UNonIntPrescSelDiv1					0x0700

#define	hwrSZ328UNonIntPrescStepMask				0x00FF
#define	hwrSZ328UNonIntPrescSelOffset				8

// see SZ docs for explanation of the following.  This provides the correct
// pulse width for IRDA, and is just a statement in the docs. The values don't
// appear to make sense, but I just push the buttons.

// This has been deprecated in favor of a prv function in the serial driver and
// the SerialMgr (depending on whether you have Bond or not) that calculates
// the value of this register based on the clock frequency you're running on.
// There was a bug when running EZ at 20MHz that caused the IrDA pulsewidth to
// get too short.

#if 0
#define 	hwrSZ328UNonIntPrescIRDAMode			(hwrSZ328UNonIntPrescSrcIntPresc \
															| hwrSZ328UNonIntPrescSelDiv32 \
															| (hwrSZ328UNonIntPrescStepMask & 0x20))
#endif

/************************************************************************
 * PWM Bits
 ************************************************************************/
// PWM register bits of interest
#define	hwrSZ328PWMControlEnable					0x0010
#define	hwrSZ328PWMControlEnableBit					4
#define	hwrSZ328PWMControlEnableIRQ					0x0040
#define	hwrSZ328PWMIRQStatus						0x0080
// PWM divider chain output selectors
#define	hwrSZ328PWMControlDivMask					0x0003
#define	hwrSZ328PWMControlDivBy2					0x0
#define	hwrSZ328PWMControlDivBy4					0x1
#define	hwrSZ328PWMControlDivBy8					0x2
#define	hwrSZ328PWMControlDivBy16					0x3
// PWM Repeat Counts
#define	hwrSZ328PWMRepeatSample1x					0x0
#define	hwrSZ328PWMRepeatSample2x					0x4
#define	hwrSZ328PWMRepeatSample4x					0x8
#define	hwrSZ328PWMRepeatSample8x					0xC
// PWM hardware constraints
#define	hwrSZ328PWMFifoSizeInBytes					4
#define	hwrSZ328PWMPrescalerMask					0x7F00
#define	hwrSZ328PWMPrescalerOffset					8

/************************************************************************
 * PLL Bits
 ************************************************************************/
#define hwrSZ328PLLControlMCURestart				0x8000
#define hwrSZ328PLLControlUSBRestart				0x4000
#define hwrSZ328PLLControlClkEnable					0x0010
#define	hwrSZ328PLLControlMCUDisable				0x0008
#define hwrSZ328PLLControlUSBDisable				0x0004

#define	hwrSZ328PLLControlSysDMADiv2				0x0000
#define	hwrSZ328PLLControlSysDMADiv4				0x0100
#define	hwrSZ328PLLControlSysDMADiv8				0x0200
#define	hwrSZ328PLLControlSysDMADiv16				0x0300
#define	hwrSZ328PLLControlSysDMADiv1				0x0400

#define	hwrSZ328PLLControlPixDMADiv2				0x0000  
#define	hwrSZ328PLLControlPixDMADiv4				0x0800
#define	hwrSZ328PLLControlPixDMADiv8				0x1000
#define	hwrSZ328PLLControlPixDMADiv16				0x1800
#define	hwrSZ328PLLControlPixDMADiv1				0x2000


/************************************************************************
 * Real Time Clock (RTC) Bits
 ************************************************************************/

// RTC Control Register (RTCCTL / rtcControl) bits
#define hwrSZ328RTCControlRTCEnable					0x0080

// RTC Interrupt Enable Register (RTCIENR / rtcIntEnable) bits
#define hwrSZ328RTCIntEnableSample7					0x8000
#define hwrSZ328RTCIntEnableSample6					0x4000
#define hwrSZ328RTCIntEnableSample5					0x2000
#define hwrSZ328RTCIntEnableSample4					0x1000
#define hwrSZ328RTCIntEnableSample3					0x0800
#define hwrSZ328RTCIntEnableSample2					0x0400
#define hwrSZ328RTCIntEnableSample1					0x0200
#define hwrSZ328RTCIntEnableSample0					0x0100
#define hwrSZ328RTCIntEnableHour					0x0020
#define hwrSZ328RTCIntEnableSec						0x0010
#define hwrSZ328RTCIntEnable24Hr					0x0008
#define hwrSZ328RTCIntEnableAlarm					0x0004
#define hwrSZ328RTCIntEnableMinute					0x0002
#define hwrSZ328RTCIntEnableStopWatch				0x0001

// RTC Interrupt Status Register bits (rtcIntStatus)
#define hwrSZ328RTCIntStatusSample7					0x8000
#define hwrSZ328RTCIntStatusSample6					0x4000
#define hwrSZ328RTCIntStatusSample5					0x2000
#define hwrSZ328RTCIntStatusSample4					0x1000
#define hwrSZ328RTCIntStatusSample3					0x0800
#define hwrSZ328RTCIntStatusSample2					0x0400
#define hwrSZ328RTCIntStatusSample1					0x0200
#define hwrSZ328RTCIntStatusSample0					0x0100
#define hwrSZ328RTCIntStatusHour					0x0020
#define hwrSZ328RTCIntStatusSec						0x0010
#define hwrSZ328RTCIntStatus24Hr					0x0008
#define hwrSZ328RTCIntStatusAlarm					0x0004
#define hwrSZ328RTCIntStatusMinute					0x0002
#define hwrSZ328RTCIntStatusStopWatch				0x0001

// RTC Alarm register (RTCALRM / rtcAlarm) masks and offsets
#define hwrSZ328RTCAlarmSecondsMask					0x0000003fL
#define hwrSZ328RTCAlarmSecondsOffset				0
#define hwrSZ328RTCAlarmMinutesMask					0x003f0000L
#define hwrSZ328RTCAlarmMinutesOffset				16
#define hwrSZ328RTCAlarmHoursMask					0x1f000000L
#define hwrSZ328RTCAlarmHoursOffset					24

// RTC hours/minutes/seconds register (RTCHMS / rtcHourMinSec) masks and offsets
#define hwrSZ328RTCHourMinSecSecondsMask			0x0000003fL
#define hwrSZ328RTCHourMinSecSecondsOffset			0
#define hwrSZ328RTCHourMinSecMinutesMask			0x003f0000L
#define hwrSZ328RTCHourMinSecMinutesOffset			16
#define hwrSZ328RTCHourMinSecHoursMask				0x1f000000L
#define hwrSZ328RTCHourMinSecHoursOffset			24

// RTC Day register masks/offsets
#define hwrSZ328RTCDayDayMask						0x01FF
#define hwrSZ328RTCDayDayOffset						0

// RTC Watchdog Timer masks/offsets
#define hwrSZ328RTCWatchdogEnable					0x0001
#define hwrSZ328RTCWatchdogIntSel					0x0002
#define hwrSZ328RTCWatchdogIntStatus				0x0080
#define hwrSZ328RTCWatchdogCountMask				0x0300
#define hwrSZ328RTCWatchdogCountOffset				8

/************************************************************************
 * SPI Master bits
 ************************************************************************/

// spiCont1 Register
#define	hwrSZ328SPIMControlRateMask					0xE000
	#define	hwrSZ328SPIMControlRateDiv4				0x0000
	#define	hwrSZ328SPIMControlRateDiv8				0x2000
	#define	hwrSZ328SPIMControlRateDiv16			0x4000
	#define	hwrSZ328SPIMControlRateDiv32			0x6000
	#define	hwrSZ328SPIMControlRateDiv64			0x8000
	#define	hwrSZ328SPIMControlRateDiv128			0xA000
	#define	hwrSZ328SPIMControlRateDiv256			0xC000
	#define	hwrSZ328SPIMControlRateDiv512			0xE000
#define	hwrSZ328SPIMControlEnable					0x0200
#define	hwrSZ328SPIMControlExchange					0x0100
#define	hwrSZ328SPIMControlIntStatus				0x0080
#define	hwrSZ328SPIMControlIntEnable				0x0040
#define	hwrSZ328SPIMControlOppPhase					0x0020
#define	hwrSZ328SPIMControlInvPolarity				0x0010
#define	hwrSZ328SPIMControlBitsMask					0x000F


#endif	// INCLUDE_SECRET_STUFF

#endif // __M68SZ328_H__

#endif // NON_PORTABLE
