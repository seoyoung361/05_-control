#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) 
{
	int i=0, meter;
	
    while (i<3)
    {
    	meter=i*1609;
    	printf("%d ������ %d �����Դϴ�.\n", i, meter);
    	i++;
	}
	
	return 0;
}
