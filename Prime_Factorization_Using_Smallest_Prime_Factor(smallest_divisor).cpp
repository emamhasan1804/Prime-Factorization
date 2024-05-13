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
    cin>>n;
    map<int,int> mp;
    for(int i=2;i<=sqrt(n);i++) {
        if(n%i==0) {
            while(n%i==0) {
                mp[i]++;
                n/=i;
            }
        }
    }
    if(n>1) {    // jodi kono  number prime thake jemon 5 , tahole uporer loop sqrt(5) porjonto cholar karone 5 check hobe na tai eita dite hobe
        mp[n]++;
    }
    for(auto it:mp) cout<<it.first<<" "<<it.second<<endl;   // first prime second times asef

    return 0;
}
