#include <iostream>
#include <string>
#include <stack>
using namespace std;
stack<int> st;
int main(){
	int a; 
	cin>>a;
	for(int i = 0; i < a; i++){
		string input; 
		cin>>input;
		
		if(input == "push"){
			int x;
			cin >> x;
			st.push(x);
		}
		
		else if(input == "pop"){
			if(!st.empty()){
				cout << st.top() << endl;
				st.pop();
			}else{
				cout<<"-1"<<endl;
			}
		}
		
		else if(input == "size"){
			cout<<st.size()<<endl;
		}
		
		else if(input == "empty"){
			if(!st.empty()){
				cout<<"0"<<endl;
			}else{
				cout<<"1"<<endl;
			}
		}
		
		else if(input == "top"){
			if(!st.empty()){
				cout<<st.top()<<endl;
			}else{
				cout<<"-1"<<endl;
			}
		}
	}
}
