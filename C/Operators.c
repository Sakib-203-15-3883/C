#include<stdio.h>
int main(){

    int num1 = 10 ;
    int num2 = 20 ;

    printf("%d \n",num1);
    num1++;
    printf("%d\n",num1);
    ++num1;
    printf("%d\n",num1);// 12

    printf("%d\n",++num1); //13
    printf("%d\n",num1++);//13
    printf("%d\n",num1);//14

    printf("%d \n",num2);//20
    num2--;
    printf("%d\n",num2);//19
    --num2;
    printf("%d\n",num2);// 18

    printf("%d\n",--num2); //17
    printf("%d\n",num2--);//17
    printf("%d\n",num2);//16






return 0 ;

}
