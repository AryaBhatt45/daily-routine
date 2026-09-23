#include <iostream>
using namespace std;

// दो सब-एरेस को सॉर्टेड तरीके से आपस में जोड़ने का फंक्शन
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1; // पहले सब-एरे का साइज
    int n2 = right - mid;    // दूसरे सब-एरे का साइज

    // टेम्परेरी एरे बनाना डेटा को स्टोर करने के लिए
    int L[n1], R[n2];

    // डेटा को टेम्परेरी एरेस में कॉपी करना
    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int j = 0; j < n2; j++) R[j] = arr[mid + 1 + j];

    // दोनों सब-एरेस को वापस मेन एरे में सॉर्ट करके डालना
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // अगर पहले एरे में कुछ एलिमेंट्स बच गए हों
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // अगर दूसरे एरे में कुछ एलिमेंट्स बच गए हों
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// मुख्य Merge Sort फंक्शन जो रिकर्शन का यूज करता है
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2; // बीच का इंडेक्स निकालना

        // दोनों हिस्सों को अलग-अलग तब तक तोड़ना जब तक सिंगल एलिमेंट न बचे
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // टूटे हुए हिस्सों को सॉर्ट करके आपस में जोड़ना
        merge(arr, left, mid, right);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);

    cout << "Sorted Array: ";
    printArray(arr, arr_size);
    return 0;
}