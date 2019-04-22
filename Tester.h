#ifndef TESTER_H
#define TESTER_H

#include "LinkedListOfInts.h"
#include <iostream>
using namespace std;

class Tester{
  private:
    double constructorGrade;
    double destructorGrade;
    double emptyGrade;
    double sizeGrade;
    double searchGrade;
    double vectorGrade;
    double addBackGrade;
    double addFrontGrade;
    double remBackGrade;
    double remFrontGrade;
    
  public:
    Tester();
    void constructorTester();
    void destructorTester();
    void isEmptyTester();
    void sizeTester();
    void searchTester();
    void addBackTester();
    void addFrontTester();
    void removeBackTester();
    void removeFrontTester();
    void runTest();
};

#endif
