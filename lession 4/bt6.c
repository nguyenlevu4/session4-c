#include <stdio.h>

int main(){
    int giadien,tong,ct1,ct2,sodien;
    printf("nhap so dien dau thang nay: ");
    scanf("%d", &ct1);
    
    printf("nhap so dien cuoi thang nay: ");
    scanf("%d",&ct2);
    
    if(ct2<ct1){
        printf("so dien dau thang phai lon hon cuoi thang yeu cau nhap lai");
    return 1;
    }

    sodien = ct2 - ct1;
    if(0<sodien && sodien<50){
        tong = sodien * 10000;}
    else if(50<=sodien && sodien<100){
            tong += (sodien-50) * 15000;
    }else if(100<=sodien && sodien<150){
        tong += (sodien-100) * 20000;
    }else if(150<=sodien && sodien<200){
        tong += (sodien-150) * 25000;
    }else if(200<=sodien){
        tong += (sodien-200) * 30000;
    }
    
    printf("tong so dien tieu thu thang nay la: %d\n", sodien);
    printf("tong so tien dien phai tra la: %d", tong);
    
    return 0;
}