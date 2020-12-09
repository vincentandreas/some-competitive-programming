//created by andreas
#include<iostream>
#include<string>
#include<set>
using namespace std;

int main(){
	int n;
	set<int> setx,sety;
	cin >> n;
	int tot=0;
	int lastx, lasty, currx, curry;
	for(int i=0;i<n;i++){
		cin >> currx >>  curry;	
		if(i > 0 && setx.count(currx) == 0 && sety.count(curry) == 0){
			tot+= 1;
		}
		setx.insert(currx);
		sety.insert(curry);
	}
	cout << tot;
	return 0;
}