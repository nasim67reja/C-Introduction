#include <iostream>
// #include <string>
// #include <utility>
#include <vector>

using namespace std;

// //  Pair
// void pair_T()
// {
//     // The way of define pair
//     //  pair (data_type1, data_type2) Pair_name (value1, value2) ;
//     // 1/
//     pair<string, int> Item1("Pen", 5);
//     // 2
//     pair<int, int> coor;
//     coor.first = 4;
//     coor.second = 6;

//     // 3
//     pair Item2(Item1);
//     // 4
//     pair<string, int> Item3;
//     Item3 = make_pair("Paper", 10);
//     Item3 = {"Wood", 10};
//     // Note: If not initialized, the first value of the pair gets automatically initialized.

//     // cout << Item3.second << endl;

//     // cout << coor.second << endl;
//     Item1.first = "Pencil";
//     // cout << Item2.first << " ";

//     // ///////// Members Functions
//     // make_part() => already given in up
//     // swap

//     pair<char, int> Pair1 = make_pair('a', 2);
//     pair<char, int> Pair2 = make_pair('b', 3);

//     // cout << "Before Swaping : " << endl;
//     // cout << "Pair1 : " << Pair1.first << " " << Pair1.second << endl;
//     // cout << "Pair2 : " << Pair2.first << " " << Pair2.second << endl;
//     // Pair1.swap(Pair2);
//     // cout << "After Swaping : " << endl;
//     // cout << "Pair1 : " << Pair1.first << " " << Pair1.second << endl;
//     // cout << "Pair2 : " << Pair2.first << " " << Pair2.second << endl;
// }

void vector_T()
{
    // vector<int> g1;

    // // 2305843009213693951
    // for (int i = 1; i <= 5; i++)
    //     g1.push_back(i);

    // cout << "Size : " << g1.size();
    // cout << "\nCapacity : " << g1.capacity();
    // cout << "\nMax_Size : " << g1.max_size();

    // // resizes the vector size to 4
    // g1.resize(4);

    // // prints the vector size after resize()
    // cout << "\nSize : " << g1.size();

    // // checks if the vector is empty or not
    // if (g1.empty() == false)
    //     cout << "\nVector is not empty";
    // else
    //     cout << "\nVector is empty";

    // // Shrinks the vector
    // g1.shrink_to_fit();
    // cout << "\nVector elements are: ";
    // for (auto it = g1.begin(); it != g1.end(); it++)
    //     cout << *it << " ";

    ///////////// element access

    // vector<int> g1;

    // for (int i = 1; i <= 10; i++)
    //     g1.push_back(i * 10);

    // cout << "\nReference operator [g] : g1[2] = " << g1[2];

    // cout << "\nat : g1.at(4) = " << g1.at(4);

    // cout << "\nfront() : g1.front() = " << g1.front();

    // cout << "\nback() : g1.back() = " << g1.back();

    // // pointer to the first element
    // int *pos = g1.data();

    // cout << "\nThe first element is " << *pos;

    /////// Modifiers

    // // Assign vector
    // vector<int> v;

    // // fill the array with 10 five times
    // v.assign(5, 10);

    // cout << "The vector elements are: ";
    // for (int i = 0; i < v.size(); i++)
    //     cout << v[i] << " ";

    // // inserts 15 to the last position
    // v.push_back(15);
    // int n = v.size();
    // cout << "\nThe last element is: " << v[n - 1];

    // // removes last element
    // v.pop_back();

    // // prints the vector
    // cout << "\nThe vector elements are: ";
    // for (int i = 0; i < v.size(); i++)
    //     cout << v[i] << " ";

    // // inserts 5 at the beginning
    // v.insert(v.begin(), 5);

    // cout << "\nThe first element is: " << v[0];

    // // removes the first element
    // v.erase(v.begin());

    // cout << "\nThe first element is: " << v[0];

    // // inserts at the beginning
    // v.emplace(v.begin(), 5);
    // cout << "\nThe first element is: " << v[0];

    // // Inserts 20 at the end
    // v.emplace_back(20);
    // n = v.size();
    // cout << "\nThe last element is: " << v[n - 1];

    // // erases the vector
    // v.clear();
    // cout << "\nVector size after erase(): " << v.size();

    // // two vector to perform swap
    // vector<int> v1, v2;
    // v1.push_back(1);
    // v1.push_back(2);
    // v2.push_back(3);
    // v2.push_back(4);

    // cout << "\n\nVector 1: ";
    // for (int i = 0; i < v1.size(); i++)
    //     cout << v1[i] << " ";

    // cout << "\nVector 2: ";
    // for (int i = 0; i < v2.size(); i++)
    //     cout << v2[i] << " ";

    // // Swaps v1 and v2
    // v1.swap(v2);

    // cout << "\nAfter Swap \nVector 1: ";
    // for (int i = 0; i < v1.size(); i++)
    //     cout << v1[i] << " ";

    // cout << "\nVector 2: ";
    // for (int i = 0; i < v2.size(); i++)
    //     cout << v2[i] << " ";

    vector<int> v;
    // num.assign(3, 2);
    for (int i = 1; i < 7; i++)
        v.push_back(i);
    // v.erase(v.begin() + 2, v.begin() + 5);
    // v.erase(3);
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << endl;
}

// int main()
// {

//     // pair_T();
//     vector_T();

//     return 0;
// }

// HackerRank Vector Problem

int main()
{
    vector<int> arr;
    int n, val, a, b, c;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> val;
        arr.push_back(val);
    }
    cin >> a >> b >> c;
    arr.erase(arr.begin() + --a);
    arr.erase(arr.begin() + --b, arr.begin() + --c);

    cout << arr.size() << endl;
    for (int i : arr)
    {
        cout << i << " ";
    }
    return 0;
}