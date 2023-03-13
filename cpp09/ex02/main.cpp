/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 19:20:49 by aait-oma          #+#    #+#             */
/*   Updated: 2023/03/13 19:44:33 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <iostream>
// #include <vector>
// #include <cstdlib>

// using namespace std;

// void merge(vector<int>& arr, int left, int mid, int right) {
//     int n1 = mid - left + 1;
//     int n2 = right - mid;

//     vector<int> L(n1);
//     vector<int> R(n2);

//     for (int i = 0; i < n1; i++)
//         L[i] = arr[left + i];
//     for (int j = 0; j < n2; j++)
//         R[j] = arr[mid + 1 + j];

//     int i = 0;
//     int j = 0;
//     int k = left;

//     while (i < n1 && j < n2) {
//         if (L[i] <= R[j]) {
//             arr[k] = L[i];
//             i++;
//         }
//         else {
//             arr[k] = R[j];
//             j++;
//         }
//         k++;
//     }

//     while (i < n1) {
//         arr[k] = L[i];
//         i++;
//         k++;
//     }

//     while (j < n2) {
//         arr[k] = R[j];
//         j++;
//         k++;
//     }
// }

// void merge_sort(vector<int>& arr, int left, int right) {
//     if (left < right) {
//         int mid = left + (right - left) / 2;

//         merge_sort(arr, left, mid);
//         merge_sort(arr, mid + 1, right);

//         merge(arr, left, mid, right);
//     }
// }

// int main(int argc, char* argv[]) {
//     vector<int> arr;

//     for (int i = 1; i < argc; i++) {
//         int val = atoi(argv[i]);
//         if (val <= 0) {
//             cerr << "Error: invalid input sequence." << endl;
//             return 1;
//         }
//         arr.push_back(val);
//     }

//     merge_sort(arr, 0, arr.size() - 1);

//     for (vector<int>::iterator it = arr.begin(); it != arr.end(); it++) {
//         cout << *it << " ";
//     }
//     cout << endl;

//     return 0;
// }

#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <ctime>

using namespace std;

void merge_sort(vector<int>& arr)
{
    if (arr.size() > 1)
    {
        int mid = arr.size() / 2;
        vector<int> left(arr.begin(), arr.begin() + mid);
        vector<int> right(arr.begin() + mid, arr.end());

        merge_sort(left);
        merge_sort(right);

        int i = 0, j = 0, k = 0;

        while (i < left.size() && j < right.size())
        {
            if (left[i] < right[j])
            {
                arr[k] = left[i];
                i++;
            }
            else
            {
                arr[k] = right[j];
                j++;
            }
            k++;
        }

        while (i < left.size())
        {
            arr[k] = left[i];
            i++;
            k++;
        }

        while (j < right.size())
        {
            arr[k] = right[j];
            j++;
            k++;
        }
    }
}

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        cout << "Usage: PmergeMe <positive integer sequence>" << endl;
        return 1;
    }

    vector<int> arr;
    istringstream iss(argv[1]);
    int num;

    while (iss >> num)
    {
        if (num < 1)
        {
            cout << "Error: Invalid input sequence. Only positive integers are allowed." << endl;
            return 1;
        }

        arr.push_back(num);
    }

    cout << "Unsorted sequence: ";
    for (vector<int>::iterator it = arr.begin(); it != arr.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    clock_t start_time = clock();
    merge_sort(arr);
    clock_t end_time = clock();

    cout << "Sorted sequence: ";
    for (vector<int>::iterator it = arr.begin(); it != arr.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    double time_used = static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC;
    cout << "Time taken using vector: " << time_used << " seconds" << endl;

    vector<int> arr_copy(arr.begin(), arr.end());
    start_time = clock();
    sort(arr_copy.begin(), arr_copy.end());
    end_time = clock();

    time_used = static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC;
    cout << "Time taken using sort algorithm: " << time_used << " seconds" << endl;

    return 0;
}
