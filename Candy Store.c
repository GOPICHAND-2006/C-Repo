#include<stdio.h>
int main()
{
    int X,Y;
    int t=100;
    int R;
    scanf("%d %d",&X,&Y);
    if(X>=Y){
         R=Y;
    }
    else{
        int ER=Y-X;
        R=X+(ER*2);
    }
    printf("%d",R);
}