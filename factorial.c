#include <stdio.h>
int fact(int n); 
int main(){

printf("%d",fact(5));
    return 0;
}
int fact(int n){
    if(n==1){
        return 1;
    }
    int factnumm1 = fact(n-1);
    int factn = factnumm1*n;
    return factn;
}