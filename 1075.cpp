//codevs 1075
#include <iostream>
#include <set>
using namespace std;
int main()
{
	int n=0;
	cin>>n;
	set<int> num_set;
	int tmp;
	for(int i=0;i<n;++i)
	{
		cin>>tmp;
		num_set.insert(tmp);
	}
	cout<<num_set.size()<<endl;
	for(set<int>::iterator ptr=num_set.begin();ptr!=num_set.end();++ptr)
	{
		cout<<*ptr<<" ";
	}
    return 0;
}
