#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int first,second;

    cin >> first >>second;

    cout<<first*(second%10)<<"\n";
    cout<<first*((second%100)/10)<<"\n";
    cout<<first*(second/100)<<"\n";
    cout<<first*second;

    return 0;
}