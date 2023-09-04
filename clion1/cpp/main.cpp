#include "../h/headers.h"
#include "../h/Sales_data.h"
#include "../h/Person.h"
/*
 * 界面系统，存储（json），查询
 */

int main()
{
    Sales_data total;
    vector<Sales_data> allData;
    cout << "0 : exit." << endl;
    cout << "1 : add new book." << endl;
    cout << "2 : delete data." << endl;
    cout << "3 : check book data." << endl;
    cout << "4 : combine book data." << endl;
    Person person1;
    string name="nihao";
    string address="yantai";
    person1.setAddress(address);
    person1.setName((name));
    cout<<person1.getAddress()<<endl;

    while (true) {
        cout << "Please select an action you want:" << endl;
        int mode_select = 0;
        cin >> mode_select;
        if (mode_select == 0) {
            break;
        }
        else if (mode_select == 1) {
            cout << "Please enter bookNo:" << endl;
            cin >> total.bookNo;
            cout << "Please enter units_sold:" << endl;
            cin >> total.units_sold;
            cout << "Please enter revenue:" << endl;
            cin >> total.revenue;

            allData.push_back(total);
            cout<<"size of allData: "<<allData.size()<<endl;
        }
        else if (mode_select == 2) {
            cout << "Please enter the bookNo you want to delete:" << endl;
            string delete_id;
            cin >> delete_id;
            int i = 0;
            while ( i < allData.size()) {
                if (allData[i].bookNo == delete_id) {
                    allData.erase(allData.begin() + i );
                    cout<<allData.size()<<" "<<i<<endl;
                    break;
                }
                i++;
            }
            if (i == allData.size()) {
                cout << "the bookNo you entered has not been found. Please enter another bookNo." << endl;
            }
            else if (allData[i].bookNo != delete_id) {//检测是否删除成功
                cout << "Delete successfully!" << endl;
            }
            else {
                cout << "Delete failed!" << endl;
            }
        }
        else if (mode_select == 3) {
            cout << "Please enter the bookNo you want to check:" << endl;
            string check_id;
            cin>>check_id;
            int flag=0;
            for (auto & i : allData) {
                if(i.bookNo==check_id){
                    cout<<"units_sold of "<<check_id<<" is "<<i.units_sold<<endl;
                    cout<<"revenue of "<<check_id<<" is "<<i.revenue<<endl;
                    flag++;
                }
            }
            if(flag==0)
                cout<<"Check failed! Please enter another bookNo."<<endl;
        }
        else if (mode_select == 4) {
            if (cin >> total.bookNo >> total.units_sold >> total.revenue)
            {
                Sales_data trans;
                while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue) {
                    if (total.isbn() == trans.isbn())
                        total.combine(trans);
                    else {
                        cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
                        total = trans;
                    }
                }
                cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
            }
            else
            {
                cerr << "No data?!" << endl;
            }
        }else if(mode_select==5){
            cout<<"there are all data:"<<endl;
            for(int i=0;i<allData.size();i++){
                cout<<allData[i].bookNo<<" "<<allData[i].units_sold<<"  "<<allData[i].revenue<<endl;
            }
        }else{
            cout<<"enter another number!"<<endl;
        }

    }
    cout << "Program exited." << endl;


    return 0;
}
