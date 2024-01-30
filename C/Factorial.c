#include<stdio.h>

long long   findFactorial(int valueToCalculateFactorial ){

    if(valueToCalculateFactorial<0){
        return -1 ;
    }

    if( valueToCalculateFactorial== 0 || valueToCalculateFactorial== 1 ){

        return 1;
    }

    else{

        return (long long ) valueToCalculateFactorial * findFactorial(valueToCalculateFactorial-1);
    }

}


int main(){

    int valueToCalculateFactorial ;
    printf("Enter an integer Number : ");
    if( scanf("%d",&valueToCalculateFactorial) != 1 ){

            printf("Plz Enter valid value :");
    return -1 ;

    }


    long long   result = findFactorial(valueToCalculateFactorial);

    if(result == -1){
        printf("Invalid : plz enter a positive integer number ");
    }else{
    printf("Factorial of %d is %lld ",valueToCalculateFactorial,result);
    }



return 0;

}
