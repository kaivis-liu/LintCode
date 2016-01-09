// lintcode template

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

class Solution {
public:
    /**
     *@param A: A positive integer which has N digits, A is a string.
     *@param k: Remove k digits.
     *@return: A string
     */
    /*
 string DeleteOne(string str, int index){
     	 str.erase(index);
     }*/
    int find_index(string A){
    	
    	if(A.size()==2) return A[0]>A[1]?0:1;
	    if(A.size()==1) return 0;
    	int i;
    	for(i=0;i+2<A.size();i++){
    		if(A[0]>A[1]) return 0;
	    	if(A[i+1]>A[i]){
	    		if(A[i+1]>A[i+2]) return i+1;
	    	}
	    }
	    if(i+2==A.size()) {
    		if(A[i+1]>A[0]) return A.size()-1;
    	}
	    
	    return 0;
    } 
    
    string simplify(string A){
    	int index;
    	for(int i=0;i<A.size();i++){
	    	if(A[i]!='0') {	index=i; break;	}
	    }
	    A.erase(0,index);
	    return A;
    }
    
    string DeleteDigits(string A, int k) {
        // wirte your code here
        for(int i=0;i<k;i++){
        	int index=0;
        	index = find_index(A);
	        //cout<<index<<ends;
	        A.erase(index,1);
	       // cout<<A<<endl;
        }
        A=simplify(A);
        return A;
    }
};


int main(){
	Solution sln;
	cout<<sln.DeleteDigits("900249",2)<<endl;
	return 0;
}

