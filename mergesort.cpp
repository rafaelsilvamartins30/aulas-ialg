#include <iostream>
#include <string>

using namespace std;

struct Misterio {
    int ano;
    string nomeFantasma; 
};

bool comparar(Misterio& m1, Misterio& m2) {
    return m1.ano < m2.ano || (m1.ano == m2.ano && m1.nomeFantasma < m2.nomeFantasma);
}

void merge(Misterio* arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    Misterio* L = new Misterio[n1];
    Misterio* R = new Misterio[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (comparar(L[i], R[j])) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    delete[] L;
    delete[] R;
}

void mergeSort(Misterio* arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

int main() {
    int quantidade;
    cin >> quantidade;

    Misterio* misterios = new Misterio[quantidade];

    for (int i = 0; i < quantidade; i++) {
        cin >> misterios[i].ano >> misterios[i].nomeFantasma;
    }

    mergeSort(misterios, 0, quantidade - 1);

    for (int i = 0; i < quantidade; i++) {
        cout << misterios[i].nomeFantasma << endl;
    }

    delete[] misterios;

    return 0;
}
