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
        Device            :  PIC16F18857
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

//LCD Define Pins
//==============================
#define RS      PORTCbits.RC2
#define EN      PORTCbits.RC3
#define D4      PORTCbits.RC4
#define D5      PORTCbits.RC5
#define D6      PORTCbits.RC6
#define D7      PORTCbits.RC7
//==============================

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set A_Y aliases
#define A_Y_TRIS                 TRISAbits.TRISA4
#define A_Y_LAT                  LATAbits.LATA4
#define A_Y_PORT                 PORTAbits.RA4
#define A_Y_WPU                  WPUAbits.WPUA4
#define A_Y_OD                   ODCONAbits.ODCA4
#define A_Y_ANS                  ANSELAbits.ANSA4
#define A_Y_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define A_Y_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define A_Y_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define A_Y_GetValue()           PORTAbits.RA4
#define A_Y_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define A_Y_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define A_Y_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define A_Y_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define A_Y_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define A_Y_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define A_Y_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define A_Y_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set B_Y aliases
#define B_Y_TRIS                 TRISAbits.TRISA5
#define B_Y_LAT                  LATAbits.LATA5
#define B_Y_PORT                 PORTAbits.RA5
#define B_Y_WPU                  WPUAbits.WPUA5
#define B_Y_OD                   ODCONAbits.ODCA5
#define B_Y_ANS                  ANSELAbits.ANSA5
#define B_Y_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define B_Y_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define B_Y_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define B_Y_GetValue()           PORTAbits.RA5
#define B_Y_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define B_Y_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define B_Y_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define B_Y_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define B_Y_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define B_Y_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define B_Y_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define B_Y_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set A_X aliases
#define A_X_TRIS                 TRISAbits.TRISA6
#define A_X_LAT                  LATAbits.LATA6
#define A_X_PORT                 PORTAbits.RA6
#define A_X_WPU                  WPUAbits.WPUA6
#define A_X_OD                   ODCONAbits.ODCA6
#define A_X_ANS                  ANSELAbits.ANSA6
#define A_X_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define A_X_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define A_X_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define A_X_GetValue()           PORTAbits.RA6
#define A_X_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define A_X_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define A_X_SetPullup()          do { WPUAbits.WPUA6 = 1; } while(0)
#define A_X_ResetPullup()        do { WPUAbits.WPUA6 = 0; } while(0)
#define A_X_SetPushPull()        do { ODCONAbits.ODCA6 = 0; } while(0)
#define A_X_SetOpenDrain()       do { ODCONAbits.ODCA6 = 1; } while(0)
#define A_X_SetAnalogMode()      do { ANSELAbits.ANSA6 = 1; } while(0)
#define A_X_SetDigitalMode()     do { ANSELAbits.ANSA6 = 0; } while(0)

// get/set B_X aliases
#define B_X_TRIS                 TRISAbits.TRISA7
#define B_X_LAT                  LATAbits.LATA7
#define B_X_PORT                 PORTAbits.RA7
#define B_X_WPU                  WPUAbits.WPUA7
#define B_X_OD                   ODCONAbits.ODCA7
#define B_X_ANS                  ANSELAbits.ANSA7
#define B_X_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define B_X_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define B_X_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define B_X_GetValue()           PORTAbits.RA7
#define B_X_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define B_X_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define B_X_SetPullup()          do { WPUAbits.WPUA7 = 1; } while(0)
#define B_X_ResetPullup()        do { WPUAbits.WPUA7 = 0; } while(0)
#define B_X_SetPushPull()        do { ODCONAbits.ODCA7 = 0; } while(0)
#define B_X_SetOpenDrain()       do { ODCONAbits.ODCA7 = 1; } while(0)
#define B_X_SetAnalogMode()      do { ANSELAbits.ANSA7 = 1; } while(0)
#define B_X_SetDigitalMode()     do { ANSELAbits.ANSA7 = 0; } while(0)

