#include <stdio.h>
#include <malloc.h>
int main(){
    FILE* fl;
    fl=fopen("test.txt","r");
             char*c;

    while (1)
    {
        fgets(c,30,stdin);
        break;
        /* code */
    }
            printf("%s",c);

    
    while (!feof(fl))
    {
        // char *c=malloc(30*sizeof(char));
        char*c;
        fgets(c,30,stdin);
        printf("%s",c);
    }
    fl=fopen("test.txt","a");
    char *a="\npeopepeo";
    fprintf(fl,"%s",a);
    
}