#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int n, w, h;
  cin >> n >> w >> h;
  int diagonal = sqrt(pow(w, 2) + pow(h, 2));

  for (int i = 0; i < n; i++) {
    int m;
    cin >> m;
    cout << (m <= diagonal ? "DA" : "NE") << endl;
  }
}
