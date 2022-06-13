//This Program is to print the numbers of table at single point time using array
#include<stdio.h>
void Table(int *multiply,int num,int n);

int main()
{
    int a,b,c, multiply[b][c];
    printf("Enter the number of table you want to print\n");
    scanf("%d",&a);
    for(b=0;b<a;b++){
    printf("Which table you want to print\n");
    scanf("%d",&c);
    Table(multiply[b],c,10);
    }
    return 0;
}

void Table(int *multiply,int num,int n){
    printf("Mutiplication table of %d is:- \n",num);
    for(int i= 0;i<n;i++ ){
        multiply[i]=num*(i+1);
    }
    for(int i=0;i<10;i++){
        printf("%d * %d = %d \n",num, (i+1), multiply[i]);
    }
}
