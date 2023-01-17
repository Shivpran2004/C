# include<stdio.h>
void pall(int n){
    int sum=0,t;
    for(t=n;n!=0;n/=10){
        
        sum=sum*10+n%10;

    }
    if(t==sum) printf("Pallindrome");
    else printf("Not a pallindrome");

}
main(){
    int n;
    scanf("%d",&n);
    pall(n);
}