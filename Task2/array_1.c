#include "stdio.h"
int main(){
int userN,count=1;
printf("Enter array size - ");
scanf("%d",&userN);
int array[userN][userN];
 for (int i =0;i<userN;i++){
	for(int j =0;j<userN;j++){
		printf("%d ",array[i][j]=count);
		count++;
		}
		printf("\n");
 }
return 0;
	
}
