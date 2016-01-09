// lintcode template

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * @param A: A list of integers
     * @return: The boolean answer
     */
  
    bool canJump(vector<int> A) {
        // write you code here 
        int len = A.size();
        if(len<2) return true;
        int N=0;
        int i=0;
        while(i<=N){
        	N= max(N,i+A[i]);
        	if(N>=len-1) return true;
        	i++;
        }
        return false;
    }
};



int main(){
	Solution sln;
	int a[7] = { 4,6,9,5,9,3,0};
	vector<int> vec(a,a+7);
 	if(sln.canJump(vec))  cout<<"can"<<endl; 
    else cout<<"cann't"<<endl;
	return 0;
}

