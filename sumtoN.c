#include <stdio.h>


int main(){
int n, output;
printf("enter the n");
scanf("%d", n);

output = sumtoN(n);

printf("The sum to N is %d", output)

 return 0 

}


int sumtoN(int n){
    int i, sum=0;
if (n<1){
    for (i = 1; i = n ; i++) {
        sum = sum+i;
    }
        return sum;
    }
    else{
        return -1;

    }
}