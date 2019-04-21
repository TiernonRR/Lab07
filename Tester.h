#ifndef TESTER_H
#define TESTER_H

#include "LinkedListOfInts.h"
#include <iostream>
using namespace std;

class Tester{
  private:
    int constructorGrade;
    int destructorGrade;
    int emptyGrade;
    int sizeGrade;
    int searchGrade;
    int vectorGrade;
    int addBackGrade;
    int addFrontGrade;
    int remBackGrade;
    int remFrontGrade;
    
  public:
    Tester();
    void constructorTester();
    void destructorTester();
    void isEmptyTester();
    void sizeTester();
    void searchTester();
    void toVectorTester();
    void addBackTester();
    void addFrontTester();
    void removeBackTester();
    void removeFrontTester();
    void runTest();
};

#endif
