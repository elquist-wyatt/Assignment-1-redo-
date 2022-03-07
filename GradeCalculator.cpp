//
//  GradeCalculator.cpp
//  GradeCalculator xcode
//
//  Created by Wyatt Elquist on 3/6/22.
//

#include "GradeCalculator.hpp"

 void GradeCalculator::printResults () {
    gradeAverage = total/number;
    cout << "Total points " << total << "." << endl;
    cout << "Grade: " << fixed << setprecision (2) << gradeAverage << endl;
    
 }

void GradeCalculator::addPoints (){
    for (int j = 1; j <= number; j++) {
        total = total + grade[j];
    }
}

void GradeCalculator::dropLowest () {
    int lowest = grade [1];
    for (int k = 1; k <= number; k++) {
        if (grade[k] < lowest) {
            lowest = grade[k];
        } else {
        }
    }
    total = total - lowest;
    number = number - 1;
}
