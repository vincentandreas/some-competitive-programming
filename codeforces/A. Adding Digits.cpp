//created by andreas
#define l(i,a,b) for(int i = a; i < b; ++ i)
#define v vector
#define pb push_back
#define mp make_pair
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	long long int a,b,n;
	bool impo = false;
	cin >> a >> b>>n;

	l(i,0,n){
		bool f = false;
		a = (a<<3) + (a<<1);
		cout << "a: " << a << endl;
		if(a % b == 0){
			f= true;
			continue;
		}
		else{
			l(j,1,10){
				long long int temp = a +j;
				if(temp % b ==0){
					f = true;
					a = temp;
					break;
				}
				else if(temp % b !=0 && j == 9){
					impo = true;
					break;
				}
			}			
		}
		if(!f && i== n-1){
			impo = true;
			break;	
		} 
	}
	if(impo) cout << "-1" << endl;
	else cout << a << endl;

	return 0;
}

