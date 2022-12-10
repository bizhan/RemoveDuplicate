#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
// Move all the unique elements at the beginning of the array and
// after moving return the length of the subarray that has no duplicate in it.

// Note: The key to this is how nextNoneDuplicate is utilized.
//     It points to the next none duplicate position which will be
//     set once it is find by "next". It also can point to the last
//     element which is not duplicate (nextNoneDuplicat - 1)
class RemoveDuplicate {
public:
  static int removeDuplicate(vector<int> arr) {
    int nextNoneDuplicate = 1;
    for (int next = 0; next < arr.size(); next++) {
      if (arr[nextNoneDuplicate - 1] != arr[next]) {
        arr[nextNoneDuplicate] = arr[next];
        nextNoneDuplicate++;
      }
    }
    return nextNoneDuplicate;
  }
};

int main() {
  std::cout << "Hello World!\n";
  vector<int> arry = {2, 3, 3, 3, 6, 9, 9};
  auto result = RemoveDuplicate::removeDuplicate(arry);
  cout <<result<<endl;
}