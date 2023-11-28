#include <stdio.h>
#include <string.h>

struct SinhVien {
    char hoten[50];
    char masv[10];
    int tuoi;
    float gpa;
};

typedef struct SinhVien Sinhvien;

void hienThiDS(Sinhvien s){
    printf("Ten:%s\n",s.hoten);
    printf("Masv:%s\n",s.masv);
    printf("Tuoi:%d\n",s.tuoi);
    printf("Gpa:%.2f\n",s.gpa);
}

int main(){
    Sinhvien dssv[50];
    int slsv=0;
    int chon;
    do{
        printf("CHUONG TRINH QUAN LY DANH SACH SINH VIEN\n");
        printf("1.Them thong tin sinh vien\n");
        printf("2.Hien thi danh sach sinh vien\n");
        printf("3.Cap nhat thong tin sinh vien\n");
        printf("4.Thoat ung dung\n");
        printf("Nhap lua chon cua ban:");
        scanf("%d",&chon);

        switch(chon){
            case 0:
              break;
            case 1:
              if(slsv<50){
                Sinhvien sv;
                getchar();
                printf("Nhap ten sinh vien:");
                gets(sv.hoten);
                printf("Nhap ma sinh vien:");
                gets(sv.masv);
                printf("Nhap tuoi sinh vien:");
                scanf("%d",&sv.tuoi);
                printf("Nhap gpa sinh vien:");
                scanf("%f",&sv.gpa);
                dssv[slsv]=sv;
                slsv++;
                printf("Them thong tin sinh vien thanh cong.\n");
              }else{
                printf("So luong sinh vien qua tai.\n");
              }
              break;
            case 2:
              if(slsv>0){
                printf("\n----Danh sach sinh vien----\n");
                for(int i=0;i<slsv;i++){
                    printf("Sinh vien %d\n",i+1);
                    hienThiDS(dssv[i]);
                    printf("---------------------\n");
                }
              }else{
                    printf("Khong tim thay thong tin sinh vien.\n");
                }
                break;
            case 3:
            if(slsv>0){
                int mucLuc;
                printf("\nNhap muc luc sinh vien (1-%d):",slsv);
                scanf("%d",&mucLuc);
                mucLuc--;
                if(mucLuc>=0 && mucLuc<slsv){
                    Sinhvien CapNhat;
                    getchar();
                    printf("\nNhap cap nhat ten:");
                    gets(CapNhat.hoten);
                    printf("\nNhap cap nhat ma sinh vien:");
                    gets(CapNhat.masv);
                    printf("\nNhap cap nhat tuoi:");
                    scanf("%d",&CapNhat.tuoi);
                    printf("\nNhap cap nhat gpa:");
                    scanf("%f",&CapNhat.gpa);
                    dssv[mucLuc]=CapNhat;
                    printf("Cap nhat thong tin sinh vien thanh cong.\n");
                }else{
                    printf("Muc luc khong hop le.\n");
                }
            }else{
                    printf("Khong tim thay thong tin sinh vien.\n");
                }
                break;
            case 4:
              printf("Thoat chuong trinh. Tam biet!\n");
              break;
            default:
              printf("Lua chon khong hop le. Vui long chon lai.\n");
              break;
        }
    }while(chon!=4);
    return 0;
}