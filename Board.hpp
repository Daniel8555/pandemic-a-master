
#pragma once
#include "City.hpp"
#include <iostream>

namespace pandemic{

class Board
{
    public:
    Board(){}
Board& operator=(int x);
Board& operator[](City ct );
friend std::ostream& operator<<(std::ostream &os,const Board& brd);
bool is_clean() ;
void remove_cures();
};
}  