// get/set CLR_X aliases
#define CLR_X_TRIS                 TRISCbits.TRISC0
#define CLR_X_LAT                  LATCbits.LATC0
#define CLR_X_PORT                 PORTCbits.RC0
#define CLR_X_WPU                  WPUCbits.WPUC0
#define CLR_X_OD                   ODCONCbits.ODCC0
#define CLR_X_ANS                  ANSELCbits.ANSC0
#define CLR_X_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define CLR_X_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define CLR_X_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define CLR_X_GetValue()           PORTCbits.RC0
#define CLR_X_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define CLR_X_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define CLR_X_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define CLR_X_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define CLR_X_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define CLR_X_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define CLR_X_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define CLR_X_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set CLR_Y aliases
#define CLR_Y_TRIS                 TRISCbits.TRISC1
#define CLR_Y_LAT                  LATCbits.LATC1
#define CLR_Y_PORT                 PORTCbits.RC1
#define CLR_Y_WPU                  WPUCbits.WPUC1
#define CLR_Y_OD                   ODCONCbits.ODCC1
#define CLR_Y_ANS                  ANSELCbits.ANSC1
#define CLR_Y_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define CLR_Y_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define CLR_Y_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define CLR_Y_GetValue()           PORTCbits.RC1
#define CLR_Y_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define CLR_Y_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define CLR_Y_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define CLR_Y_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define CLR_Y_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define CLR_Y_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define CLR_Y_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define CLR_Y_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set RS aliases
#define RS_TRIS                 TRISCbits.TRISC2
#define RS_LAT                  LATCbits.LATC2
#define RS_PORT                 PORTCbits.RC2
#define RS_WPU                  WPUCbits.WPUC2
#define RS_OD                   ODCONCbits.ODCC2
#define RS_ANS                  ANSELCbits.ANSC2
#define RS_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define RS_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define RS_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define RS_GetValue()           PORTCbits.RC2
#define RS_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define RS_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define RS_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define RS_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define RS_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define RS_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define RS_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define RS_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set EN aliases
#define EN_TRIS                 TRISCbits.TRISC3
#define EN_LAT                  LATCbits.LATC3
#define EN_PORT                 PORTCbits.RC3
#define EN_WPU                  WPUCbits.WPUC3
#define EN_OD                   ODCONCbits.ODCC3
#define EN_ANS                  ANSELCbits.ANSC3
#define EN_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define EN_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define EN_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define EN_GetValue()           PORTCbits.RC3
#define EN_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define EN_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define EN_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define EN_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define EN_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define EN_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define EN_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define EN_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set RD4 aliases
#define RD4_TRIS                 TRISCbits.TRISC4
#define RD4_LAT                  LATCbits.LATC4
#define RD4_PORT                 PORTCbits.RC4
#define RD4_WPU                  WPUCbits.WPUC4
#define RD4_OD                   ODCONCbits.ODCC4
#define RD4_ANS                  ANSELCbits.ANSC4
#define RD4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define RD4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define RD4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define RD4_GetValue()           PORTCbits.RC4
#define RD4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define RD4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define RD4_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define RD4_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define RD4_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define RD4_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define RD4_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define RD4_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set RD5 aliases
#define RD5_TRIS                 TRISCbits.TRISC5
#define RD5_LAT                  LATCbits.LATC5
#define RD5_PORT                 PORTCbits.RC5
#define RD5_WPU                  WPUCbits.WPUC5
#define RD5_OD                   ODCONCbits.ODCC5
#define RD5_ANS                  ANSELCbits.ANSC5
#define RD5_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define RD5_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define RD5_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define RD5_GetValue()           PORTCbits.RC5
#define RD5_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define RD5_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define RD5_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define RD5_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define RD5_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define RD5_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define RD5_SetAnalogMode()      do { ANSELCbits.ANSC5 = 1; } while(0)
#define RD5_SetDigitalMode()     do { ANSELCbits.ANSC5 = 0; } while(0)

