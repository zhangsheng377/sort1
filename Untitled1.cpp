#include <iostream>
#include<string.h>
#include<math.h>
#include <stdlib.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,a[200];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a+0,a+n);
    for(i=0;i<n-1;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<a[n-1]<<endl;
    return 0;
}
