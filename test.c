
#include <stdio.h>

void main()
{
	int i=0;

	for(;;)
	{
		if(i++ > 20) break;
	
		printf("i= %d\n", i);
	}
}
