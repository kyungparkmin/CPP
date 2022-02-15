#include <iostream>
#include <stack>
using namespace std;
stack<int> st;
int main(){
	int a, num, sum=0;
	cin>>a;
	for(int i = 1; i <= a; i++){
		cin>>num;
		if(num==0){
			st.pop();
		}else{
			st.push(num);
		}	
	}
	
	for(int i = 1; !st.empty(); ++i){
		sum+=st.top();
		st.pop();
	}
	cout<<sum<<endl;
}
