#include "Right_Triangle.h"


Right_Triangle::Right_Triangle() : Triangle(10, 20, 30, 50, 50, 80, "������������� �����������") {
	name = "������������� �����������";
	if (C != 90) {
		std::cout << name << " (������� " << a << " " << b << " " << c << "; " << "���� " << A << ", " << B << ", " << C << ") ������\n";
		throw Exception("������ �������� ������. �������: ���� C �� ����� 90\n");
	}
	
};