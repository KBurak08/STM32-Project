#ifndef BSP_H
#define BSP_H
#include "stm32g0xx.h"


void init_all();
void init_clocks();
void init_ext_interrupts();
void set_onboardLED_output();

void turn_on_PC6(); // turns on on-boadr led
void turn_off_PC6(); // turns off on-boadr led
void toggle_PC6(); // toggles on-boadr led

void set_output(int,int); //set the given pin to output mode (for A ports put 1,for B 2)
void set_input(int,int); //set the given pin to input mode (for A ports put 1,for B 2)

void set_pin_to1(int,int); //sets the given pin to logic 1 (for A ports put 1,for B 2)
void set_pin_to0(int,int); //sets the given pin to logic 0 (for A ports put 1,for B 2)
void toggle_pin(int,int);

void USART2_IRQHandler(); //USART2 handler
void printChar(uint8_t); // prints a character to console
void _print( char*, int); //prints a given string with given length
void print(char* buf); //prints given string

void ResetKeypad(); //set all rows-outputs to zero
void SetKeypad(); //set all rows-outputs to one
void EXTI0_1_IRQHandler(); //external interrupt handler for PA0 and PB1
void EXTI4_15_IRQHandler(); //external interrupt handler for PB7 and PB8

void SetDigit1(); //activates first digit
void SetDigit2(); //activates second digit
void SetDigit3(); //activates third digit
void SetDigit4(); //activates fourth digit

void deSetDigit1();
void deSetDigit2();
void deSetDigit3();
void deSetDigit4();

void zero(); // displays zero
void one();// displays one
void two();// displays two
void three();// displays three
void four();// displays four
void five();// displays five
void six();// displays six
void seven();// displays seven
void eight();// displays eight
void nine();// displays nine
void black(); // clears SSD

void compare_display(); //
void Find_Digit_Places(int); // separates digits
void display_result(); // displays results
void overflow(); // displays OufL
void invalid(); // displays InVd
void control_negativity(); //checks is result is negative
void add();
void sub();
void mult();
void div();
void my_log();
void my_ln();
void my_sqrt();
void my_square();
void my_sin();
void my_cos();
void my_tan();
void my_cot();
void call_operators(); // calls necessary operator
void find_digit(int,int,int,int); // displays the digits on SSD
void display_digi();
void display_toth();
void display_sqre();
void display_gaus();
void display_tria();
void display_sine();
void display_invalid(); //function that displays InVd for few at the screen when an overflow happens
void display_mode(int mode);
void TIM2_IRQHandler(void);
void ModeSelect();

void delay(int);

#endif
