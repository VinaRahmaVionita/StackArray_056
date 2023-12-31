#include <iostream>
#include <string>

using namespace std;

class StackArray {
private:
	int stack_array[5];
	int top;

public:
	//construktor
	StackArray() {
		top = -1;
	}
	
	int push(int element) {
		if (top == 4) {
			cout << "number of data exceed the limit" << endl;
			return 0;
		}

		top++;   //step 2
		stack_array[top] = element; //step 3
		cout << endl;
		cout << element << "ditambahkan(pushed)" << endl;

		return element;   
	}
	void pop() {
		if (empty()) {  //step 1
			cout << "\nStack is empty. Cannot op." << endl; //1.a
			return; //1.b
		}

		cout << "\nthe pop element is : " << stack_array[top] << endl;  //step 2
		top--;  //step 3 decrement
	}

	//method for check if data is empty
	bool empty() {
		return(top == -1);
	}
	void display() {
		if (empty()) {
			cout << "\nStack is empty." << endl;
		}
		else {
			for (int tmp = top; tmp >= 0; tmp--) {
				cout << stack_array[tmp] << endl;
			}
		}
	}
};

int main() {
	StackArray s;
	char ch;
	while (true) {
		cout << "\nMenu" << endl;
		cout << "1. push " << endl;
		cout << "2. pop" << endl;
		cout << "3. display" << endl;
		cout << "4. exit" << endl;
		cout << "\nEnter your choice (1-4):";
		char ch;
		cin >> ch;
		switch (ch) {
		case '1': {
			cout << "masukkan element" << endl;
			int element;
			cin >> element;
			s.push(element);
			break;
		}
		case '2':
			if (s.empty()) {
				cout << "\nStack is Empty." << endl;
			}
			s.pop();
			break;
		case '3':
			s.display();
			break;

		case '4': {
			return 0;
		}
		default: {
			cout << "Invalid option" << endl;
			break;
		}

		}
	}