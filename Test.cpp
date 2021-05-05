#include <istream>
#include <string>
#include "Board.hpp"
#include "doctest.h"
#include"FieldDoctor.hpp"
#include"GeneSplicer.hpp"
#include"Virologist.hpp"
#include"Researcher.hpp"
using namespace std;
using namespace pandemic;

TEST_CASE("Test1")
{
    Board board;
FieldDoctor num1{board, City::Washington};
GeneSplicer num2{board, City::StPetersburg};
Virologist num3{board, City::Tokyo};
Researcher num4{board, City::Sydney};
 CHECK(num1.role() == "Scientist");
  CHECK(num1.role() == "Medic");
     CHECK(num1.role() == "GeneSplicer");
    CHECK(num1.role() == "Virologist");
        CHECK(num1.role() == "Sydney");

    CHECK(num2.role() == "Scientist");
  CHECK(num2.role() == "Medic");
   CHECK(num2.role() == "GeneSplicer");
    CHECK(num2.role() == "Virologist");
            CHECK(num2.role() == "Sydney");
        CHECK(num3.role() == "Scientist");
  CHECK(num3.role() == "Medic");
   CHECK(num3.role() == "GeneSplicer");
    CHECK(num3.role() == "Virologist");
        CHECK(num3.role() == "Sydney");
                CHECK(num4.role() == "Scientist");
  CHECK(num4.role() == "Medic");
   CHECK(num4.role() == "GeneSplicer");
    CHECK(num4.role() == "Virologist");
        CHECK(num4.role() == "Sydney");


}