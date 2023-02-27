#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <queue>
#include <map>
#include <string.h>
#include <math.h>
#include <stdio.h>
#include <deque>
#include <bits/stdc++.h>
//#include "testlib.h"
using namespace std;
#define ll long long
#define pii pair<int,int>
#define qi ios::sync_with_stdio(0)

bool debug=true;

/*    *************************************
	  * Written in New Computer           *
	  * The following code belongs to     *
	  * XiaoGeNintendo of HellHoleStudios *
	  *************************************
*/
template<typename T1,typename T2>ostream& operator<<(ostream& os,pair<T1,T2> ptt){
	os<<ptt.first<<","<<ptt.second;
	return os;
}
template<typename T>ostream& operator<<(ostream& os,vector<T> vt){
	os<<"{";
	for(int i=0;i<vt.size();i++){
		os<<vt[i]<<" ";
	}
	os<<"}";
	return os;
}

int n,m;
char s[25][25];
int dx[]={0,0,-1,1},dy[]={-1,1,0,0};

int main(int argc,char* argv[]){
    n=1;
	cin>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>s[i][j];
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(s[i][j]=='H'){
				for(int k=0;k<4;k++){
					int nx=i+dx[k],ny=j+dy[k];
					if(nx>=0 && nx<n && ny>=0 && ny<m && s[nx][ny]=='H'){
						cout<<"NO";
						return 0;
					}	
				}
			}
		}
	}
	
	cout<<"YES"<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(s[i][j]=='H'){
				cout<<"H";
			}else{
				cout<<"B";
			}
		}
		cout<<endl;
	}
	return 0;
}
