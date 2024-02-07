//#include <iostream>
//
//using namespace std;
//
//int main() {
//    cout << "Hello, World!";
//    return 0;
//}
//
//
//
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int n_1, n_2, n_3, res;
//
//    cin >> n_1;
//    cin >> n_2;
//    cin >> n_3;
//    res = n_1 * n_2 + n_3;
//    cout << n_1 << " * " << n_2 << " + " << n_3 << " = " << res << endl;
//}


#include <iostream>

sf

using namespace std;

int main() {
    int cord_x1, cord_y1, cord_x2, cord_y2;
    cin >> cord_x1;
    cin >> cord_y1;
    cin >> cord_x2;
    cin >> cord_y2;
    if ((cord_x1 == cord_x2) || (cord_y1 == cord_y2)) {
        cout << "YES";
    } else if ((cord_x1 == cord_y1) && (cord_y2 == cord_x2)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}