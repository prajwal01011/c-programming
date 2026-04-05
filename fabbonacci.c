#include <stdio.h>
int fibbo(int n);

int main() {
    // Write C code here
fibbo(6);
    return 0;
}
int fibbo(int n){

        if(n==0){
            return 0;
        }
            if(n==1){
                return 1;
            }
    int fibbonm1=fibbo(n-1);
    int fibbonm2=fibbo(n-2);
  int  fibbonacci=fibbonm1+fibbonm2;
   printf("fibbonacci of %d is :%d\n",n,fibbonacci);
    return fibbonacci;
}
