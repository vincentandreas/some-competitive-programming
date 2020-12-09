//created by andreas
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	long long int n,x;
	long long int tot=0;
	cin >> n >> x;

	vector<int> c;

	int ctr = n,temp;

	while(ctr--){
		cin >> temp;
		c.push_back(temp);
	}
	sort(c.begin(), c.end());

	int csize = c.size();
	for(int i=0;i<csize;i++){
		tot += x * c[i];
		if(x > 1){
			x--;
		}
	}

	cout << tot << endl;
	return 0;
}

