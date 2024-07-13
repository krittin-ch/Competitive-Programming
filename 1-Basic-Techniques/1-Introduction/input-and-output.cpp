#include <bits/stdc++.h>

using namespace std;

// execute the file with
// g++ --std=c++11 file_name.cpp -o program_file (.exe)


int main() {
    // Input and Output
    
    // ios::sync_with_stdio(false); // Disable synchronization with stdio
    // cin.tie(0); // (or cin.tie(nullptr)) Untie cin from cout
    /*
        1. Flush: Forces buffered output to be immediately written to its destination (e.g., console, file).
        2. Buffer: Temporary storage area in memory used to hold data during input and output operations, optimizing performance.
        3. Tie: Default synchronization between cin (input) and cout (output) in C++. cout is automatically flushed before cin accepts input.
        4. Untie: Disables the default synchronization between cin and cout, allowing cin to operate independently of cout, potentially improving performance in scenarios where immediate output display isn't critical.
        
        "\n" works faster than "endl", because "endl" always causes a flush operation - since "endl" is buffered, sotred in the temporary storage.
    */
    
    /*
    int a, b;
    string x;
    // accept inputs
    cin >> a >> b >> x;
    // print outputs 
    cout << a << " " << b << " " << x << "\n";
    */

    /*
        another input/output from C functions
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d %d\n", a, b);
    */

    /*
    // read the sentences, including whitespace
    string s;
    getline(cin, s);

    cout << s << "\n";
    */

    /*
    // read multiple lines
    string y;
    while (cin >> y) {
        cout << "Read : " << y << "\n";
    }
    */

    freopen("input1.txt", "r", stdin);

    int num1;
    cin >> num1;
    cout << "Input 1: " << num1 << endl;

    fclose(stdin);


    // rewind(stdin);
    cin.clear();     // typically applied to clear errors, especially used after "freopen"

    freopen("input2.txt", "r", stdin);

    int num2;
    cin >> num2;
    cout << "Input 2: " << num2 << endl;

    fclose(stdin);

    freopen("output.txt", "w", stdout);

    cout << "Sum: " << (num1 + num2) << endl;

    fclose(stdout);

    return 0;
}

