//created by andreas
#include<iostream>
#include<string>

using namespace std;

int main(){

int n,c;

int harga[105], selisih=0;

cin >> n >> c;

for(int i=0;i<n;i++){
	cin >> harga[i];
	
	if(i>0 && harga[i-1] > harga[i]){
		int temp = harga[i-1]-harga[i];
		
		if(selisih < temp){
			selisih = temp;
		}
	}
}
int res = selisih - c;
if(res < 0){
	cout << "0";
}
else{
	cout << res;	
}
return 0;

}

