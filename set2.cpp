#include<iostream>
#include<vector>
using namespace std;




class Sets {

private:

	int* A; int size1, size2;
	int* B;

public:
	Sets() {
		cin >> size1 >> size2;
		A = new int[size1];
		B = new int[size2];

	}
	void print(int* arr, int size) {
		for (int i = 0; i < size; i++)
			cout << arr[i] << " ";

	}
	void Intersection() {
		int* I = new int[size1];
		int k = 0;
		for (int i = 0; i < size1; i++) {
			for (int j = 0; j < size2; j++) {
				if (A[i] == B[j]) {
					I[k] = B[i];
					k++;
				}
			}
		}
		print(I,size1);
	}

	void Union() {
		int* U = new int[size1 + size2];
		for (int i = 0; i < size1; i++)
			U[i] = A[i];
		int k = size1;

		for (int j = 0; j < size2; j++) {
			for (int u = 0; u < size2; u++) {
				if (B[j] == U[u]) {
					break;
				}
				else if (B[j] != U[u] && u == size2) {
					U[k] = B[j];
					k++;
				}
			}
		}
		print(U, size1 + size2);
	}

	
};


//
//int main()
//{
//	
//	vector a;
//	
//	
//	
//	
//	int s1, s2, j;
//	cout << "\nEnter the size of set A : ";
//	cin >> s1;
//	int A[s1];
//	cout << "\nEnter elements in set A :";
//	for (int i = 0; i < s1; i++)
//		cin >> A[i];
//	cout << "\nEnter the size of set B :";
//	cin >> s2;
//	int B[s2];
//	cout << "\nEnter elements in set B :";
//	for (int i = 0; i < s2; i++)
//		cin >> B[i];
//	int I[s1];
//	int k = 0;
//	for (int i = 0; i < s1; i++) {
//		for (int j = 0; j < s2; j++) {
//			if (A[i] == B[j]) {
//				I[k] = A[i];
//				k++;
//			}
//		}
//	}
//	cout << "\nIntersection of set A and B : ";
//	for (int i = 0; i < k; i++)
//		cout << I[i] << " ";
//
//}