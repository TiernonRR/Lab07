#include "Tester.h"

Tester::Tester()
{
    constructorGrade=0;
    destructorGrade=0;
    emptyGrade=0;
    sizeGrade=0;
    searchGrade=0;
    vectorGrade=0;
    addBackGrade=0;
    addFrontGrade=0;
    remBackGrade=0;
    remFrontGrade=0;
}

void Tester::constructorTester()
{
    LinkedListOfInts testList;

    cout << "Constructor Test: ";
    if(!(testList.size())){
        (constructorGrade)++;
        cout << "Passed" << endl;
    }
    else{
        cout << "Failed" << endl;
    }

}

void Tester::destructorTester()
{
    //Test Destructor using valgrind
    //Memory Leaks are present
}

void Tester::isEmptyTester()
{
    LinkedListOfInts testList;
    cout << "Test for isEmpty on empty list: ";
    if(testList.isEmpty()){
        emptyGrade++;
        cout << "Passed" << endl;
    }
    else{
        cout << "Failed" << endl;
    }

    testList.addFront(1);

    cout << "Test for isEmpty on list of size one: ";

    if(testList.isEmpty()){
      cout << "Failed" << endl;
    }
    else{
      emptyGrade++;
      cout << "Passed" << endl;
    }

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
    cout << "Size works for empty List: ";

    if(testList.size() == 0){
      cout << "Passed" << endl;
      sizeGrade++;
    }
    else{
      cout << "Failed" << endl;
    }

    cout << "Size works with LinkedList of size 1: ";
    testList.addFront(11);
    if(testList.size()==1){
        sizeGrade++;
        cout << "Passed" << endl;
    }
    else
    {
        cout << "Failed" << endl;
    }

    cout << "Size works after removal: ";
    testList.removeFront();

    if(testList.size()!=0){
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

void Tester::addFrontTester()
{
    LinkedListOfInts testList;
    bool testVal = true;
    testList.addFront(1);

    vector<int> testVector = testList.toVector();
    vector<int> compVector{1};

    cout << "Test for addFront on empty list: ";
    if(testVector[0] == compVector[0]){
        addFrontGrade++;
        cout << "Passed" << endl;
    }
    else{
        cout << "Failed" << endl;
    }

    testList.addFront(2);
    testList.addFront(3);
    testList.addFront(4);
    testList.addFront(5);
    testList.addFront(6);
    testList.addFront(7);
    testList.addFront(8);
    testList.addFront(9);
    testList.addFront(10);
    testVector = testList.toVector();
    for(int i=0; i < testVector.size(); i++){
        if(testVector[i] != (10-i)){
            testVal = false;
            break;
        }
    }
    cout << "Test for multiple addFront calls: ";
    if(testVal){
        addFrontGrade++;
        cout << "Passed" << endl;
    }
    else{
        cout << "Failed" << endl;
    }
    cout << "Test for addFront update size: ";
    if(testList.size() == 10){
      addFrontGrade++;
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

    cout << "Test for addBack updating size: ";
    if(testList.size()==10){
        addBackGrade++;
        cout << testList.size() << endl;
        cout << "Passed" << endl;
    }
    else{
        cout << "Failed" << endl;
    }
}

void Tester::removeBackTester()
{
    LinkedListOfInts testList;
    bool testVal = true;
    cout << "Test for removeBack on empty list: ";
    if(!testList.removeBack()){
        cout << "Passed" << endl;
        remBackGrade++;
    }
    else{
        cout << "Failed" << endl;
    }

    cout << "Test for removeBack on list of size one: ";
    testList.addFront(1);
    testList.removeBack();
    vector<int> testVector = testList.toVector();

    if(testVector[0] == 1){
      cout << "Passed" << endl;
      remBackGrade++;
    }
    else{
      cout << "Failed" << endl;
    }

    cout << "Test for removeBack properly updating size: ";
    if(testList.size()==0){
        remBackGrade++;
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
    testList.addFront(8);
    testList.addFront(9);
    testList.addFront(10);

    testList.removeBack();
    testVector = testList.toVector();
    for(int i =0; i < testVector.size(); i++){
        if(testVector[i] != (10-i)){
            testVal=false;
            break;
        }
    }
    cout << "Test for calling removeBack on list of more than one: ";
    if(testVal){
        remBackGrade++;
        cout << "Passed" << endl;
    }
    else{
        cout << "Failed" << endl;
    }

}

void Tester::removeFrontTester()
{
    LinkedListOfInts testList;
    bool testVal = true;
    cout << "Test for removeFront on empty list: ";
    if(!testList.removeFront()){
        remFrontGrade++;
        cout << "Passed" << endl;
    }
    else{
        cout << "Failed" << endl;
    }

    testList.addFront(1);
    testList.removeFront();
    vector<int> testVector = testList.toVector();

    cout << "Test for removeFront on one node: ";

    if(testVector[0] == 1){
      cout << "Failed" << endl;
    }
    else{
      cout << "Passed" << endl;
      remFrontGrade++;
    }

    cout << "Test for removeFront updating size: ";
    if(testList.size() == 0){
      cout << "Passed" << endl;
      remFrontGrade++;
    }
    else{
      cout << "Failed" << endl;
    }

    cout << "Test for removeFront on list of size greater than one: ";
    testList.addFront(1);
    testList.addFront(2);
    testList.addFront(3);
    testList.addFront(4);
    testList.removeFront();
    testList.removeFront();

    testVector = testList.toVector();
    for(int i = 0; i < testList.size(); i++){
      if(testVector[i] != 2-i){
        testVal = false;
        break;
      }
    }

    if(testVal){
      cout << "Passed" << endl;
      remFrontGrade++;
    }
    else{
      cout << "Failed" << endl;
    }

}

void Tester::runTest()
{   
    double totalGrade = 0;
    cout << " -- Constructor Tests -- " << endl;
    constructorTester();
    cout << "\n -- isEmpty Tests -- " << endl;
    isEmptyTester();
    cout << " \n -- size Tests -- " << endl;
    sizeTester();
    cout << " \n  -- search Tests -- " << endl;
    searchTester();
    cout << " \n  -- addBack Tests -- " << endl;
    addBackTester();
    cout << "\n -- addFront Tests --" << endl;
    addFrontTester();
    cout << "\n -- removeBack Tests --" << endl;
    removeBackTester();
    cout << " \n -- removeFront Tests --" << endl;
    removeFrontTester();

    totalGrade = constructorGrade + emptyGrade + sizeGrade + searchGrade + vectorGrade + addBackGrade
                                  + addFrontGrade + remBackGrade + remFrontGrade;

    cout << "\n\nConstructor Grade: " << (double(constructorGrade/1) * 100) << "%\n";
    cout << "isEmpty Grade: " << ( double(emptyGrade/3) * 100) << "%\n";
    cout << "size Grade: " << (double(sizeGrade/4) * 100) << "%\n";
    cout << "search Grade: " << (double(searchGrade/4) * 100) << "%\n";
    cout << "addBack Grade: " << (double(addBackGrade/3) * 100) << "%\n";
    cout << "addFront Grade: " << (double(addFrontGrade/3) * 100) << "%\n";
    cout << "removeBack Grade: " << (double(remBackGrade/4) * 100) << "%\n";
    cout << "removeFront Grade: " << (double(remFrontGrade/4)* 100) << "%\n";
    cout << "\nFinal Grade: " << (double(totalGrade/26) * 100) << "%\n";
}
