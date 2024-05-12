#include<bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;
/* 
When I wrote this code ,
only Allah and I knew what I did.
   
Now... only Allah knows
*/

int32_t main () 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    n=20;  // the maximum possible k 
    vector<bool> temp(n+1,true);
    for(int i=2;i<=n;i++) {
        if(temp[i]) {
            for(int j=i+i;j<=n;j+=i) {
                temp[j]=false;
            }
        }
    }
    vector<int> prime;
    for(int i=2;i<=n;i++) {
        if(temp[i]) prime.push_back(i);
    }

    // prime factorize the number k;
    int k;
    cin>>k;
    int i = 0;
    while(k>1) {
        if(k%prime[i]==0) {
            k/=prime[i];
            cout<<prime[i]<<" ";
        }
        else i++;
    }
    cout<<endl;

    return 0;
}
