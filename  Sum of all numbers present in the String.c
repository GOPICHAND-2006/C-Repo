#include<stdio.h>
#include<string.h>
int main(){
    char ch[104];
    scanf("%s",ch);
    int s=0;
    int x=strlen(ch);
    for(int i=0;i<=x;i++){
        if(ch[i]>='0' && ch[i]<='9'){
            s+=(ch[i]-'0');
        }
    }
    printf("%d",s);
}