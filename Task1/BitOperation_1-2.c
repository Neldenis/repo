#include "stdio.h"
int main(){
    int userNumb,out;
    scanf("%d",&userNumb);
    for(int i=1;i<=sizeof(int)*8;++i){
        printf("%d",out=(userNumb>>(sizeof(int)*8-i)&1));
    }
return 0;
}
/*1. Вывести двоичное представление целого положительного числа, используя битовые
операции (число вводится с клавиатуры).
2. Вывести двоичное представление целого отрицательного числа, используя битовые
операции (число вводится с клавиатуры).*/