#pragma once
#include<string>
#include"City.hpp"
#include"Color.hpp"
using namespace std;
namespace pandemic{
class Player
{
    public:
Player& drive(City ct);
Player& fly_direct(City ct);
Player& fly_charter(City ct);
Player& fly_shuttle(City ct);
Player& build();
Player& discover_cure(Color clr);
Player& treat(City ct);
string role();
Player& take_card(City ct);
};
}