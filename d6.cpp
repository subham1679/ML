#include<iostream>
#include<algorithm>
#include<vector> 
using namespace std;
// int main()
// {
//    vector<int> v {1,2,5,98,8,7,1,12,6};
//    sort(v.begin(),v.end());
// //    for(auto c:v)
// //    {
// //        cout<<c<<"\t";
// //    }
//    cout<<"\n";
//    auto first = lower_bound(v.begin(),v.end(),9);
//    auto second = upper_bound(v.begin(),v.end(),9);
//    cout<<(first - v.begin())<<endl;
//    cout<<(second - v.begin())-1;

  int mss(vector<int> v)
  {
     int n = v.size();
     int best=0, sum=0;
     for(int i=0;i<n;i++)
     {
        sum = max(v[i], sum+v[i]);
        best = max(sum,best);

     }
     return best;
  }
int main()
{
   
   vector<int> arr {-1,2,3,4,-5};
   int ans = mss(arr);
   cout<<ans;
   
}
