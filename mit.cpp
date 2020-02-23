#include <stdio.h>
#include<stdlib.h>
#include<time.h>
 
int main()
{
	srand(time(0));
	int x=rand();
	
	int mask=1;
	int t=x;
	while(t>9){
		t/=10;
		mask*=10;
	}
	printf("x=%d,mask=%d\n",x,mask);
	do{
		int d=x/mask;
		printf("%d",d);
		if(mask>9){
			printf(" ");
		}
		x%=mask;
		mask/=10;
	}while(mask>0);
	printf("\n");
	return 0;
}
