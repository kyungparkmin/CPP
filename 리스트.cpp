#include <iostream>
#include <string>
#include <list>
using namespace std;
list<int> l;
int main(){
	int a; 
	cin>>a;
	for(int i = 0; i < a; i++){
		string input; 
		cin>>input;
		
		if(input == "push_front"){
			int x;
			cin >> x;
			l.push_front(x);
		}
		
		else if(input == "push_back"){
			int x;
			cin>>x;
			l.push_back(x);
		}
		
		else if(input == "pop_front"){
			if(!l.empty()){
				cout<<l.front()<<endl;
				l.pop_front();
			}else{
				cout<<"-1"<<endl;
			}
		}
		
		else if(input == "pop_back"){
			if(!l.empty()){
				cout<<l.back()<<endl;
				l.pop_back();
			}else{
				cout<<"-1"<<endl;
			}
		}
		
		else if(input == "size"){
			cout<<l.size()<<endl;
		}
		
		else if(input == "empty"){
			if(!l.empty()){
				cout<<"0"<<endl;
			}else{
				cout<<"1"<<endl;
			}
		}
		
		else if(input == "front"){
			if(!l.empty()){
				cout<<l.front()<<endl;
			}else{
				cout<<"-1"<<endl;
			}
		}
		
		else if(input == "back"){
			if(!l.empty()){
				cout<<l.back()<<endl;
			}else{
				cout<<"-1"<<endl;
			}
		}
	}
}
