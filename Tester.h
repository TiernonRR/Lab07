#ifndef TESTER_H
#define TESTER_H

#include "LinkedListOfInts.h"
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
    double totalGrade;
  public:
    Tester();
    void constructorTester();
    void destructorTester();
    void isEmptyTester();
    void sizeTester();
    void searchTester();
    void toVector();
    void addBack();
    void addFront();
    void removeBack();
    void removeFront();
};

#endif
