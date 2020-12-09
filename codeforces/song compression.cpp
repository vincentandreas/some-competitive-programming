//created by andreas
#include<iostream>
#include<string>
#include<utility>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	pair <int,int> angka;
	long int n,m;
	vector<pair<int,int>> angkasv;
	vector<int> selisih;
	long long int total1=0, total2=0;
	cin >> n >> m;
	
	for(int i=0;i<n;i++){
		cin >> angka.first >> angka.second;
		angkasv.push_back(angka);
		total1+=angka.first;
		total2+=angka.second;
		selisih.push_back(angka.first - angka.second);
	}
	sort(selisih.rbegin(), selisih.rend());
	
	if(m < total2){
		cout << "-1"<< endl;
	}
	else if(m > total1){
		cout << "0"<< endl;
	}
	else{
		int ctr=0;
		bool found = false;
		for(int i=0;i<selisih.size();i++){
			if(m < total1){
				total1-=selisih[i];
				ctr++;
				found = true;
			}
			else if(i == 0 && m == total1){
				found = true;
			}
		}
		if(!found){
			cout << "line 43" << endl;
			cout << "-1";
		}
		else{
			cout << ctr;
		}
	}
	return 0;

}

