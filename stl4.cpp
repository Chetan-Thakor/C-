#include<iostream>
#include<vector>
using namespace std;
  
int main()
{
    // initialising the vector
    vector<char> vec = {'d', 'g', 'i'};
 
	auto it = vec.insert(vec.begin(), 'c');
	     it = vec.insert(vec.begin(), 'b');
	     it = vec.insert(vec.begin(), 'a');
 
  
    int i = 4;
    it = vec.insert(vec.begin() + i, 'e');
	i++;
	it = vec.insert(vec.begin() + i, 'f');
	i++;
	i++;
	it = vec.insert(vec.begin() + i, 'h');
 
    cout << "The vector elements are: ";
    for (auto it = vec.begin(); it != vec.end(); ++it)
        cout << *it << " ";
    return 0;
}
