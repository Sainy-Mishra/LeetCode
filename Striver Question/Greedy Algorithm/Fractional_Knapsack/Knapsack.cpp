#include <iostream>
#include <algorithm>
using namespace std;

struct Item {
    int value;
    int weight;
};

bool comparator(Item a, Item b) {
    double r1 = (double) a.value / (double) a.weight;
    double r2 = (double) b.value / (double) b.weight;
    return r1 > r2;
}

double fractional_knapsack(int weight, Item arr[], int n) {
    sort(arr, arr + n, comparator);
    double maxv = 0.0;

    for (int i = 0; i < n; i++) {
        if (arr[i].weight <= weight) {
            maxv += arr[i].value;
            weight -= arr[i].weight;
        } else {
            maxv += (double)arr[i].value / arr[i].weight * weight;
            break;
        }
    }
    return maxv;
}

int main() {
    int n;
    cin >> n; // number of items
    int weight;
    cin >> weight; // capacity of knapsack

    Item arr[n];

    // Input each item's value and weight
    for (int i = 0; i < n; ++i) {
        cin >> arr[i].value >> arr[i].weight;
    }

    double result = fractional_knapsack(weight, arr, n);
    cout << "The maximum value is " << result << endl;

    return 0;
}
