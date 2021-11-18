#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void rotateArr(int arr[], int d, int n){
	int temp[d];
        for(int i=0; i<d; i++)
        {
            temp[i]= arr[i];
        }
        for(int i=d; i<n; i++)
        {
            arr[i-d]= arr[i];
        }
        for(int i=0; i<d;i++){
            arr[n-d+i]= temp[i];
        }
    }
}
int main() 
{
	int t;
	cin >> t;
	while(t--){
	    int n, d;
	    cin >> n >> d;
	    int arr[n];
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    ob.rotateArr(arr, d,n);
	    for(int i =0;i<n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
