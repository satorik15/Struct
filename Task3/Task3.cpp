#include "Task.h"
#include <iostream>
using namespace std;

int main()
{
	Circle A (3,4,5);
	cout << "Enter coordinates of the center x0,y0 and radius" << endl;
	
	cin >> A.x0;
	cin >> A.y0;
	cin >> A.r;
	A.print(A);
	Vector B;
	cout << "Enter coordinates of the vector x,y" << endl;
	cin >> B.x;
	cin >> B.y;
	B.print_2(B);
}
