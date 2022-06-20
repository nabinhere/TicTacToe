#include <iostream>



char boardLabels[3][3] = { {'1','2','3'},{'4','5','6'},{'7','8','9'} };

void drawBoard()
{
	std::cout << boardLabels[0][0]<<" | "<<boardLabels[0][1]<<" | "<< boardLabels[0][2]<<std::endl;
	std::cout << "--------";

}


int main()
{
	
	return 0;
}