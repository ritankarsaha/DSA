#include <bits/stdc++.h>
using namespace std;

// algorithm to store two arrays in 1 array in a sorted order.
double median_brute_force_algorithm(vector<int> &array1, vector<int> &array2)
{
    int n1 = array1.size(), n2 = array2.size();
    vector<int> array3;
    int i = 0, j = 0;
    while (i <= n1 && j <= n2)
    {
        if (array1[i] < array2[j])
        {
            array3.push_back(array1[i]++);
        }
        else
        {
            array3.push_back(array2[j++]);
        }
    }
    while (i <= n1)
        array3.push_back(array1[i++]);
    while (j <= n2)
        array3.push_back(array2[j++]);

    // finding the actual median of the array.
    int n = (n1 + n2);
    if (n % 2 != 0)
    {
        return array3[n / 2];
    }
    else
    {
        return (double)((((double)array3[n / 2]) + ((double)array3[n / 2 - 1])) / 2.0);
    }
}

double median_optimal_algorithm(vector<int> &a1, vector<int> &a2)
{
    int n1 = a1.size(), n2 = a2.size();
    int i = 0, j = 0, n = (n1 + n2);
    int index2 = n / 2, index1 = index2 - 1, count = 0, index1ele = -1, index2ele = -1;
    while (i < n1 && j < n2)
    {
        if (a1[i] < a2[j])
        {
            if (count == index1)
                index1ele = a1[i];
            if (count == index2)
                index2ele = a1[i];
        }
        else
        {
            if (count == index1)
                index1ele = a2[j];
            if (count == index2)
                index2ele = a2[j];
        }
    }
    while (i < n1)
    {
        if (count == index1)
            index1ele = a1[i];
        if (count == index2)
            index2ele = a1[i];
    }
    while (j < n2)
    {
        if (count == index1)
            index1ele = a2[j];
        if (count == index2)
            index2ele = a2[j];
    }

    if (n % 2 != 0)
        return index2ele;
    else
        return (double)((double)(index1ele + index2ele) / 2);
}
