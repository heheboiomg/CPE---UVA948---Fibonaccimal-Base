//UVA948 - Fibonaccimal Base

#include <bits/stdc++.h>
using namespace std;

int main(){
    int f[40]={0,1};

    for(int i=2;i<=40;i++){
        f[i]=f[i-1]+f[i-2];
    }

    int n;
    cin>>n;

    while(n--){
        int a;
        cin>>a;
        cout<<a<<" = ";

        int check=0,base[41]={};

        for(int j=39;j>=2;j--){
            if(a-f[j]>=0){
                check=1;
                if(base[j+1]!=1){
                    base[j]=1;
                    a=a-f[j];
                }
            }
            if(check==1){
                cout<<base[j];
            }
        }
        cout<<" (fib)"<<endl;
    }

    return 0;
}