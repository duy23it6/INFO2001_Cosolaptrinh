/*� Y�u c?u: Nh?p m?t s? th?c (0 <= di?m <= 10) d?i di?n cho di?m s? c?a h?c 
sinh. D?a v�o di?m s?, s? d?ng c?u tr�c r? nh�nh if-else ho?c switch d? x?p 
lo?i h?c sinh:
� [9, 10] : Xu?t s?c
� [8, 9) : Gi?i
� [6.5, 8) : Kh�
� [5, 6.5) : Trung b�nh
� [0, 5) : Y?u*/

#include<stdio.h>
#include<math.h>

int main(){
	float score;
	printf("nhap diem :");
	scanf("%f", &score);
	
	if(score >= 9 && score < 10){
		printf("Xuat sac");
	} else if(score >= 8 && score <9){
		printf("Gioi");
	}else if(score >= 6.5 && score <8){
		printf("Kha");
	}else if(score >= 5 && score <6.5){
		printf("Trung binh");
	}else{
		printf("Yeu");
	}
	
	return 0;
}
