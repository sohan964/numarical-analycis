#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(4);
    cout<<"a      b     x"<<endl;
    double a,b;
    cin>>a>>b;
    int i=1;
    while(a!=b){
        cout<<i<<" ";
        double res=(a+b)/2;
        double x=((res*res*res)-res-5);
        if(x<0){
            a=b;
            // cout<<a
        }
        b=res;
        cout<<a<<" "<<b<<" "<<x<<endl;
       // cout<<b<<endl;
        i++;
        
        
    }
   
   //cout<<i<<endl;

    return 0;
}
