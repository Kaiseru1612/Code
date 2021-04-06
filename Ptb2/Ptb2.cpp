#include <iostream> 
#include <math.h>


using namespace std;

int main() 
{
	float a, b, c, del, x1, x2;
	cout << "Ax^2 + Bx + C=0" << endl;
	cout << "Input A: "; cin >> a;
	cout << "Input B: "; cin >> b;
	cout << "Input C: "; cin >> c;
	del = b * b - 4*(a * c);
	if (a==0)
	{
		cout << "This is not a quadratic equation because A=0";
	}
	else
	{
		if (del > 0)
		{
			x1 = (-b + sqrt(del)) / (2 * a);
			x2 = (-b - sqrt(del)) / (2 * a);
			cout << "Roots of the equation:\n";
			cout << "x1= " << x1 << endl;
			cout << "x2= " << x2 << endl;
		}
		else
		{
			if (del == 0)
			{
				x1 = -b / (2 * a);
				cout << "Root of the equation: x= " << x1;
			}
			else
			{
				cout << "No solution";
			}
		}
	}
	return 0;
}