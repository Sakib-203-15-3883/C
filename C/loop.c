#include<stdio.h>
int main(){
    int n ;

    if(scanf("%d",&n) != 1  || n < 0 ){
        printf(" something wrong ! please Enter valid value ");
        return 1;
    }

    int array[n] ;


    for(int i=0; i<n ; i++){

        if(scanf("%d",&array[i])!= 1){


        printf(" something wrong ! please Enter valid value ");
        return 1;

        }

    }

    for(int j=0 ; j<n; j++){

        printf("%d \n",array[j] );
    }

return 0 ;

}
