#include<iostream>
#include<stdio.h>
#include<vector>
#include<string>
using namespace std;

class Person {
private:
	int w;
	int h;
	int index;
public:
	Person(int w, int h) {
		this->w = w;
		this->h = h;
	}
	bool operator <(const Person &s) {
		if (this->w < s.w && this->h < s.h) {
			return true;
		}
		else return false;
	}
	bool operator >(const Person &s) {
		if (this->w > s.w && this->h > s.h) {
			return true;
		}
		else return false;
	}
	void setindex(int index) {
		this->index = index;
	}

	int getindex() {
		return this->index;
	}
};


void order(vector<Person> &a) {
	int n = a.size();
	for (int i = 0; i < n; i++) {
		int count = 1;
		for (int j = 0; j < n; j++) {
			if (i == j)continue;
			if (a[i] < a[j]) {
				count++;
			}
		}
		a[i].setindex(count);
	}
}

int main() {

	int n;
	cin >> n;
	vector<Person> p;
	for (int i = 0; i < n; i++) {
		int w, h;
		cin >> w >> h;
		p.push_back(Person(w, h));
	}

	
	order(p);
	for (int i = 0; i < n; i++) {
		if (i != 0) {
			cout << " ";
		}
		cout << p[i].getindex();
	}


	


}