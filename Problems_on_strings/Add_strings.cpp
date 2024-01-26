#include<bits/stdc++.h>
using namespace std;


class Add_strings {
public:
    string addStrings(string num1, string num2) {
        int n1 = num1.size();
        int n2 = num2.size();

        // Make the lengths of num1 and num2 equal by adding leading zeros
        if (n1 > n2) {
            for (int i = 0; i < n1 - n2; i++) {
                num2 = '0' + num2;
            }
        } else if (n2 > n1) {
            for (int i = 0; i < n2 - n1; i++) {
                num1 = '0' + num1;
            }
        }

        int carry = 0;
        string result = "";

        // Iterate from right to left, add digits, and update carry
        for (int i = num1.length() - 1; i >= 0; i--) {
            int total = (num1[i] - '0') + (num2[i] - '0') + carry;
            carry = total / 10;
            result += (total % 10 + '0');
        }

        // If there is a carry after all digits are processed, add it to the result
        if (carry > 0) {
            result += (carry + '0');
        }

        // Reverse the result to get the final answer
        reverse(result.begin(), result.end());

        return result;
    }
};

int main() {
    Add_strings object;

    cout << "Enter the first number: ";
    string num1;
    cin >> num1;

    cout << "Enter the second number: ";
    string num2;
    cin >> num2;

   
    string sum = object.addStrings(num1, num2);

  
    cout << "Sum of the two numbers: " << sum << endl;

    return 0;
}
