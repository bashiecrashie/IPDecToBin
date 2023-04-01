#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int decconvert(int decimal);

int main(int argc, char *argv[])
{

	const int SIZE = 4;

	int binip[SIZE], decip[SIZE], count;

	sscanf(argv[1], "%d.%d.%d.%d", &decip[0], &decip[1], &decip[2], &decip[3]);

	printf("Decimal IP:%d.%d.%d.%d\n", decip[0], decip[1], decip[2], decip[3]);

	for(count = 0; count < SIZE; ++count)

		binip[count] = decconvert(decip[count]);

	printf("Binary IP: %d.%d.%d.%d\n", binip[0], binip[1], binip[2], binip[3]);
	
	return 0;

}


int decconvert(int decimal)
{

	int remainder, size, binary = 0, base = 1;
    
   	while (decimal > 0)
   	{
   	   remainder = decimal % 2;
   	   binary = binary + remainder * base;
	   size = sizeof(binary);
   	   base = base * 10;
   	   decimal = decimal / 2;
   	}

	return binary;

}
