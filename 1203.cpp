//codevs 1203
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double f1,f2;
    cin>>f1>>f2;
    cout<<(fabs(f1-f2)<=1e-8?"yes":"no");
    return 0;
}
