#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) 
{
	int i=0, meter;
	
    while (i<3)
    {
    	meter=i*1609;
    	printf("%d 마일은 %d 미터입니다.\n", i, meter);
    	i++;
	}
	
	return 0;
}
