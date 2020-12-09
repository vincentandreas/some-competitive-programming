//created by andreas
#define l(i,a,b) for(int i = a; i < b; ++ i)
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

char c[105][105];
int m,n;

int main(){
	char b='B',w='W';
	cin >> n >> m;
	
	l(i,0,n){
		cin >> c[i];
	}
	
	l(i,0,n){
		l(j,0,m){
			bool ib = i % 2 ==0, jb = j %2 ==0;
			
			if(c[i][j] == '.'){
				if(ib){
					if(jb){
						c[i][j] = b;
					}
					else{
						c[i][j] = w;
					}
				}
				else{
					if(jb){
						c[i][j] =w;
					}
					else{
						c[i][j] = b;
					}
				}
			}
		}
	}
	
	l(i,0,n){
		cout << c[i] << endl;
	}

return 0;

}

