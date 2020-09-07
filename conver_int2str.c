#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

int main()
{
	uint8_t t = 96;
	char s[15];
	sprintf(s,"%d",t);
	puts(s);	
	return 0;
}
