class Solution {
    
    fun countOdds(low: Int, high: Int): Int {
        var oddCounter = 0;
        //if the diffirence between high and low is even then the oddCounter will be that even over 2.
        if((high - low + 1)%2 == 0) oddCounter = (high - low + 1)/2;
        //else if the difference between high and low is odd then there are two cases.
        //case 1:
        //if both low and high are evens then the (high - low + 1)/2 is double and the solution is the integer part of this computation.
        else if(low%2 == 0 && high%2 == 0) oddCounter = ((high - low + 1)/2) as Int;
        //case 2:
        //if both low and high are odds then the (high - low + 1)/2 is double and the solution is the integer part of this computation + 1.
        else {
            oddCounter = ((high-low + 1)/2) as Int + 1;
        }
        return oddCounter;
    }
}
//this solution is quite not simple but it gives us a constant runtime - O(1).
//there is a simple solution using a loop but it gives us ploynomial runtime - O(n).
