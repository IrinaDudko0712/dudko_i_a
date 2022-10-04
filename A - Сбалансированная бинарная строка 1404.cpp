#include <iostream>
#include <string>
#include<vector>
using namespace std;
void solve() {
	int n = 0, k = 0;
    cin >> n >> k; 
	string s = "";
	cin >> s;
    for ( int i = 0; i < n - k; i++) {
		char& L = s[i];
		char& R = s[i + k];
        if (L != '?') {
            if (R == '?') { 
                R = L;
            }
            else {
                if (L != R) {
                    cout << "NO" << endl;
                    return;
                }
            }
        }
        else {
            if (R != '?') {
                L = R;
            }
        }
    }

  for (int i = n - 1; i >= k; i--)
  { //дпсцюъ дкхмю ярпнйх
      char& l = s[i - k];
      char& r = s[i];
      if (L != '?') {
          if (R == '?') {
              R = L;
          }
          else {
              if (L != R) { // еякх дкхмш ме пюбмш, рн яаюкюмяхпнбюммни ярпнйх ме онксвхряъ. яхлбнкнб днкфмн ашрэ онпнбмс.
                  cout << "NO" << endl;
              }
          }
      }
      else {
          if (R != '?') {
              L = R;
          }
      }
  }
  vector<int> a = { 0, 0 };
  for (int i = 0; i < k; i++) {
      if (s[i] == '0') {
          a[0]++;
      }
      if (s[i] == '1') {
          a[1]++;
      }
  }
  if (a[0] > k / 2 || a[1] > k / 2) {
      cout << "NO" <<endl;
      return;
  }
 cout << "YES" << endl;
  return;
}
 
  int main(){
      int T = 0; //йнкхвеярбн мюанпнб бундмшу дюммшу
       cin >>T;
      while (T--) solve();
      return 0;
  }