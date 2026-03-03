#include "LIB/STD_TYPES.h"
#include "LIB/BIT_MATH.h"
#include "MCAL/RCC/RCC_prv.h"
#include "MCAL/RCC/RCC_int.h"
#include "MCAL/GPIO/GPIO_prv.h"
#include "MCAL/GPIO/GPIO_int.h"
#include "HAL/7_SEGMENT/7_SEGMENT_int.h"
#include "MCAL/SYSTICK/SYSTICK_int.h"

int count = 0;

int main(void)
{
	MRCC_vInit();
	H7SEGMENT_vInit();

	while(1)
	{
		H7SEGMENT_vPrintNumber(count);
		MSYSTICK_vSetDelay_ms(2000);
		count++;
		if (count == 10){
			count = 0;
		}
	}

	return 0;
}
