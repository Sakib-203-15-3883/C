#include<stdio.h>

int F(int n){

    if(n==1){
        return 1;
    } else if(n==0){

        return 0 ;

    }else{

        return F(n-1)+F(n-2);

    }



}
int main(){
    int n;

    scanf("%d",&n);

    int result = F(n);

    printf("result = %d",result);


return 0 ;

}
