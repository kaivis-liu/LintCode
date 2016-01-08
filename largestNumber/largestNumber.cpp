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
     *@param num: A list of non negative integers
     *@return: A string
     */
    
    static bool cmpe(string x,string y){
	    if(y.find(x)==0||x.find(y)==0 ){
    		int len1 = x.size(),len2 =y.size();
    		cout<<"**"<<x<<" "<<y<<" "<<y[len1]<<" "<<y[0]<<endl;
    		if(len1>len2) return x[len2]>=x[0];
    		else if(len1==len2) return true;
    		else  return y[0]>=y[len1]; 
    	}
	    else if(x>y)  return true;
	    else return false;
     }
   
    void print_vec(vector<string> vec){
    	for(int i=0;i<vec.size();i++){
	    	cout<<vec[i]<<ends;
	    }
	    cout<<endl;
    }
    
     string largestNumber(vector<int> &num) {
        // write your code here
         string res;  
		 int flag = 0;  // if all zero , then flag = 0
	//nums2strs    
        vector<string> strs(num.size(),"");
    	stringstream stream;
    	for(int i=0;i<num.size();i++){
    		if(num[i]) flag++;
    		stream<<num[i];
    		stream>>strs[i];
    		stream.clear();
    	}
    	if(flag == 0) return "0";
     // sort strs
        print_vec(strs); cout<<endl;
        std::sort(strs.begin(),strs.end(),cmpe);
        print_vec(strs);
     // concat str
        for(int i=0;i<strs.size();i++){
	    	res+=strs[i];
	    }
	    
        return res;
    }
    
    
    
   
};


    
int main(){
	Solution sln;
	int a[4] = { 80,81,8,85};
	
	vector<int> vec1(a,a+4);
	
	cout<<sln.largestNumber(vec1)<<endl;
	
	return 0;
}
