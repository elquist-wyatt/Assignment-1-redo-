//
//  GradeCalculator.hpp
//  GradeCalculator xcode
//
//  Created by Wyatt Elquist on 3/6/22.
//

#ifndef GradeCalculator_hpp
#define GradeCalculator_hpp

#include <iostream>
#include <iomanip>

using namespace std;

class GradeCalculator {
public:
    
    int grade [100];
    float number;
    float total;
    float gradeAverage;
    number = 5;
    total = 0;
        GradeCalculator (){
            cout << "Grade Calculator" << endl;
            cout << "================" << endl;
            cout << "This program will calculate your grade average on your assignments." << endl;
            cout << "Your lowest grade will be dropped." << endl;
            for (int i = 1; i <= number; i++) {
                        cout << "Enter grade for assignment " << i << ":";
                        cin >> grade[i];
                    }
            
        }
        
        ~GradeCalculator () {
        
        }
    void addPoints();
    
    void dropLowest ();

    void printResults ();
    
private:
};


#endif /* GradeCalculator_hpp */
