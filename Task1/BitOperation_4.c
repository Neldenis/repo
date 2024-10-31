#include "stdio.h"
int main(){
    
    int userNumb,userChang,out;
    printf("Enter original namber -\t");
    scanf("%d",&userNumb);
    printf("Enter change namber -\t");
    scanf("%d",&userChang);
    userNumb=userNumb|(userChang<<8);
    for(int i=1;i<=sizeof(int)*8;++i)
        printf("%d",out=(userNumb>>(sizeof(int)*8-i)&1));
    printf("\nNew number - %d",userNumb);

return 0;
}
/*4. Поменять в целом положительном числе (типа int) значение третьего байта на
введенное пользователем число (изначальное число также вводится с клавиатуры) */