#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<double> initialMoney = {2000, 2500, 3000, 3500, 4000};

    int pc_price; cout << "Total price of the PC that you are planning to buy : "; cin >> pc_price;
    int months = 6;

    int income1 = 650;
    int monthlyOutgoing1 = -100;
    int monthlyOutgoing2 = ( (float) pc_price / months ) * -1;
    
    float INCOME = income1;
    float OUTGOING = monthlyOutgoing1 + monthlyOutgoing2;

    for(double MONEY: initialMoney)
    {
        cout << "IF initially have -> " << MONEY << " TL" << endl;
        cout << "  installment -> " << monthlyOutgoing2 << " TL" << endl;
        for(int i=1; i <= 6 ;i++)
        {
            cout << "\t" << i << ".month" << endl;
            cout << "\t\t+" << INCOME << " TL" << endl; cout << "\t\t" << OUTGOING << " TL" << endl;
                MONEY = MONEY + INCOME + OUTGOING;
            cout << "\t\t\t" << MONEY << " TL left" << endl;
        }
        cout << "---- ---- ---- ----" << endl;
    }
    
    system("Pause");

    return 0;
}