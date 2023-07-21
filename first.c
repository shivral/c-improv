#include<stdio.h>
#include<malloc.h>
#include<string.h>
#include <math.h>

enum {MOnday,saturday};

int swap(int*a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int* gen(int sz){
    int *new=calloc(sz,sizeof(int));
    return new;
}

void pmat(int ar[2][2]){
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",ar[i][j]);
            ar[i][j]=100;
        }
        printf("\n");
    }
}

typedef struct name{
    int age;
    char name[30];
    // char * name;
    // char[30] name;
}name;

name * getAr(int sz){
    name* ar=malloc((sz)*sizeof(name));
    for(int i=0;i<sz;i++){
        printf("Enter age \n");
        scanf("%d",&ar[i].age);
        // ar[i].name=malloc(30*sizeof(char));
        scanf("%s",ar[i].name);
    }
    return ar;
}

void getAr2(name res[2]){
    for(int i=0;i<2;i++){
        printf("Enter age \n");
        scanf("%d",&res[i].age);
        // ar[i].name=malloc(30*sizeof(char));
        scanf("%s",res[i].name);
    }
}

void pinter(int n,name* ar){
    for(int i=0;i<n;i++){
        printf("age of %d is %d and name %s \n",i,ar[i].age,ar[i].name);
    }
    free(ar);
}
void pinter2(name ar[2]){
    for(int i=0;i<2;i++){
        printf("age of %d is %d and name %s \n",i,ar[i].age,ar[i].name);
    }
    // free(ar);
}
void printar(int* srt,int sz){
    for(int i=0;i<sz;i++){
        printf("%d %d \n",i,srt[i]);
    }
}

int * changear(int n){
    int *new=calloc(n,sizeof(int));
    // (*ar)=new;
    return new ;
}
void lefshift(int n,int ar[n],int k){
    for(int sh=0;sh<k;sh++){
        int temp=ar[0];
        for(int i=1;i<n;i++){
            ar[i-1]=ar[i];
        }
        ar[n-1]=temp;
    }
}

typedef struct st{
    int a;
    int b[2];
}st;

st getst(int x){
    st a={x,{0,1}};
    return a;
}

void modifyst(st a){
    a.a=0;
}

void pattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
}

void pattern2(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<(n-i-1)*2-1;j++){
            printf(" ");
        }
        for(int j=0;j<(i-1)+1;j++){
            printf("* ");
        }
        printf("\n");
    }
}

int main(){
    int a=3,b=4;
    printf("%d %d\n",a,b);
    swap(&a,&b);
    printf("%d, %d after swap\n",a,b);
    int *ar=gen(a);
    int mt[][2]={{1,1},{0,0}};
    // name * ar2=getAr(3);
    // pinter(3,ar2);
    // name ar2[2];
    // getAr2(ar2);
    // pinter2(ar2);
    name* pp=malloc(sizeof(name));
    pp->age=3;
    strcpy(pp->name,"Malloc");
    printf("%d and %s \n",pp->age,pp->name);
    
    int srt[]={1,23,3};
    int sz=sizeof(srt)/sizeof(int);
    printar(srt,sz);

    char * res;
    res="hellow RR";
    printf("%s \n",res);
    int* arc=changear(3);
    // changear(&arc,3);
    // printar(arc,3);
    int pp1[5]={1,2,3,4,5};
    // int ll[2]={1,2};
    lefshift(5,pp1,3);
    printar(pp1,5);
    st ss=getst(3);
    st ss3=ss;
    ss3.b[0]=3;
    st* ss2=&ss;
    ss2->a=4;
    printf("%d b %d c %dc\n",ss.a,ss2->a,ss3.a);
    for(int i=0;i<2;i++){
        printf("%d b %d c %dc\n",ss.b[i],ss2->b[i],ss3.b[i]);
    }
    modifyst(ss);
    printf("%d \n",MOnday);
    int *ll;
    int ll2[]={1,23};
    ll=ll2;
    printf("%d \n",ll[1]);
    
    // printf();
}