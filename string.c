#include <stdio.h>
#include <string.h>
#include <malloc.h>

int main(){
    char s0[6]="abcde";
    char s1[30];
    // s1="asd"; not allowed
//     char* s2;
//     s2="asdakj";
//     strcpy(s1,s2);
//     strcat(s0,s1);
//     printf("%s \n",s1);
//     printf("%s \n",s0);
//     s2=malloc(sizeof(char)*30);
//     // scanf("%s",s2);
//     fgets(s2,30,stdin);
//     printf("new s %s",s2);
    // int  a[]={1,2,3};
    // for(int i=0;i<3;i++){
    //     printf("%d ",a[i]);
    // }
    char a[2][10]={"adsad","ads"};
    for(int i=0;i<2;i++){
        strcpy(a[i],"BC")   ;
        printf("%s ",a[i]);
    }
    // char *cnt=malloc(30*sizeof(char));
    // strcat(cnt,s0);
    // printf("%s\n",cnt);
}