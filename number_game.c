#include <stdio.h>
#include <stdlib.h>


int main(void) {
	int a=0,b=0;
    int i;
    int x=0,win=0;
    int X[10];
    int Y[10];
    int ans=7359;
    Y[0]=ans%10;
	Y[1]=ans%100/10;
	Y[2]=ans%1000/100;
	Y[3]=ans/1000;
	
    do{
    a=0;
    b=0;
    printf("請輸入一個4位數的數字:(數字不能重複)");
    scanf("%d",&x);
    
    X[0]=x%10;
    X[1]=x%100/10;
    X[2]=x%1000/100;
    X[3]=x/1000;
    
    for(i=0;i<4;i++){
        if(X[i]==Y[i]){
         a++;
         }
        else if(X[i]==7||X[i]==3||X[i]==5||X[i]==9){
         b++;
        }
    }
    
    if(a==4){
        printf("恭喜您答對了！答案為7359\n"); 
        win=1;
     }
     
    else{
        printf("%d陽, %d陰\n",a,b);
     }
    }while(win==0);
    
    system("pause");
    return 0; 
} 
