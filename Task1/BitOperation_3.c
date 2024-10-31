#include "stdio.h"
int main(){
    int userNumb,out,count=0;
    scanf("%d",&userNumb);
    for(int i=1;i<=sizeof(int)*8;++i){
        printf("%d",out=(userNumb>>(sizeof(int)*8-i)&1));
        if(out==1)count++;
    }
    printf("\nNumber of units - %d",count);
return 0;
}
/*3. Найти количество единиц в двоичном представлении целого положительного числа
(число вводится с клавиатуры).*/