#include <iostream>
using namespace std;
class Solution{
public:
    int romanToInt(string s){
        int rmToInt[16] = {0};
        int sum = 0;
        for (int i = 0; i < s.length(); i++){
            switch (s[i])
            {
            case 'I':
                rmToInt[i] = 1;
                break;
            case 'V':
                rmToInt[i] = 5;
                break;
            case 'X':
                rmToInt[i] = 10;
                break;
            case 'L':
                rmToInt[i] = 50;
                break;
            case 'C':
                rmToInt[i] = 100;
                break;
            case 'D':
                rmToInt[i] = 500;
                break;
            case 'M':
                rmToInt[i] = 1000;
                break;
            }
        }
        for (int i = 0; i < s.length(); i++){
            if (rmToInt[i] < rmToInt[i + 1]){
                sum += rmToInt[i + 1] - rmToInt[i];
                i++;
                continue;
            }
            sum += rmToInt[i];
        }
        return sum;
    }
};