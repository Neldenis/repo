#include "stdio.h"
#define W 6
#define H 6
int main(){

 int array[W][H];
 int f = sizeof(array[W])/sizeof(int) -1;
	for(int i= 0; i<sizeof(array[W])/sizeof(int);++i){
	for(int j= 0; j<sizeof(array[H])/sizeof(int);++j){

	if (j<=f)
	array[i][j] =1
	else 
	array[i][j] =0;
	
		printf("%d \t",array[i][j]);
		}
		printf("\n");
		f--;
}

//hrllo test
return 0;
	
}
