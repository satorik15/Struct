#include <iostream>
#include "Task.h"
using namespace std;
void print(Circle A)
{
    const double PI = 3.14;
    cout << "coordinates of the center of the circle: " <<"x0=" << A.x0 << " y0=" << A.y0 << endl;
    cout << "area of the circle:" << PI * pow(A.r, 2) << endl;

}
void print_2(Vector B)
{
    cout << "Coordinates of this vector" <<"x=" << B.x << " y=" << B.y << endl;
    cout << "Lenght of this vector:" << sqrt(pow(B.x, 2) + pow(B.y, 2) )<< endl;
}
