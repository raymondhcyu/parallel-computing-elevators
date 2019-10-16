/*
	Produces data using named monitor
*/

#include "D:\\Documents\\CPEN333\\Assignments\\CPEN333Assignment1\\rt.h"
#include "..\\resources.h"

TheMonitor elevatorOneMonitor("Elevator One Monitor");

CRendezvous r1("CreationRendezvous", 3); // sync creation of 4x processes
CRendezvous r2("TerminationRendezvous", 3); // sync deletion of 4x processes

int main() {

	elevatorOneMonitor.setFloor(0);

	int i;
	for (i = 0; i < 10; i++) {
		cout << "Helloo " << i << " from elevator process 1..." << endl;
		Sleep(50);
		r1.Wait();
		cout << "Elevator process 1 is done waiting" << endl;
	}

	testFunction(elevatorOneMonitor);

	getchar();
	return 0;
}