//created by andreas
#include<iostream>
#include<string>

using namespace std;

int main(){
	string a;
	cin>>a;
	int c;
	int tot=0,tot0=0;

	c = a.length();
	bool tess = false;
	for(int i=0;i<c;i++){
		if(a[i] == '1'){
			tot++;
			tot0=0;
		}
		else if(a[i] == '0'){
			tot0++;
			tot=0;
		}
		if(tot >= 7 || tot0 >=7){
		cout << "YES";
		tess = true;
		break;
		}
	}
	if(!tess){
		cout << "NO";	
	}

return 0;

}

