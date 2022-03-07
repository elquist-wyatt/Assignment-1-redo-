
#include <iostream>
#include <iomanip>
#include "GradeCalculator.hpp"

using namespace std;

int main () {
    
    GradeCalculator myGrade;

    myGrade.addPoints();
    myGrade.dropLowest();
    myGrade.printResults();
    
    return 0;
}
