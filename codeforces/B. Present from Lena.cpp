//created by andreas
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void print(int n){
	string kado[n*2+1];
	string space[n+1];
	string angka[n+1];
	string partAngka[n+1];
	string revAngka[n+1];
	
	for(int i=0;i<=n;i++){
		string temp(i*2,' ');
		space[i] = temp;
		string temp2 = to_string(i);
		
		if(i==0){
			revAngka[0] = partAngka[0] = angka[0] = temp2;
		}
		else{
			revAngka[i] = partAngka[i] = partAngka[i-1] + " "+ temp2;
			reverse(revAngka[i].begin(), revAngka[i].end());
			angka[i] = partAngka[i-1] + " " + temp2 + " " +revAngka[i-1];
		}
	}
	
	
	int tot = n*2+1;
	for(int i=0;i<=n;i++){
		kado[i] = kado[tot-i-1] = space[n-i] + angka[i];
	}
	
	for(int i=0;i<tot;i++){
		cout << kado[i] << endl;
	}
}

int main(){
	int n;
	cin >> n;
	print(n);
	return 0;
}

