//created by andreas
#include<bits/stdc++.h>
using namespace std;
 
int main(){
	bool prime[100005];
	int ans[100005]; 
	int n;

	cin >> n;

	for(int i=2;i<n+2;i++){
		ans[i] = 1;
	}
	int tot=1;
	memset(prime, true, sizeof(prime)); 

	for (int p=2; p*p<=n; p++) 
	{ 
		if (prime[p] == true) 
		{  
			for (int i=p*p; i<=n+1; i += p){
				prime[i] = false;
				ans[i] = tot+1; 	
			} 
		} 
	}
	cout << tot+1 << endl;
	for(int i=0;i<10;i++){
		cout << ans[i] << " ";
	}
	cout << endl;
	for(int i=2;i<10;i++){
		cout << prime[i] << " ";
	}
	return 0;
}

