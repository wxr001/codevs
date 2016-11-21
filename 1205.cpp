//codevs 1205
#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main()
{
	stack<string> str_stack;
	string tmp;
	while(cin>>tmp)
	{
		str_stack.push(tmp);
	}
	while(!str_stack.empty())
	{
		cout<<str_stack.top()<<" ";
		str_stack.pop();
	}
    return 0;
}
