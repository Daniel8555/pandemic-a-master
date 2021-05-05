
#include "Board.hpp"
using namespace pandemic;
using namespace std;

Board& Board::operator=(int x)
{
    return *this;
}


Board& Board::operator[](City c)
{
    return *this;
}

std::ostream &pandemic::operator<< (std::ostream &os, const Board& brd)
{
    return os;
}
bool Board::is_clean() 
{
    return true;
}
void Board::remove_cures()
{

}
