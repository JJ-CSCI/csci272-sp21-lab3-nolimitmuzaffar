//------------------------------
//  DO NOT MODIFY NEXT LINE
//------------------------------
#include "catch.hpp"
//------------------------------


// Put the assignment code here
//cleaned the code after the lecture
class Quaternion{
  double first_coefficient, second_coefficient, third_coefficient, fourth_coefficient;
  public:
  Quaternion(double one, double two, double three, double four):
    first_coefficient{one}, second_coefficient{two},third_coefficient{three},fourth_coefficient{four}{}

  bool operator==(const Quaternion& mn)const{
    if (first_coefficient!= mn.first_coefficient) return false;
    else if (second_coefficient != mn.second_coefficient) return false;
    else if (third_coefficient != mn.third_coefficient) return false;
    else if (fourth_coefficient != mn.fourth_coefficient) return false;
    else return true;
  }
  Quaternion operator+(const Quaternion& ab)const{
    Quaternion addition{first_coefficient+ab.first_coefficient, second_coefficient+ab.second_coefficient, third_coefficient+ab.third_coefficient, fourth_coefficient+ab.fourth_coefficient};
    return addition;
  }
  Quaternion operator-(const Quaternion& bc)const{
    Quaternion subtraction{first_coefficient-bc.first_coefficient, second_coefficient-bc.second_coefficient, third_coefficient-bc.third_coefficient, fourth_coefficient-bc.fourth_coefficient};
    return subtraction;
  }
  Quaternion operator*(int scale)const{
    Quaternion abc{first_coefficient*scale, second_coefficient*scale, third_coefficient*scale, fourth_coefficient*scale};
    return abc;
  }    


          
};



//------------------------------
//   DO NOT MODIFY TEST CASES
//------------------------------
TEST_CASE( "Assignment" ) {
    SECTION( "q1" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        REQUIRE( q == p );
    }
    SECTION( "q2" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        Quaternion r{2.0, 4.0, 6.0, 8.0};
        REQUIRE( (q + p) == r );
    }
    SECTION( "q3" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        Quaternion r{0.0, 0.0, 0.0, 0.0};
        REQUIRE( (q - p) == r );
    }
    SECTION( "q3" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion r{2.0, 4.0, 6.0, 8.0};
        REQUIRE( (q * 2.0) == r );
    }
}
//------------------------------
