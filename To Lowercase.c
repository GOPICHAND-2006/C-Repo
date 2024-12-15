#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char ch[104];
    scanf("%[^\n]s",ch);
    int x=strlen(ch);
    for(int i=0;i<=x;i++){
        ch[i]=tolower(ch[i]);
    }
    printf("%s",ch);
}