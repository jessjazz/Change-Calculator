#include <iostream>

using namespace std;

int main() {
    cout << "Enter change in pennies: ";
    int change {0};
    cin >> change;
    
    int twoPounds {}, onePounds {}, fiftyPence {}, twentyPence {}, tenPence {}, fivePence {}, twoPence {}, onePence {};
    const int twoPoundValue {200}, onePoundValue {100}, fiftyPenceValue {50}, twentyPenceValue {20}, tenPenceValue {10}, fivePenceValue {5}, twoPenceValue {2}, onePenceValue {1};
    
    twoPounds = change / twoPoundValue;
    change -= (twoPounds * twoPoundValue);

    onePounds = change / onePoundValue;
    change -= (onePounds * onePoundValue);

    fiftyPence = change / fiftyPenceValue;
    change -= (fiftyPence * fiftyPenceValue);

    twentyPence = change / twentyPenceValue;
    change -= (twentyPence * twentyPenceValue);

    tenPence = change / tenPenceValue;
    change -= (tenPence * tenPenceValue);

    fivePence = change / fivePenceValue;
    change -= (fivePence * fivePenceValue);

    twoPence = change / twoPenceValue;
    change -= (twoPence * twoPenceValue);

    onePence = change / onePenceValue;
    change -= (onePence * onePenceValue);
    
    cout << "You can provide change as follows: " << endl;
    cout << "2 Pound Coins: " << twoPounds << endl;
    cout << "1 Pound Coins: " << onePounds << endl;
    cout << "50p Coins: " << fiftyPence << endl;
    cout << "20p Coins: " << twentyPence << endl;
    cout << "10p Coins: " << tenPence << endl;
    cout << "5p Coins: " << fivePence << endl;
    cout << "2p Coins: " << twoPence << endl;
    cout << "1p Coins: " << onePence << endl;
    
    return 0;
}