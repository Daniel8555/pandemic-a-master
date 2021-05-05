

#include"Player.hpp"

using namespace  pandemic;
using namespace std;

Player& Player:: drive(City ct)
{
    return *this;
}
Player& Player:: fly_direct(City ct)
{
    return *this;
}
Player& Player::fly_charter(City ct)
{
    return *this;
}
Player& Player::fly_shuttle(City ct)
{
    return *this;
}
Player& Player::build()
{
    return *this;
}
Player& Player:: discover_cure(Color clr)
{return *this;}
Player& Player:: treat(City ct)
{return *this;}
string Player:: role()
{ return " ";}
Player& Player::take_card(City ct)
{ return *this;}