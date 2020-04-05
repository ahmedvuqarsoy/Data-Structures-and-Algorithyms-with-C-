#include<iostream>
#include <bits/stdc++.h>
#include<cstdlib>

using namespace std;

#define MAX 1001

class Stack { 
	int *arr;
    int top; 
  	int cap; //capacity
  	
public:
	 
    Stack(int size = MAX);
	~Stack();
	 
    void push(int key); 
    void pop(); 
    int topRet(); 
    bool isEmpty();
    void print();
}; 


Stack::Stack(int size){
	arr = new int[size];
	cap = size;
	top = -1;
}

Stack::~Stack(){
	delete arr;
}


void Stack::push(int key){
	if(top >= cap){
		cout << "A key cannot be pushed." << endl;
	}
	else{
		arr[++top] = key;
	}
}

void Stack::pop(){
	if(top < 0){
		cout << "A key cannot be popped." << endl;
	}
	else{
		top--;
	}
}

int Stack::topRet(){
	if(top < 0){
		cout << "A key cannot be topped." << endl;
		return false;
	}
	else{
		return arr[top];
	}
}

bool Stack::isEmpty(){
	if(top < 0){
		return true;
	}
	else{
		return false;
	}
}

void Stack::print(){
	for(int i = 0; i <= top; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}




int main(){
	//Last-in-first-out
	//LIFO
	
	Stack s(10);
	
	
	s.push(12);
	s.push(15);
	s.push(21);
	s.push(9);
	s.print();
	s.pop();
	s.print();
	cout << s.topRet() << endl;
	cout << s.isEmpty();
	
	return 0;
}
