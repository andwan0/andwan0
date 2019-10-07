{
//Initial Template for C++
#include <iostream>
using namespace std;
//Position this line where user code will be pasted.
// Driver code
int main() {
	
	int testcase;
	cin >> testcase;
	
	while(testcase--){
	    int N;
	    cin >> N;
        
        int *arr = new int[N];
        
        for(int i = 0;i<N;i++){
            cin >> arr[i];
        }
        
        // Calling function to perform various operation on array
        variousOperation(arr);
    
	}
	
	return 0;
}
}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
/*Function to print array elements
* Note : Mention argument also
* Comment the lines which are not useful
* or may result in wrong output
*/
void variousOperation(int *arr) {

	//cout << *(arr + 0) << " ";//first element

	//cout << (arr + 0) << " ";//first address

		//cout << () << " ";

	//cout << arr[2] << " ";//third element

	//cout << *arr + 2 << " ";//third element
	int count = 0;
	for (int i = 0; i < 100; i++) {
		if (arr[i] % 2 != 0) {
			count++;
			cout << arr[i] << " ";
		}
		if (count >= 2)
			break;
	}
	cout << endl;
}