//created by andreas
#define l(i,a,b) for(int i = a; i < b; ++ i)
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int n, s;
	vector<pair <int,int>> input;
	cin >> s >> n;

	for(int i=0;i<n;i++){
		int x,y;
		cin >> x >> y;
		input.push_back(make_pair(x,y));
	}

	sort(input.begin(), input.end());
	bool win = true;
	int t = input.size();

	l(i,0,t){
		if(s > input[i].first){
			s+=input[i].second;
		}
		else{
			win = false;
		}
	}
	if(win){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
	return 0;
}

