#include <bits/stdc++.h>
using namespace std;
#define MAX 310002
#define ll long long
#define INF 99999999999999999
ll n,k,s;
ll v[MAX];
ll tim=86400;
	int main (){
		ios_base::sync_with_stdio(0);
		cin.tie(0);
		cin>>n>>k;
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		for(int i=0;i<n;i++){
			s+=(tim-v[i]);
			if(s>=k){
				cout << (i+1)<<"\n";
				return 0;
			}	
		}
	}
