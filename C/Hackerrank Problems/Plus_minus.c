#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int b=0,c=0,d=0;
    float e,f,g;
    for(int i=0;i<n;i++){
        if(a[i]>0){
            b=b+1;
        }
        else if(a[i]<0){
            c=c+1;
        }
        else{
            d=d+1;
        }
    }
    e=(float)b/n;
    f=(float)c/n;
    g=(float)d/n;
    printf("%.5f\n%.5f\n%.5f",e,f,g);
}

