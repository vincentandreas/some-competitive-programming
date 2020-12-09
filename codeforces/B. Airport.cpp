//created by andreas
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int n,p,maxnum=0,minnum=0;
	vector<int> e,minres, maxres;
	cin >> n >> p;
	int temp;
	for(int i=0;i<p;i++){
		cin >> temp;
		e.push_back(temp);
	}

	minres = maxres = e;
	sort(minres.begin(), minres.end());
	sort(maxres.rbegin(), maxres.rend());

	int tnmin = n,tn=n;
	//cout << "ex min :";
	for(int i=0;i<p;i++){
		bool empty = false;
		while(minres[i] >0){
			minnum += minres[i];
			minres[i]--;
			tnmin--;
			
			if(tnmin == 0){
				empty= true;
				break;
			}
		}
		if(empty){
			break;
		}
	}

	cout << endl;
	while(n--){
		maxnum+= maxres[0];
		maxres[0]--;
		
		for(int i=1;i<p;i++){
			if(maxres[i] <= maxres[i-1]){
				break;
			}
			swap(maxres[i],maxres[i-1]);
		}
	}

	cout << maxnum << " " << minnum;

	return 0;

}

