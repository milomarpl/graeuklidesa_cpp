#include <iostream>

using namespace std;

int main()
{
    int t,a,b;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>a>>b;
        while(a!=b)
        {
            if(a<b){
                b-=a;
            }
            if(b<a){
                a-=b;
            }
        }
        cout<<a+b<<endl;

    }
    return 0;
}


