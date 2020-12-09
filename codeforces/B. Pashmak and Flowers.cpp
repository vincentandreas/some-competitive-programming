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
	long long int n,t,max,ctr;
	v<int> b;

	cin >> n;
	l(i,0,n){
		cin >> t;
		b.pb(t);	
	}

	sort(b.begin(),b.end());

	max = b[b.size()-1] - b[0];
	long long int bs = b.size(),y=1,z=1;
	l(i,1,bs){
		if(b[0] == b[i] && i != bs-1) y++;
		else break;
	} 

	for(int i=bs-2;i>0;i--){
		if(b[bs-1] == b[i]) z++;
		else break;
	}

	if(max == 0){
		long long int tot = (n-1)*n/2;
		cout << max << " " << tot;
	}
	else{
		cout << max << " " << y *z;		
	}
	return 0;

}
