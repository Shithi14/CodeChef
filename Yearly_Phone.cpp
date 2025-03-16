
#include <bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{


   int n;
   cin>>n;

   int A=n%10;
   int m=n/10;
   int B=m%10;
   if (n>=1973 ||  n>=2024){
    cout<<"K"<<B<<A<<endl;
   }
   else{
    cout<<n<<endl;
   }

return 0;
}