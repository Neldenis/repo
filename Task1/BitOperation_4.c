#include "stdio.h"
int main(){
    
    int userNumb,userChang,out=0;
    printf("Enter original namber -\t");
    scanf("%d",&userNumb);
    printf("Enter change namber -\t");
    scanf("%d",&userChang);

    for(int i=sizeof(int)*8-1;i>=0;--i){
      if ((i>=16)&&(i<=23)){
      printf("%d",out=(userChang<<16>>i&1));
      }
    else 
    printf("%d",out=(userNumb>>i&1));
    } 
    printf("\n");
return 0;
}
/*4. Поменять в целом положительном числе (типа int) значение третьего байта на
введенное пользователем число (изначальное число также вводится с клавиатуры) 
*/
