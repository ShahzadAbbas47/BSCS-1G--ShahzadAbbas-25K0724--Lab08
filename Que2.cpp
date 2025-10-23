#include <stdio.h>

int main()
{
	int i,j, row, col, max = 0;
	int arr[3][3]={
	{12,34,56},
	{72,4,6},
	{90,67,12},
	};
	max=arr[0][0];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(arr[i][j] > max){
				max = arr[i][j];
				row = i;
				col = j;
			}
	}
}
	printf("Max value : %d\n", max);
	printf("Found at postion: arr[%d][%d]", row, col);
	
	return 0;
}
