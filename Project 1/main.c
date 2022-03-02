#include "bsp.h"
int main(void) {
	init_all();
	PWM_init();
	init_timer1();
    while(1){
    	compare_display();
    }
    return 0;
}
