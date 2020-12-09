//created by andreas
#define l(i,a,b) for(int i = a; i < b; ++ i)
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int n,m;
	vector<int> p;
	cin >> n >> m;
	l(i,0,m){
		int temp;
		cin >> temp;
		p.push_back(temp);
	}
	sort(p.begin(),p.end());

	int ps = p.size(),min=2147483647;
	int sel;
	l(i,0,ps){
		if(i+n-1 < ps){
			sel = p[i+n-1]-p[i] ;
			if(min > sel){
				min = sel;
			}		
		}
	}
	cout << min;
	return 0;

}

