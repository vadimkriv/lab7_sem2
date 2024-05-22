#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

void posled_Fib(int n, string name) {
	cout << name << " gonna work" << endl;
	this_thread::sleep_for(chrono::milliseconds(10));
	int cur = 1, prev = 0, next;
	for (int i = 2; i < n; ++i) {
		next = prev + cur;
		cout << next << " ";
		prev = cur;
		cur = next;
	}
	cout << endl;
}
void print_nums(int n, string name) {
	cout << name << " gonna work" << endl;
	this_thread::sleep_for(chrono::milliseconds(10));
	for (int i = 0;i < n;++i) {
		cout << i << " ";
	}
	cout << endl;
}
void random_nums(int n, string name) {
	cout << name << " gonna work" << endl;
	this_thread::sleep_for(chrono::milliseconds(10));
	int i = 0;
	while (i < n) {
		cout << 1 + rand() % 100 << " ";
		++i;
	}
	cout << endl;
}

int main() {

	int n1 = 20, n2 = 25, n3 = 30;

	thread th1(posled_Fib, n1, "th1");
	th1.join();
	thread th2(print_nums, n2, "th2");
	th2.join();
	thread th3(random_nums, n3, "th3");
	th3.join();

	return 0;
}
