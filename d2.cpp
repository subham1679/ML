#include <iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int getnum(int arr[], int n)
{
    int leftmax[n];
    leftmax[0] = INT_MIN;
    
    for(int i = 1;i<n;i++)
    {
        leftmax[i] = max(leftmax[i-1],arr[i-1]);
    }
    
    int rightmin = INT_MAX;
    
    for(int i=n-1;i>=0;i--)
    {
        if((arr[i]>leftmax[i]) && (arr[i]<rightmin))
        {
            return arr[i];
            
            rightmin = min(arr[i], rightmin);
        }
    }
    
    return -1;
}

int main() {
	
	int T=0;
	cin>>T;
	while(T--)
	{
	    int N=0;
	    cin>>N;
	    int arr[N];
	    
	    for(int i=0;i<N;i++)
	    {
	        cin>>arr[i];
	    }
	    
	    int n = sizeof(arr)/sizeof(arr[0]);
	    int ans = getnum(arr,n);
	    cout<<ans<<endl;
	}
}