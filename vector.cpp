#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> obj1;
    //assigns vector 7 elements having value '12'.
    obj1.assign(7, 12);

    //removes last element
    obj1.pop_back();

    //inserts '5' at the end as element
    obj1.push_back(5);

    //prints last element, obj1.size get size of vector and -1 from it is the index number for last vector element.
    cout << obj1[obj1.size()-1];
    return 0;
}