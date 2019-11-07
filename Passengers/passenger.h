


#ifndef __passenger__
#define __passenger__



class passenger : public ActiveClass
{
private:

	//VARS
	int pNum; //passenger ID number
	int pStatus = 0; // 0 - Deactivated, 1 Activated
	int pElevator = 0; // 1 - Elevator 1, 2 - Elevator 2
	int pFloor = 0; // Start on floor 0 always


	//MAIN
	int main(void);




public:



	//STRUCTORS
	passenger(int id);

};

#endif