//created by andreas
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i=n+1; ;i++){
		string tes = to_string(i);
		bool temp = true;	
		for(int j=0;j<tes.length();j++){
			size_t n = count(tes.begin(), tes.end(), tes[j]);
			if(n > 1){
				temp = false;
			}
		}
		if(temp){
			cout << i;
			break;
		}
	}
	return 0;
}