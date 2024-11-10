#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int cnt=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i-1]%2!=0 && a[i+1]%2!=0 && a[i]%2==0){
            cnt++;
        }
    }
    printf("%d",cnt);
}