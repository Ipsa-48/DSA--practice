#include <iostream>
#include <cstdlib>
using namespace std;

void delete_beg(int arr[], int &n);
void delete_end(int arr[], int &n);
void delete_random(int arr[], int &n);
void display(int arr[], int n);

int main() {
    int arr[50], n, choice = 0;
    cout << "Enter the size of an array: ";
    cin >> n;

    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nChoose one option from following list:\n";
    cout << " 1. Delete from beginning\n";
    cout << " 2. Delete from end\n";
    cout << " 3. Delete from specific position\n";
    cout << " 4. Display\n";
    cout << " 5. Exit\n";

    while (choice != 5) {
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                delete_beg(arr, n);
                break;
            case 2:
                delete_end(arr, n);
                break;
            case 3:
                delete_random(arr, n);
                break;
            case 4:
                display(arr, n);
                break;
            case 5:
                exit(0);
            default:
                cout << "Please enter a valid choice.\n";
        }
    }
    return 0;
}

void delete_beg(int arr[], int &n) {
    if (n == 0) {
        cout << "Array is empty, nothing to delete.\n";
        return;
    }
    cout << "Deleted element: " << arr[0] << endl;
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}

void delete_end(int arr[], int &n) {
    if (n == 0) {
        cout << "Array is empty, nothing to delete.\n";
        return;
    }
    cout << "Deleted element: " << arr[n - 1] << endl;
    n--;
}

void delete_random(int arr[], int &n) {
    if (n == 0) {
        cout << "Array is empty, nothing to delete.\n";
        return;
    }

    int pos;
    cout << "Enter the position (1 to " << n << ") to delete: ";
    cin >> pos;

    if (pos < 1 || pos > n) {
        cout << "Invalid position!\n";
        return;
    }

    cout << "Deleted element: " << arr[pos - 1] << endl;

    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}

void display(int arr[], int n) {
    if (n == 0) {
        cout << "Array is empty.\n";
        return;
    }
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
