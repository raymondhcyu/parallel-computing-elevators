#include "D:\Documents\CPEN333\Assignments\CPEN333Assignment1\rt.h"

CRendezvous r1("CreationRendezvous", 4); // sync creation of 4x processes

int main() {
	// Rendezvous to start
	Sleep(4000);
	r1.Wait();
	cout << "Elevator process 2 is done waiting" << endl;

	int i;
	for (i = 0; i < 10; i++) {
		cout << "Helloo " << i << " from elevator process 2..." << endl;
		Sleep(50);
	}

	getchar();
	return 0;
}