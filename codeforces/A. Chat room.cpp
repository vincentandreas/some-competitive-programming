//created by andreas
#define l(i,a,b) for(int i = a; i < b; ++ i)
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	string s;
	char h[8] = "hello";
	cin >> s;
	int sz = s.length();
	int hc=0;
	l(i,0,sz){
		if(s[i] == h[hc]){
			hc++;		
		}
		if(hc > 4){
			cout << "YES" << endl;
			break;	
		} 
	}
	if(hc <5) cout << "NO" << endl;
	return 0;
}

