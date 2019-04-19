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

    testList.addFront(1);
    testList.addFront(2);
    testList.addFront(3);
    testList.addFront(4);
    testList.addFront(5);
    testList.addFront(6);
    testList.addFront(7);

    cout << "isEmpty Test on Filled List: ";
    if(testList.isEmpty()){
        cout << "Failed" << endl;
    }   
    else{
        emptyGrade++;
        cout << "Passed" << endl;
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

void Tester::searchTester()
{
    LinkedListOfInts testList;

    bool searchVal = testList.search(900);
    cout << "Search test for empty list: ";

    if(searchVal){
        cout << "Failed" << endl;
    }
    else{
        searchGrade++;
        cout << "Passed" << endl;
    }

    testList.addFront(11);
    testList.addFront(12);
    testList.addFront(77);
    testList.addFront(900);
    testList.addFront(11);

    searchVal = testList.search(900);

    cout << "Search test for int that is in list: ";
    if(searchVal){
        searchGrade++;
        cout << "Passed" << endl;
    }
    else{
        cout << "Failed" << endl;
    }
    
    searchVal = testList.search(490);
    cout << "Search test for int that is not in list: ";
    if(!searchVal){
        searchGrade++;
        cout << "Passed" << endl;
    }
    else{
        cout << "Failed" << endl;
    }

    testList.removeFront();
    testList.removeFront();

    searchVal = testList.search(900);
    cout << "Search test for int that has been removed from list: ";
    if(!searchVal){
        searchGrade++;
        cout << "Passed" << endl;
    }
    else{
        cout << "Failed" << endl;
    }
}

void Tester::addBackTester()
{
    LinkedListOfInts testList;
    
    testList.addBack(1);
    cout << "addBack test for adding to empty list: ";

    if(testList.search(1)){
        addBackGrade++;
        cout << "Passed" << endl;
    }
    
    testList.addBack(2);
    testList.addBack(3);
    testList.addBack(4);
    testList.addBack(5);
    testList.addBack(6);
    testList.addBack(7);
    testList.addBack(8);
    testList.addBack(9);
    testList.addBack(10);

    vector<int> testVector = testList.toVector();
    vector<int> compVector{1,2,3,4,5,6,7,8,9,10};

    cout << "addBack test for multiple addBack calls: ";
    if(testVector == compVector){
        addBackGrade++;
        cout << "Passed" << endl;
    }
    else{
        cout << "Failed" << endl;
    }
    
}