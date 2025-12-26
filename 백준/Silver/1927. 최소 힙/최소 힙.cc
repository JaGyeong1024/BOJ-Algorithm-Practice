#include<iostream>
using namespace std;

void MinHeapify(unsigned int *arr, int i, int size){
	while (true) {
		int l = 2 * i + 1;
		int r = 2 * i + 2;
		int minidx = i;

		if (l < size && arr[l] < arr[minidx]) minidx = l;

		if (r < size && arr[r] < arr[minidx]) minidx = r;

		if (minidx == i) break;

		unsigned int temp = arr[i];
		arr[i] = arr[minidx];
		arr[minidx] = temp;

		i = minidx;
	}
}

void BuildMinHeap(unsigned int* arr, int size) {
	for (int i = size / 2 - 1; i >= 0; --i)
		MinHeapify(arr, i, size);
}

void HeapInsert(unsigned int* arr, int& size, unsigned int x) {
	arr[size] = x;
	int i = size;
	size++;

	while (i > 0) {
		int p = (i - 1) / 2;
		if (arr[p] <= arr[i]) break;

		unsigned int temp = arr[p];
		arr[p] = arr[i];
		arr[i] = temp;

		i = p;
	}
}

unsigned int HeapPop(unsigned int* arr, int& size) {
	if (size == 0) return 0;

	unsigned int ret = arr[0];
	arr[0] = arr[size - 1];
	size--;

	MinHeapify(arr, 0, size);
	return ret;
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N = 0;
	int size = 0;

	cin >> N;
	
	unsigned int* arr = new unsigned int[N]();

	for (int i = 0; i < N; i++) {

		unsigned int x = 0;
		cin >> x;

		if (x == 0)
			cout << HeapPop(arr, size) << '\n';
		else
			HeapInsert(arr, size, x);
		
	}

	delete[] arr;
	return 0;
}