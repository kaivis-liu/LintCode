// lintcode template

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * @param nums: An array of integers
     * @return: An array of integers that's next permuation
     */
    vector<int> nextPermutation(vector<int> &nums) {
        // write your code here
        
        vector<int> res; int  i;
        int len = nums.size();
        if(len<2) return nums;
        for(i=nums.size()-2;i>=0;i--){
        	if(nums[i]<nums[i+1]) break;
        }
	    if(i==-1) { reverse(nums.begin(),nums.end()); return nums; }
	    else{
    		//exchange i and j
    		int tmp = nums[i]; 
			int j;// another number to exchange
			    int k;
    		    for(k=i+1;k<len;k++){
    		    	if(nums[k]<=tmp) break;
    		    }
    		    j=k-1;
    		
    		    nums[i] = nums[j];
    		    nums[j] = tmp;
    		    reverse(nums.begin()+i+1,nums.end());
			  return nums;
    	}
	    
    }
};

void print_vec(vector<int> res){
	for(int i=0;i<res.size();i++){
		cout<<res[i]<<ends;
	   }
	    cout<<endl;
}


int main(){
	Solution sln;
	int a[3] = { 1,2,1 };
	vector<int> vec(a,a+3);
	print_vec(sln.nextPermutation(vec));
	return 0;
}

