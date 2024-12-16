#include <stdio.h>

int main(){
    int a,b,c;
    
    printf("nhap gia tri cho canh a: ");
    scanf("%d",&a);
    
    printf("nhap gia tri cho canh b: ");
    scanf("%d",&b);
    
    printf("nhap gia tri cho canh c: ");
    scanf("%d",&c);
    
    if(a + b > c && b+c>a && a+c>b){
        printf("là 3 canh tam giac");
    }else{
        printf("khong phai 3 canh tam giac");
    }
    return 0;
}