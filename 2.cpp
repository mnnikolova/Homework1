// Milena Nikolova
// F90963
#include <iostream>
using namespace std;

int main()
{
double x;
double y;
double z;

cout << "Enter three number: " ;

cin >> x >> y >> z;

cout << "x+y-z= " << x+y-z << endl;
cout << "x-(y-z)= " << x-(y-z) << endl;
cout << "x/y+z= " << x/y+z << endl;
cout << "x.y.z-(x.y+y.z+z.x)= " << x*y*z-(x*y+y*z+z*x) << endl;

 return 0;
}
