// Lab_03_3.cpp
// < ����������� ����� >
// ����������� ������ No 3.3
// ������������, ������ �������� �������.
// ������ 18

#include <iostream>
#include <cmath>

using namespace std;
int main() {

	double x;
	double R1;
	double R2;
	double y;

	cout << "x= "; cin >> x;
	cout << "R1="; cin >> R1;
	cout << "R2="; cin >> R2;

	if (x <= -2 * R1)
		y = (-R1) * (x + 2 * R1);
	else
		if (-2 * R1 < x&&x <= 0)
			y = R1 + sqrt(R1 * R1 - x * x);
		else
			if (0 < x&&x <= 2 * R2)
				y = (-sqrt(R2 * R2 - (x - R2) * (x - R2)));
			else
				if (R2 < x&&x <= 6)
					y = (2 * R2 - x) / (6 - 2 * R2);
				else
					y = -1;
	
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}

