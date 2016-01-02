// lintcode template

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * @param nums: A list of integers
     * @return: The majority number
     */
    int majorityNumber(vector<int> nums) {
        // write your code here
        int len =nums.size();
        int count=1;
        int num =nums[0];
        for(int i=1;i<len;i++){
        	if (nums[i]==num) count++;
        	else {
        		count--;
        		if(count<1) {
		        		i+=1;
        		        num = nums[i];
		        }
        		
        	}
        	if(count==0) count =1;
        	
	        }
        
        return num;
    }
};

int main(){
	Solution sln;
	int a[7] = { 1,2,2,2,2,1,1};
	int b[7] = { 1,2,1,1,2,1,2};
	vector<int> vec1(a,a+7);
	vector<int> vec2(b,b+7);
	cout<<sln.majorityNumber(vec1)<<endl;
	cout<<sln.majorityNumber(vec2)<<endl;
	return 0;
}
