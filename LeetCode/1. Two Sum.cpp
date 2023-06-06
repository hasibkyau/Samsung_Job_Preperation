// C++ program to illustrate the
// iterators in vector
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> nums;
	int target;

	int N, v;
	cout << "Size of vector?" << endl;
	cin >> N;
	cout << "Insert values:" << endl;

	for (int i = 1; i <= N; i++){
        cin >> v;
		nums.push_back(v);
	}


    int len = nums.size();

    cout<< "Insert Target Value:" << endl;
    cin >> target;

    int tempA, tempB;
    for(int i=0; i<len; i++){
        tempA=nums[i];
        for(int j=i+1; j<len; j++){
            int sum = nums[i] + nums[j];
            if(sum==target){
                printf("[%d,%d]",i,j);
                break;
            }
//            cout << sum << " " ;
        }
    }

	return 0;
}

