//created by andreas
#include<iostream>
#include<string>

using namespace std;

int main(){
	int n;
	int arr[20], sum;
	cin >> n;
	
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	
	int loopTot = 1 << n;
	bool found = 0;
	for(int i=0;i < loopTot ;i++){
		int temp = i;
		for(int j=0;j<n;j++){
			if(temp % 2 == 0){
				sum += arr[j];
			}
			else{
				sum -= arr[j];
			}
			temp /=2;
		}
		if(sum % 360 == 0){
			found =1;
			break;
		}
		sum =0;
	}
	
	if(found){
		cout << "YES";
	}
	else{
		cout << "NO";
	}

return 0;

}

