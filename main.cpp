//------------------------------
//  DO NOT MODIFY NEXT LINE
//------------------------------
#include "catch.hpp"
//------------------------------

//------------------------------
//  DO NOT MODIFY RING CLASS
//------------------------------
class Ring {
public:
    // a heap-allocated copy of this element
    Ring* copy() const;
    // comparison function
    bool operator==(Ring* rhs) const;
    // negation unary operator
    Ring* operator-() const;
    // the constant of the type of this element and the inverse of this element
    Ring* zero() const;
    // sum and product of this element and c
    Ring* operator+(Ring* rhs) const;
};

Ring* Ring::copy() const { return new Ring(); }
bool Ring::operator==(Ring* rhs) const { return false; }
Ring* Ring::operator-() const { return copy(); }
Ring* Ring::zero() const { return copy(); }
Ring* Ring::operator+(Ring* rhs)  const { return copy(); }

//------------------------------
// Implement the following class
//------------------------------
class Real : public Ring {
    double x;
public:
};

//------------------------------
//   DO NOT MODIFY TEST CASES
//------------------------------
TEST_CASE( "Assignment" ) {
    SECTION( "a1" ) {
        // allocate Real object
        Real* i1 = new Real(1.0);

        REQUIRE( (*i1) == i1 );

        // deallocate object
        delete i1;
    }
    SECTION( "a2" ) {
        // allocate Real object
        Real* i1 = new Real(1.0);

        Ring* tmp = i1->copy();
        REQUIRE( (*i1) == tmp );

        // deallocate object
        delete tmp; delete i1;
    }
    SECTION( "a3" ) {
        // allocate Real objects
        Real* i1 = new Real(1.0);
        Real* i2 = new Real(2.0);
        Real* i3 = new Real(3.0);

        // add two Real objects
        Real* tmp = static_cast<Real*>( (*i1) + i2 );
        REQUIRE( (*tmp) == i3 );

        // deallocate objects
        delete tmp;
        delete i1; delete i2; delete i3;
    }
    SECTION( "a4" ) {
        // allocate Real objects
        Real* pos = new Real(1.0);
        Ring* neg = -(*pos);
        Ring* zro = pos->zero();

        // Test that a + (-a) = 0
        Real* tmp = static_cast<Real*>( (*pos) + neg );
        REQUIRE( (*tmp) == zro );
        delete tmp;
        // Test that a + 0 = a
        tmp = static_cast<Real*>( (*pos) + zro );
        REQUIRE( (*tmp) == pos );
        delete tmp;

        // deallocate objects
        delete pos; delete neg; delete zro;
    }
}
//------------------------------
