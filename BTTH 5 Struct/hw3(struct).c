#include <stdio.h>
#include <string.h>

struct NhanVien{
    char MaNV[30];
    char Ten[50];
    char ChucVu[50];
    int Luong;
};

typedef struct NhanVien Nhanvien;

void hienThiDS(Nhanvien nv){
    printf("Ma nhan vien:%s\n", nv.MaNV);
    printf("Ten:%s\n", nv.Ten);
    printf("Chuc vu:%s\n", nv.ChucVu);
    printf("Luong:%dVND\n", nv.Luong);
}

void xoaNhanVien(Nhanvien qlns[], int slnv, int mucLuc){
	if(mucLuc>=slnv || mucLuc<0){
		printf("Khong hop le.\n");
		return;
	}
	for(int i=mucLuc;i<slnv-1;i++){
		qlns[i]=qlns[i+1];
	}
	slnv--;
	printf("Xoa nhan vien thanh cong.\n");
}

void sapXepTheoTen(Nhanvien qlns[],int slnv){
    Nhanvien tmp;
    int i,j;
    for(i=0;i<slnv-1;i++){
        for(j=0;j<slnv-i-1;j++){
            if(strcmp(qlns[j].Ten,qlns[j+1].Ten)>0){
                tmp=qlns[j];
                qlns[j]=qlns[j+1];
                qlns[j+1]=tmp;
            }
        }
    }
}

void sapXepTheoLuong(Nhanvien qlns[],int slnv){
    Nhanvien tmp;
    int i,j;
    for(i=0;i<slnv-1;i++){
        for(j=0;j<slnv-i-1;j++){
            if(qlns[j].Luong>qlns[j+1].Luong){
                tmp=qlns[j];
                qlns[j]=qlns[j+1];
                qlns[j+1]=tmp;
            }
        }
    }
}

int main(){
    Nhanvien qlns[100];
    int slnv=0;
    int chon;
    do{
        printf("\n---CHUONG TRINH QUAN LY NHAN SU---\n");
        printf("1.Them thong tin nhan vien.\n");
        printf("2.Hien thi danh sach nhan vien.\n");
        printf("3.Xoa nhan vien.\n");
        printf("4.Sap xep danh sach theo ten.\n");
        printf("5.Sap xep danh sach theo luong.\n");
        printf("6.Thoat chuong trinh.\n");
        printf("Nhap lua chon cua ban:");
        scanf("%d",&chon);

        switch(chon){
            case 1:
              if(slnv<100){
                Nhanvien nv;
                getchar();
                printf("Nhap ma nhan vien:");
                gets(nv.MaNV);
                printf("Nhap ten nhan vien:");
                gets(nv.Ten);
                printf("Nhap chuc vu nhan vien:");
                gets(nv.ChucVu);
                printf("Nhap luong nhan vien:");
                scanf("%d",&nv.Luong);
                qlns[slnv]=nv;
                slnv++;
                printf("Them thong tin nhan vien thanh cong.\n");
              }else{
                printf("So luong nhan vien qua tai.\n");
              }
              break;
            case 2:
                if(slnv>0){
                  printf("\n---Danh sach nhan vien---\n");
                  for(int i=0;i<slnv;i++){
                      printf("Nhan vien %d\n",i+1);
                      hienThiDS(qlns[i]);
                      printf("----------------------\n");
                    }
                }else{
                  printf("Khong tim thay thong tin nhan vien.\n");
                }
              break;
            case 3:
			  if(slnv<=0){
				printf("Danh sach nhan vien rong.\n");
			  }else{
				int mucLuc;
				printf("Nhap vi tri nhan vien can xoa(1-%d):",slnv);
				scanf("%d",&mucLuc);
				xoaNhanVien(qlns, slnv,mucLuc-1);
				slnv--;
			  }
			  break;
            case 4:
              if(slnv>0){
                sapXepTheoTen(qlns,slnv);
                printf("Sap xep danh sach nhan vien theo ten.\n");
              }else{
                printf("Khong tim thay danh sach nhan vien.\n");
              }
              break;
            case 5:
              if(slnv>0){
                sapXepTheoLuong(qlns,slnv);
                printf("Sap xep danh sach nhan vien theo luong.\n");
              }else{
                printf("Khong tim thay danh sach nhan vien.\n");
              }
              break;
            case 6:
              printf("Thoat chuong trinh.Tam biet!\n");
              break;
            default:
              printf("Lua chon khong hop le.Vui long chon lai.\n");
        }
    }while(chon!=6);
    return 0;
}