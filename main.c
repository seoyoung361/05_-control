#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) 
{
	int num=0;
	char c; 
	
	printf("input a string:");
	
	while((c=getchar() )!='\n')
    
    {
    	if(c<= '9' && c >='0')
    	{
    		num++;
		}
	}
    
    printf("%i\n", num);
	
	return 0;
}
