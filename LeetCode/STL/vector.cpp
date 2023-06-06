#include <iostream>
#include <vector>

using namespace std;

int mian(){
    vector<int> nums;
    int target=3;

    for(int i=0; i<=5; ++i)
        nums.push_back(i);


    for(auto i=nums.begin(); i!=nums.end(); ++i)
        cout << *i << " ";


    return 0;
}
