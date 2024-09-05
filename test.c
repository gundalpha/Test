
#include <stdio.h>

// for Issue branch
void main()
{
	int i=0;

	for(;;)
	{
		if(i++ > 20) break;
	
		printf("i= %d\n", i);
	}
}
