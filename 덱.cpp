#include <iostream>
#include <string>
#include <deque>
using namespace std;
deque<int> d;
int main(){
	int a; 
	cin>>a;
	for(int i = 0; i < a; i++){
		string input; 
		cin>>input;
		
		if(input == "push_front"){
			int x;
			cin >> x;
			d.push_front(x);
		}
		
		else if(input == "push_back"){
			int x;
			cin>>x;
			d.push_back(x);
		}
		
		else if(input == "pop_front"){
			if(!d.empty()){
				cout<<d.front()<<endl;
				d.pop_front();
			}else{
				cout<<"-1"<<endl;
			}
		}
		
		else if(input == "pop_back"){
			if(!d.empty()){
				cout<<d.back()<<endl;
				d.pop_back();
			}else{
				cout<<"-1"<<endl;
			}
		}
		
		else if(input == "size"){
			cout<<d.size()<<endl;
		}
		
		else if(input == "empty"){
			if(!d.empty()){
				cout<<"0"<<endl;
			}else{
				cout<<"1"<<endl;
			}
		}
		
		else if(input == "front"){
			if(!d.empty()){
				cout<<d.front()<<endl;
			}else{
				cout<<"-1"<<endl;
			}
		}
		
		else if(input == "back"){
			if(!d.empty()){
				cout<<d.back()<<endl;
			}else{
				cout<<"-1"<<endl;
			}
		}
	}
}
