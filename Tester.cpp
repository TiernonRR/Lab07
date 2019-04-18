#include "Tester.h"

Tester::Tester()
{
    int constructorGrade=0;
    int destructorGrade=0;
    int emptyGrade=0;
    int sizeGrade=0;
    int searchGrade=0;
    int vectorGrade=0;
    int addBackGrade=0;
    int addFrontGrade=0;
    int remBackGrade=0;
    int remFrontGrade=0;

    double totalGrade=0;
}

void Tester::constructorTester()
{
    LinkedListOfInts testList;
    cout << "Constructor Test: ";
    if(!(testList.size())){
        constructorGrade++;
        cout << "Passed" << endl;
    }
    else{
        cout << "Failed" << endl;
    }

}

void Tester::destructorTester()
{
    //Test Destructor
}

void Tester::isEmptyTester()
{
    LinkedListOfInts testList;
    cout << "isEmpty Test: ";
    if(testList.isEmpty()){
        emptyGrade++;
        cout << "Passed" << endl;
    }
    else{
        cout << "Failed" << endl;
    }
}

void Tester::sizeTester()
{
    LinkedListOfInts testList;

    cout << "Size works with LinkedList of size 1: ";
    testList.addFront(11);
    if(testList.size()){
        sizeGrade++;
        cout << "Passed" << endl;
    }
    else 
    {
        cout << "Failed" << endl;
    }

    cout << "Size works after removal: ";
    testList.removeFront();
    if(testList.size()){
        cout << "Failed" << endl;
    }
    else{
        sizeGrade++;
        cout << "Passed" << endl;
    }

    cout << "Size works after adding more than one node: ";
    for(int i = 0; i < 5; i++){
        testList.addFront(5);
    }
    if(testList.size() == 5){
        sizeGrade++;
        cout << "Passed" << endl;
    }
    else{
        cout << "Failed" << endl;
    }
}