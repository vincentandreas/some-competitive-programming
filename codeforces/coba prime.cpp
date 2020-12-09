//created by andreas
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
vector<int> v;
v.push_back(2);
for(int i=3;i<100;i+=2){
	bool temp = false;
	for(int j=0; j< v.size();j++){
		if(i % v[j] == 0){
			break;
		}
		else if( j == v.size()-1){
			temp = true;
			v.push_back(i);
		}
	}
}

for(int i=0;i<v.size();i++){
	cout << v[i] << " ";
}


return 0;

}

