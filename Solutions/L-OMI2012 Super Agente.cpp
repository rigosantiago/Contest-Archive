#include <bits/stdc++.h>
using namespace std;
#define MAX 2005
int n,c,uso;
short xi[MAX*MAX],yi[MAX*MAX];
char m[MAX][MAX];
int bfs(){
	int r=-1,i,j,k,g,h;
	int in=0,fin=uso;
	short dx[]={0,0,1,-1};
	short dy[]={1,-1,0,0};
	while(in!=fin){
		g=in;
		h=fin;
		r++;
		while(g!=h){
			int y=yi[g];int x=xi[g++];
			for(i=0;i<4;i++){
				int xf=x+dx[i];
				int yf=y+dy[i];
				if(xf>=0&&yf>=0&&xf<n&&yf<c&&m[xf][yf]=='.'){
					m[xf][yf]='#';
					yi[fin]=yf;
					xi[fin++]=xf;
				}
			}
		}
		in=g;
	}
	return r;
}
	int main (){
		ios_base::sync_with_stdio(0);
		cin.tie(0);
		cin>>n>>c;
		for(int i=0;i<n;i++){
			for(int j=0;j<c;j++){
				cin>>m[i][j];
				if(m[i][j]=='G'){
					xi[uso]=i;
					yi[uso++]=j;
				}
			}
		}
		cout << bfs()<<"\n";
	}

