#include <stdio.h>

int main()
{
	int i,j,num;
	printf("Enter number till you want for multiplication table for:");
	scanf("%d", &num);
	printf("Multiplication Table (1-5):\n\n");
	for(i=1;i<=num;i++){
		printf("%d:", i);
		for(j=1;j<=num;j++){
			
			printf(" %3d", i*j);
		}
		printf("\n");
	}
	return 0;
}
