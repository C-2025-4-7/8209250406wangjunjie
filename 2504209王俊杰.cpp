#include <iostream>
using namespace std;

int main() {
    double price = 0.8;  
    int count = 2;       
    int days = 0;
    int total_apples = 0;

    
    while (count <= 100) {
        total_apples += count;
        days++;
        
        int next_count = count * 2;
        if (next_count > 100)
            break;
        count = next_count;
    }

    double total_cost = total_apples * price;
    double average_cost = total_cost / days;

    cout << "总天数: " << days << endl;
    cout << "总苹果数: " << total_apples << endl;
    cout << "总花费: " << total_cost << " 元" << endl;
    cout << "平均每天花费: " << average_cost << " 元" << endl;

    return 0;
}