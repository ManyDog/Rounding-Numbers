// Rounding Numbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ctype.h"
#include "string.h"
#include "stdlib.h"
#include "math.h"


int main()
{
	float bacon1 = 9.652;
	float bacon2 = 3.3;
	printf_s("bacon1 is %.2f\n", floor(bacon1));
	printf_s("bacon2 is %.2f\n", floor(bacon2));
	//rounding in c is different than rounding in real life
	printf_s("bacon2 is %.2f\n", ceil(bacon1));
	printf_s("bacon2 is %.2f\n", ceil(bacon2));
	

    return 0;
}

