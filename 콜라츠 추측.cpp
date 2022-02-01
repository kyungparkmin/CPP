#include <iostream>
using namespace std;
long long num=0;
int cnt=0;
int main(){
	
	cin>>num;
	
	while(true){
		
		if(num==1){
			cout<<cnt;
			break;
		}
		
		if(num%2==0){
			num = num / 2;
			cnt++;
		}else{
			num = (num * 3) + 1;
			cnt++;
		}
		
		if(cnt>=500){
			cout<<"-1";
			break;
		}
	}
}

