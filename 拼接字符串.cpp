#include<string.h>
#include <stdio.h>
int main(){
    char string1[100];
    char string2[100];
    char string3[100];// 之前固定了长度为0,错误
    int i,j;
    gets(string1);
    gets(string2);
    for(i=0;i<strlen(string1);i++){
        string3[i] = string1[i];
    }
    for(j=0;j<strlen(string2);j++){// 初始化的值有问题
        string3[j+strlen(string1)] = string2[j];
    }
    string3[j+strlen(string1)] = '\0';// 结尾加上'\0'防止溢出
    printf("%s",string3);
}
