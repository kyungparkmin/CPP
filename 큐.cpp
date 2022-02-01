#include <iostream>
#include <string>
#include <queue>
using namespace std;
queue<int> q;
int main(){
	int a; 
	cin>>a;
	for(int i = 0; i < a; i++){
		string input; 
		cin>>input;
		
		if(input == "push"){
			int x;
			cin >> x;
			q.push(x);
		}
		
		else if(input == "pop"){
			if(!q.empty()){
				cout << q.front() << endl;
				q.pop();
			}else{
				cout<<"-1"<<endl;
			}
		}
		
		else if(input == "size"){
			cout<<q.size()<<endl;
		}
		
		else if(input == "empty"){
			if(!q.empty()){
				cout<<"0"<<endl;
			}else{
				cout<<"1"<<endl;
			}
		}
		
		else if(input == "front"){
			if(!q.empty()){
				cout<<q.front()<<endl;
			}else{
				cout<<"-1"<<endl;
			}
		}
		
		else if(input == "back"){
			if(!q.empty()){
				cout<<q.back()<<endl;
			}else{
				cout<<"-1"<<endl;
			}
		}
	}
}
