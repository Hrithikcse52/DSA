#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define line cout<<endl;

void cp() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
bool check_pali_num(int n) {
	int temp = n;
	int check = 0;
	while (temp > 0) {
		check = check * 10 + temp % 10;
		temp = temp / 10;
	}
	cout << check << endl;
	if ( check ==  n)
		return true;
	else return false;
}


bool string_pali_check(string str, int s, int e) {
	if (s == e)return true;
	if (str[e] != str[s]) return false;
	if (s < e + 1) {
		return string_pali_check(str, s + 1, e - 1);
	}
	return true;
}

int arr[100000] = {0};

bool prime_check(int n) {
	bool flag = true;
	for (int i = 2; i * i < n; i++) {
		// cout << i << "*";
		if (n % i == 0) {
			flag = false;
			// cout << i;
		}

	}
	return flag;
}

void swap_local(int &a, int &b) {
	a = a + b;
	b = a - b;
	a = a - b;
}


void swap_using_temp(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}


void bubble_sort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (arr[j] > arr[j + 1]) swap_local(arr[j], arr[j + 1]);
		}
	}
}

int count_trailing_zeros_fact(int n) {
	int res = 0;
	for (int i = 5; i <= n; i *= 5) {
		res += n / i;
	}
	return res;
}

struct Node {
	int val;
	Node *next;
};


int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a / b);
}

bool compare(int a, int b) {
	cout << "comparing" << a << " & " << b << endl;
	if (a < b) {
		return true;
	}
	return false;
}

void swap_log(int &a, int &b) {
	cout << "swapping" << a << " & " << b << endl;
	swap_using_temp(a, b);
}



void selection_sort(int arr[], int n) {
	for (int i = 0 ; i < n; i++) {
		int min = i;
		for (int j = i + 1; j < n; j++) {
			if (compare(arr[j] , arr[min])) {
				min = j;
			}
		}
		swap_local(arr[min], arr[i]);
	}
}

void insertion_sort(int arr[], int n) {
	for (int i = 1; i < n; i++) {
		for (int j = i - 1; j >= 0; j--) {
			if (arr[j] > arr[j + 1])
				swap_log(arr[j], arr[j + 1]);
			else break;
		}
	}
}

void merge(int arr[], int low, int high, int mid) {
	int n1 = mid - low  + 1;
	int n2 = high - mid;
	cout << n1 << "#" << n2 << endl;
	int a[n1], b[n2];
	for (int i = 0; i < n1; i++) {
		a[i] = arr[low + i];
	}
	for (int i = 0; i < n2; i++) {
		b[i] = arr[mid + 1 + i];
	}
	int lo = 0, hi = 0, k = low;
	while (lo < n1 && hi < n2) {
		if (a[lo] < b[hi]) {
			arr[k] = a[lo];
			k++; lo++;
		}
		else {
			arr[k] = b[hi];
			hi++; k++;
		}
	}
	while (lo < n1) {
		arr[k] = a[lo];
		k++; lo++;
	}
	while (hi < n2) {
		arr[k] = b[hi];
		hi++; k++;
	}

}

void merge_sort(int arr[], int low, int high) {

	if (low < high) {
		int mid = (low + high) / 2;
		merge_sort(arr, low, mid);
		merge_sort(arr, mid + 1, high);
		merge(arr, low, high, mid);
	}
}
/*
partition (arr[], low, high)
{
    // pivot (Element to be placed at right position)
    pivot = arr[high];

    i = (low - 1)  // Index of smaller element and indicates the
                   // right position of pivot found so far

    for (j = low; j <= high- 1; j++)
    {
        // If current element is smaller than the pivot
        if (arr[j] < pivot)
        {
            i++;    // increment index of smaller element
            swap arr[i] and arr[j]
        }
    }
    swap arr[i + 1] and arr[high])
    return (i + 1)
}
*/

int partition_loc(int arr[], int low, int high) {
	int pivot = arr[high];
	int i = low - 1;
	for (int j = low; j < high - 1; j++) {
		if (arr[j] < pivot) {
			i++;
			swap_using_temp(arr[i], arr[j]);
		}
	}
	swap_local(arr[i + 1], arr[high]);
	return (i + 1);
}
void quick_sort(int arr[], int low, int high) {
	if (low < high) {
		int pi = partition_loc(arr, low, high);
		quick_sort(arr, low, pi - 1);
		quick_sort(arr, pi + 1, high);
	}
}




int main() {
	cp();
	int a = 121;
	string str = "dasdaksjdlakjsdkalDSKL";
	if (check_pali_num(a)) {
		cout << "Pali" << endl;
	}
	else cout << "Number NOT PAli" << endl;

	if (string_pali_check(str, 0, str.length() - 1)) {
		cout << "String Pali" << endl;
	}
	else {
		cout << "String Not Pali" << endl;
	}
	int prime = 489;
	if (prime_check(prime)) cout << "Prime" << endl;
	else cout << "Not Prime" << endl;



	int arr[] = {4, 5, 2, 6, 1, 8, 3, 13 , 11, 14, 9};
	int n = sizeof(arr) / sizeof(arr[0]);
	for (auto it : arr) cout << it << " ";
	line
	// bubble_sort(arr, n);
	// selection_sort(arr, n);
	// insertion_sort(arr, n);
	// merge_sort(arr, 0, n - 1);
	quick_sort(arr, 0, n - 1);
	for (auto it : arr) cout << it << " ";
	line


	int temp_a = 7, b = 9;
	swap_local(temp_a, b);
	cout << "temp_a:" << temp_a << "b:" << b << endl;



	int num_fact = 10;
	cout << count_trailing_zeros_fact(num_fact);
	line


	return 0;
}

