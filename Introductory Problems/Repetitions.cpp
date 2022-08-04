// Problem Link: https://cses.fi/problemset/task/1069

#include<bits/stdc++.h>

using namespace std;

void testcase(){
    string s; cin>>s;
    int len=s.length();int max=0;
    for(int i=0;i<len;){
        int j=i,count=0; char c=s.at(i);
        while(j<len&&s.at(j)==c){
            count++; j++;
        }
        max=count>max?count:max;
        i=j;
    }
    cout<<max;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    // int t; cin>>t;
    // while(t--)
    testcase();
}