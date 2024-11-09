#include<stdio.h>
int main()
{
    int n,i;
    int cnt=0;
    scanf("%lld",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
        if(a[i]>0){
            cnt++;
        }
    }
    int s=0;
    for(i=0;i<n;i++){
         s+=a[i];
    }
    float d=(float)s/n;
    printf("%.2f",d);
}