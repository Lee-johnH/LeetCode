/*
 * Q: Given a non-empty array of digits representing a non-negative integer, plus one to the integer.
 *    The digits are stored such that the most significant digit is at the head of the list, and each element in the array contain a single digit.
 *    You may assume the integer does not contain any leading zero, except the number 0 itself.
 *
 */

#include <vector>
using namespace std;

class Solution {
    public:
        vector<int> plusOne(vector<int>& digits) {
            if(digits.size() == 1) {
                if(digits[0] == 9) {
                    digits[0] = 0;
                    digits.insert(digits.begin(), 1);
                }
                else
                    digits[0] += 1;
                return digits;
            }
            if(digits[digits.size() - 1] == 9) {
                digits[digits.size() - 1] = 0;
                digits.resize(digits.size() - 1);
                plusOne(digits);
                digits.push_back(0);
            }
            else
                digits[digits.size() - 1] += 1;

            return digits;
        }
};
