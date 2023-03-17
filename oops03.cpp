#include <iostream>
using namespace std;

class shop
{   int itemprice[100];
    int itemId[100];
  
    int counter;

public: 
    void initcounter(void) { counter = 0; };
    void setprice(void);
    void displayprice(void);
     
};
void shop ::setprice(void)
{
    cout << "enter id of your item " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "enter price of your itme " << endl;
    cin >> itemprice[counter];
    counter++;
}
void shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of item with id " << itemId[100] << " is " << itemprice[100] << endl;
    }
     int total=0;
     for (int i =0; i<counter; i++){
        total = total + itemprice[i];

     }
     cout<<"total price of your item "<<total;

}
int main()
{
    shop dukaan;
    dukaan.initcounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();
    return 0;
}