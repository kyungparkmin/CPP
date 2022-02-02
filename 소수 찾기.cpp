#include <iostream>
using namespace std;
int main(){
	int a, i, j, num, cnt=0;
	cin>>a;
	for(int i = 1; i <= a; i++){
		cin>>num;
		for(j = 2; j < num; j++){
			if((num%j)==0) {
				break;
			}
		}
		if(num == j){
			cnt++;
		}
	}
	cout<<cnt<<endl;
}
