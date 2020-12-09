//created by andreas
#include<iostream>
#include<string>

using namespace std;

int main(){

int q;

long long int n,m, total=0;
cin >> q;
for(int i=0;i<q;i++){
	cin >> n >> m;
	
	for(long long int i=1;i<=n;i++){
		if(i % m == 0){
			total+=i % 10;
		}
	}
	cout << total << endl;
	total =0;
}

return 0;

}

