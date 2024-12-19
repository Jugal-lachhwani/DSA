#include <iostream>
#include <queue>
using namespace std;

// Function to generate binary numbers from 1 to n
void generateBinaryNumbers(int n) {
    queue<string> q;

    // Enqueue the first binary number "1"
    q.push("1");

    // Loop to generate binary numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        // Dequeue the front element and print it
        string current = q.front();
        cout << current << " ";
        q.pop();

        // Generate the next two binary numbers by appending '0' and '1' to the current number
        q.push(current + "0");
        q.push(current + "1");
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Binary numbers from 1 to " << n << ": ";
    generateBinaryNumbers(n);
    cout << endl;

    return 0;
}
