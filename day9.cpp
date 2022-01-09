class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
           vector <int> sum;
        int i=0;
        int j=numbers.size()-1;
        while((numbers[i]+numbers[j])!=target)
        {
            if((numbers[i]+numbers[j])>target)
                j--;
            else
                i++;
        }
        sum.push_back(i+1);
        sum.push_back(j+1);
            return sum;
    }
};