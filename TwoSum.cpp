//
//  main.cpp
//  TwoSum
//
//  Created by Louie Shi on 7/18/18.
//  Copyright © 2018 Louie Shi. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target)
{
    vector<int> indexes = {-1, -1};
    int sum = 0;
    int first = -1;
    int second = -1;
    bool found = false;
    
    for(int i = 0; i < nums.size(); i++)
    {
        for(int j = i + 1; j < nums.size(); j++)
        {
            sum = nums[i] + nums[j];
            if(sum == target)
            {
                first = i;
                second = j;
                found = true;
                break;
            }
        }
        
        if(found)
        {
            indexes[0] = first;
            indexes[1] = second;
            break;
        }
    }
    
    return indexes;
}


int main(int argc, const char * argv[])
{
    vector<int> v1 = {2, 7, 11, 15};
    vector<int> result;
    int t = 18;
    
    result = twoSum(v1, t);
    
    for(int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
    
    return 0;
}
