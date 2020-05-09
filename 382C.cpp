#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n;
	long long i = 0,j = 1 , c = 0,a = 0;
	cin>>n;
	while(c <= n){
		c = i + j ;
		i = j;
		j = c;
		a++;
	}
	cout<<a - 2;
}
