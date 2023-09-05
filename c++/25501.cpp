#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int recursionCount = 0;

int recursion(const char* s, int l, int r) {
    recursionCount++;
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char* s) {
    cout << recursion(s, 0, strlen(s) - 1) << " ";
    int returnNum = recursionCount;
    recursionCount = 0;
    return returnNum;
}

int main() {
    int inputNumber = 0;
    scanf("%d", &inputNumber);
    for (int i = 0; i < inputNumber; i++) {
        char str[1000];
        scanf("%s", str);
        printf("%d\n", isPalindrome(str));
    }
}