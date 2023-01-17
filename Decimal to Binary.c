# include <stdio.h>
int main (){
int n,remain,f=1;
long long int bno=0;
printf("Please Enter a number in decimal = ");
scanf("%d",&n);

do {
    remain=n%2;
    n/=2;
    bno+=f*remain;
    f*=10;
}while(n>0);
printf("%lld",bno);/*Maximum n=2^10-1*/
return 0;
}