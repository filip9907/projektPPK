#include "bitmap.hpp"  
	
bitmap::bitmap()
{
	
}
	
bitmap::~bitmap()
{
	
}
 
void bitmap::display(){
    if (_map.empty()) std::cout << "BITMAPA Pusta!" << std::endl;
    else {
        int numberWidth = _map[1].size() / 10 + 1;

        std::cout << std::setw(numberWidth) << "   ";
        for (int column = 0; column < _map[1].size(); column++) {
            std::cout << std::setw(numberWidth);
            std::cout << column + 1 << ". ";
        }

        std::cout << std::endl;

        for (int row = 0; row < _map.size(); row++) {
            std::cout << std::setw(numberWidth);
            std::cout << row + 1 << ". ";
            for (int column = 0; column < _map[row].size(); column++) {
                std::cout << std::setw(numberWidth);
                if (_map[row][column] == 4) {
                    std::cout << "\033[1;31m X\033[0m" << "  ";
                } else {
                    std::cout << _map[row][column] << "  ";
                }
            }
            std::cout << std::endl;

        }
    }
}