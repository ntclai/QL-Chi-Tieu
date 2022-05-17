#include "NoBaNam.h"

NoBaNam::NoBaNam()
{
	this->laiSuat = 0;
}

void NoBaNam::ganLaiXuatNam(double laiSuat)
{
	this->laiSuat = laiSuat;
}

double NoBaNam::tinhTongNo()
{
	return this->tienNoGoc*pow((1+this->laiSuat),3);
}

double NoBaNam::tinhTongNoSauXThang(int x)
{
	while (x < 0 || x>36) {
		cout << "Thoi gian truyen vao khong hop le, nhap lai: ";
		cin >> x;
	}
	double laiSuatThang = this->laiSuat / 12;
	return this->tienNoGoc*pow((1+laiSuatThang),x);
}
