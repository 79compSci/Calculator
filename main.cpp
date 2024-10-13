#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

// Function to merge two files
void mergeFiles(const string& file1, const string& file2, const string& output_file) {
    ifstream f1(file1);
    ifstream f2(file2);
    ofstream out(output_file);

    string line1, line2;

    // Read the first line from each file
    bool file1_has_line = static_cast<bool>(getline(f1, line1));
    bool file2_has_line = static_cast<bool>(getline(f2, line2));

    // While there are lines to read from both files
    while (file1_has_line && file2_has_line) {
        // Extract the key (name) from both lines
        string name1 = line1.substr(0, line1.find(' '));
        string name2 = line2.substr(0, line2.find(' '));

        // Compare the names and write the appropriate line to the output file
        if (name1 < name2) {
            out << line1 << endl;
            file1_has_line = static_cast<bool>(getline(f1, line1)); // Get next line from file1
        } else if (name1 > name2) {
            out << line2 << endl;
            file2_has_line = static_cast<bool>(getline(f2, line2)); // Get next line from file2
        } else {
            // If names are equal, write one and move both pointers
            out << line1 << endl;
            file1_has_line = static_cast<bool>(getline(f1, line1));
            file2_has_line = static_cast<bool>(getline(f2, line2));
        }
    }

    // Write remaining lines from file1 (if any)
    while (file1_has_line) {
        out << line1 << endl;
        file1_has_line = static_cast<bool>(getline(f1, line1));
    }

    // Write remaining lines from file2 (if any)
    while (file2_has_line) {
        out << line2 << endl;
        file2_has_line = static_cast<bool>(getline(f2, line2));
    }

    // Close all files
    f1.close();
    f2.close();
    out.close();
}

int main() {
    string file1 = "file1.txt";
    string file2 = "file2.txt";
    string output_file = "output.txt";

    mergeFiles(file1, file2, output_file);

    cout << "Files merged successfully!" << endl;
    return 0;
}
