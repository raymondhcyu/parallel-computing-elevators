#include "..\rt.h"
#include "..\resources.h"

CRendezvous r1("CreationRendezvous", 4); // sync creation of 4x processes

int main() {
	// Rendezvous to start
	r1.Wait();
	cout << "Elevator process 1 is done waiting" << endl;

	int i;
	for (i = 0; i < 10; i++) {
		cout << "Helloo " << i << " from elevator process 1..." << endl;
		Sleep(50);
	}

	getchar();
	return 0;
}