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
	int n,temp,lI[100005],lD[100005];
	v<int> a,sel;
	l(i,0,100005){
		lI[i] = lD[i] = -1;
	}

	cin >> n;

	l(i,0,n){
		cin >> temp;
		a.pb(temp);
		if(lD[temp] == -1){
			sel.pb(temp);
			lD[temp] = 0;
		}
		else if(lD[temp] !=0 && lD[temp] != i-lI[temp]){
			sel.erase(remove(sel.begin(), sel.end(), temp), sel.end());
		}
		if(lI[temp] != -1){
			lD[temp] = i- lI[temp];
		}
		lI[temp] = i;		
	}

	sort(sel.begin(), sel.end());
	int ts = sel.size();
	cout << ts << endl;
	l(i,0,ts){
		cout << sel[i] << " " << lD[sel[i]] << endl;
	}
	return 0;
}

