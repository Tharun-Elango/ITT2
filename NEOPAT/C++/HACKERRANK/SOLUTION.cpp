#include <iostream>
#include <algorithm> // For std::max

using namespace std;

/*
  Function to return the greatest of four integers
*/
int max_of_four(int a, int b, int c, int d) {
    // Nested max functions compare all four variables
    return max(max(a, b), max(c, d));
}

int main() {
    int a, b, c, d;
    // Reading four integers, one per line
    cin >> a >> b >> c >> d;
    
    int ans = max_of_four(a, b, c, d);
    cout << ans << endl;
    
    return 0;
}
