#include <iostream>
#include <vector>

using namespace std;

int main(){

    // # phase 1: init level #

    vector<int> obj1, obj2;
    //assigns vector 7 elements having value '12'.
    obj1.assign(7, 12);

    //removes last element
    obj1.pop_back();

    //inserts '5' at the end as element
    obj1.push_back(5);

    //prints last element, obj1.size get size of vector and -1 from it is the index number for last vector element.
    cout << obj1[obj1.size()-1] << endl;

    // # phase 2: level++ #

    //obj2 with elements : 8,8,8,1,3
    obj2.assign(3, 8);
    obj2.push_back(1);
    obj2.push_back(3);

    //print initial obj2
    for(auto i=obj2.begin(); i != obj2.end(); ++i)
        cout << *i << " ";

    obj1.emplace(obj1.begin()+1, 100);
    cout << obj1[0];
    return 0;
}