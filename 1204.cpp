//codevs 1204
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str_base;
	string str_kid;
	cin>>str_base>>str_kid;
	cout<<str_base.find(str_kid)+1<<endl;
    return 0;
}
