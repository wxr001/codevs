//codevs 1201
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int max_value=-2147483648;
    int min_value=2147483647;
    int tmp;
    for(int i=0;i<n;++i)
    {
        cin>>tmp;
        if(tmp<min_value)
        {
            min_value=tmp;
        }
        if(tmp>max_value)
        {
            max_value=tmp;
        }
    }
    cout<<min_value<<" "<<max_value<<endl;
    return 0;
}
