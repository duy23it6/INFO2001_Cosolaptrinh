/*• Viết chương trình nhập điểm của sinh viên trong một lớp học vào một mảng.
• Tính và in ra điểm trung bình của lớp.*/
#include <stdio.h>

int main(){
    int diem[100];
    int soLuongSV;
    float tongDiem=0;
    float diemTB=0;
    printf("Nhap so luong sinh vien:");
    scanf("%d",&soLuongSV);
    for(int i=0;i<soLuongSV;i++){
        printf("Nhap diem cua sinh vien thu %d: ",i+1);
        scanf("%d",&diem[i]);
        tongDiem+=diem[i];
    }
    diemTB=tongDiem/soLuongSV;
    printf("Diem trung binh cua lop=%.2f\n", diemTB);
    return 0;
}
