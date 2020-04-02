/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.80.0
        Device            :  PIC18F26K22
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.10 and above
        MPLAB 	          :  MPLAB X 5.30	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set channel_AN0 aliases
#define channel_AN0_TRIS                 TRISAbits.TRISA0
#define channel_AN0_LAT                  LATAbits.LATA0
#define channel_AN0_PORT                 PORTAbits.RA0
#define channel_AN0_ANS                  ANSELAbits.ANSA0
#define channel_AN0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define channel_AN0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define channel_AN0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define channel_AN0_GetValue()           PORTAbits.RA0
#define channel_AN0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define channel_AN0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define channel_AN0_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define channel_AN0_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set HALL_SENSOR aliases
#define HALL_SENSOR_TRIS                 TRISAbits.TRISA1
#define HALL_SENSOR_LAT                  LATAbits.LATA1
#define HALL_SENSOR_PORT                 PORTAbits.RA1
#define HALL_SENSOR_ANS                  ANSELAbits.ANSA1
#define HALL_SENSOR_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define HALL_SENSOR_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define HALL_SENSOR_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define HALL_SENSOR_GetValue()           PORTAbits.RA1
#define HALL_SENSOR_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define HALL_SENSOR_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define HALL_SENSOR_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define HALL_SENSOR_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set TOP_BUTTON aliases
#define TOP_BUTTON_TRIS                 TRISAbits.TRISA2
#define TOP_BUTTON_LAT                  LATAbits.LATA2
#define TOP_BUTTON_PORT                 PORTAbits.RA2
#define TOP_BUTTON_ANS                  ANSELAbits.ANSA2
#define TOP_BUTTON_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define TOP_BUTTON_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define TOP_BUTTON_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define TOP_BUTTON_GetValue()           PORTAbits.RA2
#define TOP_BUTTON_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define TOP_BUTTON_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define TOP_BUTTON_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define TOP_BUTTON_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set BOTTOM_BUTTON aliases
#define BOTTOM_BUTTON_TRIS                 TRISAbits.TRISA3
#define BOTTOM_BUTTON_LAT                  LATAbits.LATA3
#define BOTTOM_BUTTON_PORT                 PORTAbits.RA3
#define BOTTOM_BUTTON_ANS                  ANSELAbits.ANSA3
#define BOTTOM_BUTTON_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define BOTTOM_BUTTON_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define BOTTOM_BUTTON_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define BOTTOM_BUTTON_GetValue()           PORTAbits.RA3
#define BOTTOM_BUTTON_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define BOTTOM_BUTTON_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define BOTTOM_BUTTON_SetAnalogMode()      do { ANSELAbits.ANSA3 = 1; } while(0)
#define BOTTOM_BUTTON_SetDigitalMode()     do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set TEST_PIN aliases
#define TEST_PIN_TRIS                 TRISCbits.TRISC2
#define TEST_PIN_LAT                  LATCbits.LATC2
#define TEST_PIN_PORT                 PORTCbits.RC2
#define TEST_PIN_ANS                  ANSELCbits.ANSC2
#define TEST_PIN_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define TEST_PIN_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define TEST_PIN_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define TEST_PIN_GetValue()           PORTCbits.RC2
#define TEST_PIN_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define TEST_PIN_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define TEST_PIN_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define TEST_PIN_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set RC6 procedures
#define RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()              PORTCbits.RC6
#define RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define RC6_SetAnalogMode()         do { ANSELCbits.ANSC6 = 1; } while(0)
#define RC6_SetDigitalMode()        do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set RC7 procedures
#define RC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define RC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define RC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RC7_GetValue()              PORTCbits.RC7
#define RC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define RC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define RC7_SetAnalogMode()         do { ANSELCbits.ANSC7 = 1; } while(0)
#define RC7_SetDigitalMode()        do { ANSELCbits.ANSC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/