// get/set RD6 aliases
#define RD6_TRIS                 TRISCbits.TRISC6
#define RD6_LAT                  LATCbits.LATC6
#define RD6_PORT                 PORTCbits.RC6
#define RD6_WPU                  WPUCbits.WPUC6
#define RD6_OD                   ODCONCbits.ODCC6
#define RD6_ANS                  ANSELCbits.ANSC6
#define RD6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define RD6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define RD6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RD6_GetValue()           PORTCbits.RC6
#define RD6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define RD6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define RD6_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define RD6_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define RD6_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define RD6_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define RD6_SetAnalogMode()      do { ANSELCbits.ANSC6 = 1; } while(0)
#define RD6_SetDigitalMode()     do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set RD7 aliases
#define RD7_TRIS                 TRISCbits.TRISC7
#define RD7_LAT                  LATCbits.LATC7
#define RD7_PORT                 PORTCbits.RC7
#define RD7_WPU                  WPUCbits.WPUC7
#define RD7_OD                   ODCONCbits.ODCC7
#define RD7_ANS                  ANSELCbits.ANSC7
#define RD7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define RD7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define RD7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RD7_GetValue()           PORTCbits.RC7
#define RD7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define RD7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define RD7_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define RD7_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define RD7_SetPushPull()        do { ODCONCbits.ODCC7 = 0; } while(0)
#define RD7_SetOpenDrain()       do { ODCONCbits.ODCC7 = 1; } while(0)
#define RD7_SetAnalogMode()      do { ANSELCbits.ANSC7 = 1; } while(0)
#define RD7_SetDigitalMode()     do { ANSELCbits.ANSC7 = 0; } while(0)

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


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCAF4 pin functionality
 * @Example
    IOCAF4_ISR();
 */
void IOCAF4_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCAF4 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCAF4 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF4_SetInterruptHandler(MyInterruptHandler);

*/
void IOCAF4_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCAF4 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCAF4_SetInterruptHandler() method.
    This handler is called every time the IOCAF4 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF4_SetInterruptHandler(IOCAF4_InterruptHandler);

*/
extern void (*IOCAF4_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCAF4 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCAF4_SetInterruptHandler() method.
    This handler is called every time the IOCAF4 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF4_SetInterruptHandler(IOCAF4_DefaultInterruptHandler);

*/
void IOCAF4_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCAF5 pin functionality
 * @Example
    IOCAF5_ISR();
 */
void IOCAF5_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCAF5 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCAF5 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF5_SetInterruptHandler(MyInterruptHandler);

*/
void IOCAF5_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCAF5 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCAF5_SetInterruptHandler() method.
    This handler is called every time the IOCAF5 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF5_SetInterruptHandler(IOCAF5_InterruptHandler);

*/
extern void (*IOCAF5_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCAF5 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCAF5_SetInterruptHandler() method.
    This handler is called every time the IOCAF5 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF5_SetInterruptHandler(IOCAF5_DefaultInterruptHandler);

*/
void IOCAF5_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCAF6 pin functionality
 * @Example
    IOCAF6_ISR();
 */
void IOCAF6_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCAF6 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCAF6 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF6_SetInterruptHandler(MyInterruptHandler);

*/
void IOCAF6_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCAF6 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCAF6_SetInterruptHandler() method.
    This handler is called every time the IOCAF6 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF6_SetInterruptHandler(IOCAF6_InterruptHandler);

*/
extern void (*IOCAF6_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCAF6 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCAF6_SetInterruptHandler() method.
    This handler is called every time the IOCAF6 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF6_SetInterruptHandler(IOCAF6_DefaultInterruptHandler);

*/
void IOCAF6_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCAF7 pin functionality
 * @Example
    IOCAF7_ISR();
 */
void IOCAF7_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCAF7 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCAF7 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF7_SetInterruptHandler(MyInterruptHandler);

*/
void IOCAF7_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCAF7 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCAF7_SetInterruptHandler() method.
    This handler is called every time the IOCAF7 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF7_SetInterruptHandler(IOCAF7_InterruptHandler);

*/
extern void (*IOCAF7_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCAF7 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCAF7_SetInterruptHandler() method.
    This handler is called every time the IOCAF7 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF7_SetInterruptHandler(IOCAF7_DefaultInterruptHandler);

*/
void IOCAF7_DefaultInterruptHandler(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/