//codevs 1076
#include <iostream>
#include <set>
using namespace std;
int main()
{
	int n=0;
	cin>>n;
	multiset<int> num_set;
	int tmp;
	for(int i=0;i<n;++i)
	{
		cin>>tmp;
		num_set.insert(tmp);
	}
	for(multiset<int>::iterator ptr=num_set.begin();ptr!=num_set.end();++ptr)
	{
		cout<<*ptr<<" ";
	}
    return 0;
}
