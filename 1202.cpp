//codevs 1202
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int tmp;
    int sum=0;
    for(int i=0;i<n;++i)
    {
        cin>>tmp;
        sum+=tmp;
    }
    cout<<sum<<endl;
    return 0;
}
