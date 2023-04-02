#include<iostream>
using namespace std;


int* Intersection(int* s1, int* s2,int size1,int size2) {
	int* I=new int[size1];
	int k = 0;
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			if (s1[i] == s2[j]) {
				I[k] = s1[i];
				k++;
			}
		}
	}
}

int* Union(int* s1, int* s2, int size1, int size2) {
	int* U=new int[size1 + size2];
	for (int i = 0; i < size1; i++)
		U[i] = s1[i];
	int k = size1;

	for (int j = 0; j < size2; j++) {
		for (int u = 0; u < size2; u++) {
			if (s2[j] == U[u]) {
				break;
			}
			else if (s2[j] != U[u] && u == size2) {
				U[k] = s2[j];
				k++;
			}
		}
	}
}




int main()
{
	int s1, s2, j;
	cout << "\nEnter the size of set A : ";
	cin >> s1;
	int A[s1];
	cout << "\nEnter elements in set A :";
	for (int i = 0; i < s1; i++)
		cin >> A[i];
	cout << "\nEnter the size of set B :";
	cin >> s2;
	int B[s2];
	cout << "\nEnter elements in set B :";
	for (int i = 0; i < s2; i++)
		cin >> B[i];
	int U[s1 + s2];
	for (int i = 0; i < s1; i++)
		U[i] = A[i];
	int k = s1;
	
	for (int j = 0; j < s2; j++) {
		for (int u = 0; u < s2; u++) {
			if (B[j] == U[u]) {
				break;
			}
			else if (B[j] != U[u] && u == s2) {
				U[k] = B[j];
				k++;
			}
		}
	}
	
	/*for (int i = 0; i < s2; i++) {
		int c = 1;
		for (int j = 0; j < s1; j++) {
			if (B[i] == A[j]) {
				c = 0;
				break;
			}
		}
	}
	if (c == 1) {
		U[k] = B[i];
		k++;
	}*/
	cout << "\nUnion of set A and B : ";
	for(int i = 0; i < k; i++)
		cout << U[i]<< " ";
}