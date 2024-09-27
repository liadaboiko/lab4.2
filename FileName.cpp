#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, A, B, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(8) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		A = (1 / x) + 4;

		if (x < 1)
			B = 0.65 * x + 4 * (x * x);
		else
			if (x >= 5)
				B = sqrt(1 + sqrt(x));
			else
				B = atan2(x + 6.1, 2) / exp(x);
		y = A - B;
		cout << "|" << setw(7) << setprecision(3) << x
			<< "|" << setw(9) << setprecision(3) << y
			<< "|" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	system("pause");
	return 0;
}
