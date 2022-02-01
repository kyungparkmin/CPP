#include <iostream>
using namespace std;
long long num=0;
int cnt=0;
int odd(){
	num = (num * 3) + 1;
	return num;
}

int even(){
	num = num / 2;
	return num;
}

int main(){
	
	cin>>num;
	
	while(true){
		if(num%2==0){
			even();
			cnt++;
		}else if(num%2==1){
			odd();
			cnt++;
		}
		if(num==1){
			cout<<cnt;
			break;
		}
		if(cnt>=500){
			cout<<"-1";
			break;
		}
	}
		
	
	
}


