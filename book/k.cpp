#include <bits/stdc++.h>
using namespace std;

class FruitSeller{
    private:
    int APPLE_PRICE;
    int numOfApples;
    int myMoney;

    public:
    void InitMembers(int price, int num, int money){
        APPLE_PRICE = price;
        numOfApples = num;
        myMoney = money;

    }

    int SalesApples(int money){
        int num = money / APPLE_PRICE;
        numOfApples -= num;
        myMoney += money;
        return num;
    }

    void ShowSalesResult(){
        cout << "남은 사과: " << numOfApples << '\n';
        cout << "판매 수익: " << myMoney << endl << endl;

    }
};


class FruitBuyer{
    int myMoney; //private
    int numOfApples; //private

    public:
    void InitMembers(int money){
        myMoney = money;
        numOfApples = 0;
    }

    void ShowBuyResult(){
        cout << "현재 잔액: " << myMoney << '\n';
        cout << "사과 개수: " << numOfApples << '\n' << '\n';
    }

    void BuyApples(FruitSeller &seller, int money){
        numOfApples += seller.SalesApples(money);
        myMoney -= money;

    }  
};

int main(){

    FruitSeller seller;
    seller.InitMembers(1000, 20, 0);

    FruitBuyer buyer;
    buyer.InitMembers(5000);
    buyer.BuyApples(seller, 2000); // 과일구매

    cout << "과일 판매자 현황" << '\n';
    seller.ShowSalesResult();

    cout << "과일 구매자 현황" << '\n';
    buyer.ShowBuyResult();
    return 0;

}
