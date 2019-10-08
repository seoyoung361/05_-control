#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) 
{
	int answer=70;
	int input;
	int cnt=0; 
	
	do
	{
	 printf("input a number :");	
	 scanf("%d", &input);	
	 if(input>answer)
	 {
	   printf(" down\n");
     }
	 else if(input<answer)
	 {
	   printf("up\n"); 
     } 
	 cnt++;   	
			
	}
	while(input!=answer);
	
	printf("congratulation. trial : %i\n", cnt);
	
	return 0;
}
