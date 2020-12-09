//created by andreas
#define l(i,a,b) for(int i = a; i < b; ++ i)
#define v vector
#define pb push_back
#define mp make_pair
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int oc[30];

	l(i,0,30){
		oc[i] =0;
	}
	string s;
	cin >> s;
	int sl = s.length();
	l(i,0,sl){
		oc[s[i]- 'a']++;	
	}
	int od=0, ev=0;
	l(i,0,26){
		if(oc[i] % 2 == 1) od++;
		else if(oc[i] > 0 && oc[i] % 2 == 0) ev++;
	}
	bool is1 = true;

	if(od == 0 || od % 2 == 1 ) is1 = true;
	else if(od > 0  && od % 2 == 0){
		is1 = false;
	}
	if(is1) cout << "First" << endl;
	else cout << "Second" << endl;

return 0;

}

