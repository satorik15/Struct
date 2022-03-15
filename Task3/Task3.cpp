#include "Task.h"
#include <iostream>
using namespace std;

int main()
{
	Circle A;
	cout << "Enter coordinates of the center x0,y0 and radius" << endl;
	cin >> A.x0;
	cin >> A.y0;
	cin >> A.r;
	print(A);
	Vector B;
	cout << "Enter coordinates of the vector x,y" << endl;
	cin >> B.x;
	cin >> B.y;
	print_2(B);
}
