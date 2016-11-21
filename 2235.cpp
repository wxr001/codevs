//codevs 2235
#include <iostream>
using namespace std;
int main()
{
	int money=0;
	double percent=0;
	cin>>money>>percent;
	if(money*(percent/10)-static_cast<int>(money*(percent/10)/10)*10>4)
	{
		cout<<static_cast<int>(money*(percent/10)/10)*10+10<<endl;
	}
	else
	{
		cout<<static_cast<int>(money*(percent/10)/10)*10<<endl;
	}
    return 0;
}
