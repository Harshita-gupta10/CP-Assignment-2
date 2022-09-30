#include<stdio.h>
int main() {
int i , j , prime , sum = 0 ;
for(i=5 ; i<50 ; i++){
    prime=1 ;
    for(j=2 ; j<i ; j++){
        if(i%j==0){
            prime=0 ;
            break ;
        }
    }

    if(prime==1) sum+=i ;
}
printf("The sum of prime numbers 5-50 is %d",sum) ;
return 0 ;
}