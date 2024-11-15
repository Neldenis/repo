#include "stdio.h"


int main(){
	int userN=0,count=1;
		scanf("%d",&userN);
	int array[userN][userN];

int ic=0,k=0;
int jc=0,z=userN;
array[0][0]=1;

while(count!=userN*userN){
	
		for(int j =jc+1;j<userN-k;j++){
			array[ic][j]=++count;
			jc=j;
		}
		for (int i = ic+1; i<userN-k; i++)
		{
			array[i][jc]=++count;
			ic=i;
		}
		for(int j =jc-1;j>=userN-z;j--){
			array[ic][j]=++count;
			jc=j;
		}
		z--;
		for(int i=ic-1;i>=userN-z;i--){
			array[i][jc]=++count;
			ic=i;
		}
		k++;

	
}

	
	
	for(int i=0;i<userN;i++){
		for(int j=0;j<userN;j++){
			printf("%d\t",array[i][j]);
	}
		printf("\n");
	}


return 0;
	
}
/*
4. Заполнить матрицу числами от 1 до N2 улиткой.
Пример:
 1 2   3  4 5
16 17 18 19 6
15 24 25 20 7
14 23 22 21 8
13 12 11 10 9


*/
