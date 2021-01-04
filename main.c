/**
 * Last version of the program 
 * S.Banchev 2021 
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.80.0
        Device            :  PIC16F18857
        Driver Version    :  2.00
*/



#include "mcc_generated_files/mcc.h"
#include "lcd.h" 
/*
                         Main application
 */



//Variable used in application

    signed long x_pos = -20000; //variable used for x counting 
    signed long y_pos = -20000; //variable used for y counting
    //unsigned int a;
    float x_pos_calc; //variable used for  calculated x position
    float y_pos_calc; //variable used for  calculated y position
    char lcd_row[16]; //variable stored text before display on LCD
    __bit disp_update = 0; // flag bit used to register new update from optic scale
    __bit radius_flag = 0;// flag bit used for 
            
void main(void)
{
    // initialize the device
    SYSTEM_Initialize();

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();

    
    
    
   
    Lcd_Init(); //initial LCD
    Lcd_Clear(); //Clear LCD
    Lcd_Set_Cursor(1,1);
    Lcd_Write_String("Lathe C8M");
    Lcd_Set_Cursor(2,1);
    Lcd_Write_String("Bancho Lab");
    __delay_ms(2500);
    Lcd_Clear(); //Clear LCD
    
    while (1)
    {
    // Add your application code
    
    
    //Calculate X position in mm
    if(radius_flag){
        x_pos_calc = (float)x_pos * 0.005; //calculate radius distance
    }
    else{
        x_pos_calc = (float)x_pos * 0.01; //calculate diameter distance
    }
   
    //Calculate Y position in mm
    y_pos_calc = (float)y_pos * 0.005;
    
        
    //Print D/R result  on LCD
    if(radius_flag){ //if measure radius 
        sprintf(lcd_row, "R= %9.3f mm", x_pos_calc);
    }
    
    else{ //if measure diameter
        sprintf(lcd_row, "D= %9.3f mm", x_pos_calc);
    }
    Lcd_Set_Cursor(1,1);
    Lcd_Write_String(lcd_row);
    
    
    //Print L result on LCD
    sprintf(lcd_row, "L= %9.3f mm", y_pos_calc);
    Lcd_Set_Cursor(2,1);
    Lcd_Write_String(lcd_row);
   
            
            
             //Check for holding CLR_X_PORT 
            if (!CLR_X_PORT){
               __delay_ms(1500); 
               if (!CLR_X_PORT){ 
                    if (radius_flag) radius_flag = 0;
                    else radius_flag = 1;
                    disp_update = 1;
               }
            }
   
    
    
        while(!disp_update){
            
            if(!CLR_X_PORT){
                
                x_pos = 0;
                disp_update = 1;
                
                /*while(!CLR_X_PORT){
                
                    __delay_ms(1500);
                    
                    if(CLR_X_PORT)break;
                    
                    if(radius_flag)radius_flag = 0;
                    else radius_flag = 1;
                    break;
                }*/
            }

            
            if(!CLR_Y_PORT){
                y_pos = 0;
                disp_update = 1;
                
               
            }
            //x_pos = x_pos + 100;
            //__delay_ms(50);

        }
        
    
        disp_update = 0; // zero flag bit after LCD update
        
       
        
    }// end of main loop
} //end of main void 
/**
 End of File
*/