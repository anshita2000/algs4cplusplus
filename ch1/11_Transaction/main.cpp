#include <iostream>
#include <algorithm>
#include "../head/Transaction.h"

using namespace std;

/**
 * Unit tests the {@code Transaction} data type.
 *
 * @param args the command-line arguments
 */
int main() {
    vector<Transaction *> a;
    a.push_back(new Transaction("Turing 6/17/1990 644.08"));
    a.push_back(new Transaction("Tarjan 3/26/2002 4121.85"));
    a.push_back(new Transaction("Knuth 6/14/1999 288.34"));
    a.push_back(new Transaction("Dijkstra 8/22/2007 2678.40"));

    cout << "Unsorted" << endl;
    for (int i = 0; i < a.size(); ++i)
        cout << *a[i] << endl;
    cout << endl;

    cout << "Sorted by date" << endl;
    sort(a.begin(), a.end(), Transaction::WhenOrder);
    for (int i = 0; i < a.size(); ++i)
        cout << *a[i] << endl;
    cout << endl;

    cout << "Sorted by customer" << endl;
    sort(a.begin(), a.end(), Transaction::WhoOrder);
    for (int i = 0; i < a.size(); ++i)
        cout << *a[i] << endl;
    cout << endl;

    cout << "Sorted by amount" << endl;
    sort(a.begin(), a.end(), Transaction::HowMuchOrder);
    for (int i = 0; i < a.size(); ++i)
        cout << *a[i] << endl;
}