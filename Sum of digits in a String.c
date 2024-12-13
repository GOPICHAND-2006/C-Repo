#include<stdio.h>
int main(){
    char ch[104];
    scanf("%[^\n]s",ch);
    int s=0,i;
    for(i=0;i<104;i++){
        if(ch[i]>='0'&& ch[i]<='9'){
            s+=(ch[i]-'0');
        }
    }
    printf("%d",s);
}