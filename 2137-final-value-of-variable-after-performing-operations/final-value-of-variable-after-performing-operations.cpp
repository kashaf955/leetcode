class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        for(const std::string& operation: operations){
        if(operation== "X++" || operation== "++X"){
         x++;
        }
        else{
         x--;
            }
        }
       
    return x;
    }
};