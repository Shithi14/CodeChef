#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

int main()
{
    int a,b,x,y;

    cin>>a>>b>>x>>y;

    int d=a+x;
    int e=b+y;
    if (d>e){
        cout<<"Dominater"<<endl;    }
    else{
        cout<<"Everule"<<endl;
    }
   

return 0;
}