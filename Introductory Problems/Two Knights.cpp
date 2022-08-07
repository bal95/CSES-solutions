// Problem Link: https://cses.fi/problemset/task/1072

/* Idea is to realize that two knights can attack each other in 2X3 or 3X2 boards (L shape)
Attack cells = (n-1)*(n-2)+(n-2)*(n-1) [i.e. no. of 2X3 boards + no. of 3X2 boards] = 2*(n-1)*(n-2)
Replacing the knight positions, we have 2 for each situation. So total attack cells=2*2*(n-1)*(n-2)=4*(n-1)*(n-2) 
And total cells = n^2 C 2*/

#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

ll sqr(ll a){return a*a;}

void testcase(){
    ll n; cin>>n;
    for(int i=1;i<=n;i++){
        ll totalCells=(sqr(sqr(i))-sqr(i))>>1;
        ll attackCells=4*(i-1)*(i-2);
        cout<<totalCells-attackCells<<"\n";
    }
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    // int t; cin>>t;
    // while(t--)
    testcase();
}