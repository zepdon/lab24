#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

void printList(list<string> s){
	list<string>::iterator i;
	for( i = s.begin(); i != s.end(); i++){
		cout << *i << " ";
	}		
	cout << "\n";	
}

int main(){
	
	list<string> line_up;
	list<string>::iterator loc;
	
	line_up.push_back("Alice");
	line_up.push_back("Bob");
	
	loc = find(line_up.begin(),line_up.end(),"Bob");
	line_up.insert(loc,"Oscar");
	
	//Write your code here
  	line_up.push_back("Luffy");
  	line_up.push_back("Sanji");
  	line_up.push_back("Nami");

  	line_up.pop_front();
  	line_up.pop_front();

  	loc = find(line_up.begin(), line_up.end(), "Sanji");
  	line_up.insert(loc, "Narutu");

  	line_up.push_front("Prayuth");

  	loc = find(line_up.begin(), line_up.end(), "Prayuth");
  	line_up.insert(loc, "Tony");

  	loc = find(line_up.begin(), line_up.end(), "Bob");
  	line_up.erase(loc);

  	line_up.pop_front();
  	line_up.pop_front();
  	line_up.pop_front();
	
	printList(line_up);
		
	return 0;
}