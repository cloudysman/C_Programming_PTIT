#include <stdio.h>
#include <math.h>

void doiCho(int *soThuNhat, int *soThuHai){
	int tam = *soThuNhat;
	*soThuNhat = *soThuHai;
	*soThuHai = tam;
}
int kiemTraSoNguyenTo(int so){
	if (so < 2) return 0;
	int canBacHai = sqrt(so);
	for (int i = 2; i <= canBacHai; i++)
		if (so % i == 0) return 0;
	return 1;
}

int mang[100000] = {0};

void taoDayFibonacci(){
	int soThuNhat = 0, soThuHai = 1, soTiepTheo = 1;
	mang[0] = 1; mang[1] = 1;
	for (int i = 3; i <= 20; i++){
		soThuNhat = soThuHai;
		soThuHai = soTiepTheo;
		soTiepTheo = soThuNhat + soThuHai;
		if(soTiepTheo < 100000)
			mang[soTiepTheo] = 1;
		else
			break;
	}
}

int tinhTongChuSo(int so){
	int tong = 0;
	while (so){
		tong += so % 10;
		so /= 10;
	}
	return tong;
}

int main(){
	int soThuNhat, soThuHai;
	scanf("%d %d", &soThuNhat, &soThuHai);
	if (soThuNhat > soThuHai) doiCho(&soThuNhat, &soThuHai);
	taoDayFibonacci();
	for (int i = soThuNhat; i <= soThuHai; i++)
		if (kiemTraSoNguyenTo(i) && mang[tinhTongChuSo(i)]) printf("%d ", i);
	return 0;
}

