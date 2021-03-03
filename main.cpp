//------------------------------
//  DO NOT MODIFY NEXT LINE
//------------------------------
#include "catch.hpp"
//------------------------------


// Put the assignment code here

class Quaternion{
  double first_coefficient;
  double second_coefficient;
  double third_coefficient;
  double fourth_coefficient;
  public:
  Quaternion(double one, double two, double three, double four){
    first_coefficient = one;
    second_coefficient = two;
    third_coefficient = three;
    fourth_coefficient = four;
  }
  Quaternion operator+(const Quaternion& ab)const{
    Quaternion addition{0,0,0,0};
    addition.first_coefficient = this->first_coefficient+ ab.first_coefficient;
    addition.second_coefficient = this->second_coefficient + ab.second_coefficient;
    addition.third_coefficient = this->third_coefficient +ab.third_coefficient;
    addition.fourth_coefficient= this->fourth_coefficient+ ab.fourth_coefficient;
    return addition;
  }
  Quaternion operator-(const Quaternion& bc)const{
    Quaternion subtraction{0,0,0,0};
    subtraction.first_coefficient = this->first_coefficient- bc.first_coefficient;
    subtraction.second_coefficient = this->second_coefficient - bc.second_coefficient;
    subtraction.third_coefficient = this->third_coefficient -bc.third_coefficient;
    subtraction.fourth_coefficient= this->fourth_coefficient- bc.fourth_coefficient;
    return subtraction;
  }
  Quaternion operator*(const double& fff)const{
    Quaternion multiplication{0,0,0,0};
    multiplication.first_coefficient = this->first_coefficient*fff;
    multiplication.second_coefficient = this->second_coefficient*fff;
    multiplication.third_coefficient = this->third_coefficient*fff;
    multiplication.fourth_coefficient= this->fourth_coefficient*fff;
    return multiplication;
  }
  bool operator==(const Quaternion& mn)const{
    if(this->first_coefficient == mn.first_coefficient){
      if(this->second_coefficient == mn.second_coefficient){
        if(this->third_coefficient ==mn.third_coefficient){
          if(this->fourth_coefficient== mn.fourth_coefficient){
            return true;
          }
          else{
            return false;
          }
        }
        else{
          return false;
        }
      }else{
        return false;
      }
    }
    else{
      return false;
    }
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
