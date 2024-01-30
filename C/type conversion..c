#include<stdio.h>
int main(){

    int num1 = 10;
    int num2 = 3;
    int  floatNumber = 10.54;
    int result1 =  num1/ num2;
    float result2 = (float)   num1/ num2;
    printf("Result = %d \n",result1); // expected outcome 3..33 , here we lose some data . here , type will converted float to int  by compiler
    printf("Result = %f \n",result2); // now we get correct answer
    printf("%d", floatNumber);// // expected outcome 10.54 , here we lose some data . here , type will converted float to int  by compiler

return 0;

}
