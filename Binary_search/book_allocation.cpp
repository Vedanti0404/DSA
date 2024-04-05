#include <iostream>
using namespace std;

class Solution {
public:
    // Function to find minimum number of pages.
    int findPages(int A[], int N, int M) {
        if (M > N) {
            return -1;
        }
        
        int start = 0, end = 0, mid, ans = -1; 
        for (int i = 0; i < N; i++) {
            start = max(start, A[i]);
            end += A[i];
        }
        
        while (start <= end) {
            mid = start + (end - start) / 2;
            int pages = 0, count = 1;
            for (int i = 0; i < N; i++) {
                pages += A[i];
                if (pages > mid) {
                    count++;
                    pages = A[i];
                }
            }
            if (count <= M) {
                ans = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return ans;
    }
};

int main() {
    int N; // Number of books
    cout << "Enter the number of books: ";
    cin >> N;

    int A[N]; // Array to store the number of pages in each book
    cout << "Enter the number of pages in each book: ";
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int M; // Number of students
    cout << "Enter the number of students: ";
    cin >> M;

    Solution obj; // Creating object of Solution class
    int result = obj.findPages(A, N, M); // Calling findPages function

    if (result != -1) {
        cout << "Minimum number of pages each student should read: " << result << endl;
    } else {
        cout << "It's not possible to assign books to students." << endl;
    }

    return 0;
}
