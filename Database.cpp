#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Database {
private:
    vector<string> data;

public:
    void insert(string value) {
        data.push_back(value);
    }

    void remove(string value) {
        for (int i = 0; i < data.size(); i++) {
            if (data[i] == value) {
                data.erase(data.begin() + i);
                break;
            }
        }
    }

    void display() {
        for (int i = 0; i < data.size(); i++) {
            cout << data[i] << endl;
        }
    }
};

int main() {
    Database db;
    db.insert("John");
    db.insert("Mary");
    db.insert("Bob");
    db.display();
    db.remove("Mary");
    db.display();
    return 0;
}
