#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

  vector<int>vec answer(vector<int> v, int x)
  {
         bool ans = binary_search(v.begin(),v.end(),x);
         vector<int> vec;
         if(ans==true)
         {
             auto first = lower_bound(v.begin(),v.end(),x);
             auto second = upper_bound(v.begin(),v.end(),x);
             vec.push_back(first);
             vec.push_back(second);
             
         }
         else{
             vec.resize(2,-1);
         }
         return num;
  }
int main()
{

   vector<int> v{1,2,3,4,4,4,5,6,9};
   auto res = answer(v,4);
   cout<<res<<" ";


}
    // int n = 3;
    // vector<int> v;
    // for(int b=0;b<(1<<n);b++)
    // {
        
    //     for(int i=0;i<n;i++)
    //     {
    //         if(b & (1<<i))
    //         {
    //             v.push_back(i);
    //         }
    //     }
    // }
    // for(auto x: v)
    // {
    //     cout<<x<<" ";
    // }
