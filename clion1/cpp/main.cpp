#include "../h/headers.h"
#include "../h/Sales_data.h"
#include "../h/Person.h"
#include <fstream>
#include <sstream>

/*
 * 界面系统，存储（json），查询
 */
istream &f1(istream &s) {
    string string1;
    while (s >> string1)
        cout << string1 << endl;
    s.clear();
    return s;
}

void readfile(vector<string> &v) {
    ifstream input("../file1.txt");
    if (!input) {
        cerr << "open file failed!" << endl;
    } else {
        int i = 0;
        string s;
        while (input >> s) {
            v.push_back(s);
            cout << "第" << i++ << "行数据输入成功！" << endl;
        }
    }
}


int main(int argc, char **argv) {
    ifstream input(argv[1]);
    ofstream out(argv[2]);
    vector<Sales_data> output_array;
    Sales_data total;
    if (read(input, total))
    {
        Sales_data trans;
        while (read(input, trans))
        {
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else
            {
                print(out, total) << endl;
                total = trans;
            }
        }
        print(out, total) << endl;
    }
    else
    {
        cerr << "No data?!" << endl;
    }

    return 0;
    vector<string> v;
    readfile(v);
    int i = 0;
    for (const auto &output: v)
        cout << i++ << ": " << output << endl;


//    f1(cin);
//    Sales_data total("world");
//    vector<Sales_data> array(22, Sales_data("string"));
//    string null_isbn = "999-999";
//    Sales_data item1(null_isbn);
//    Sales_data item2("999-999");
//    print(cout, item1);
//    item2.combine(cin);
//    print(cout, item2);

//    vector<Sales_data> allData;
//    cout << "0 : exit." << endl;
//    cout << "1 : add new book." << endl;
//    cout << "2 : delete data." << endl;
//    cout << "3 : check book data." << endl;
//    cout << "4 : combine book data." << endl;
//    Person person1;
//    string name = "nihao";
//    string address = "yantai";
//    person1.setAddress(address);
//    person1.setName((name));
//    cout << person1.getAddress() << endl;

//    while (true) {
//        cout << "Please select an action you want:" << endl;
//        int mode_select = 0;
//        cin >> mode_select;
//        if (mode_select == 0) {
//            break;
//        }
//        else if (mode_select == 1) {
//            cout << "Please enter bookNo:" << endl;
//
//            read(cin, total);
//
//            allData.push_back(total);
//            cout<<"size of allData: "<<allData.size()<<endl;
//        }
//        else if (mode_select == 2) {
//            cout << "Please enter the bookNo you want to delete:" << endl;
//            string delete_id;
//            cin >> delete_id;
//            int i = 0;
//            while ( i < allData.size()) {
//                if (allData[i].isbn() == delete_id) {
//                    allData.erase(allData.begin() + i );
//                    cout<<allData.size()<<" "<<i<<endl;
//                    break;
//                }
//                i++;
//            }
//            if (i == allData.size()) {
//                cout << "the bookNo you entered has not been found. Please enter another bookNo." << endl;
//            }
//            else if (allData[i].isbn() != delete_id) {//检测是否删除成功
//                cout << "Delete successfully!" << endl;
//            }
//            else {
//                cout << "Delete failed!" << endl;
//            }
//        }
//        else if (mode_select == 3) {
//            cout << "Please enter the bookNo you want to check:" << endl;
//            string check_id;
//            cin>>check_id;
//            int flag=0;
//            for (auto & i : allData) {
//                if(i.isbn()==check_id){
////                    cout<<"units_sold of "<<check_id<<" is "<<i.units_sold<<endl;
////                    cout<<"revenue of "<<check_id<<" is "<<i.revenue<<endl;
////                    flag++;
////                }
////            }
////            if(flag==0)
////                cout<<"Check failed! Please enter another bookNo."<<endl;
////        }
////        else if (mode_select == 4) {
////            if (cin >> total.bookNo >> total.units_sold >> total.revenue)
////            {
////                Sales_data trans;
////                while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue) {
////                    if (total.isbn() == trans.isbn())
////                        total.combine(trans);
////                    else {
////                        cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
////                        total = trans;
////                    }
////                }
////                cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
////            }
////            else
////            {
////                cerr << "No data?!" << endl;
////            }
////        }else if(mode_select==5){
////            cout<<"there are all data:"<<endl;
////            for(int i=0;i<allData.size();i++){
////                cout<<allData[i].bookNo<<" "<<allData[i].units_sold<<"  "<<allData[i].revenue<<endl;
////            }
////        }
//        else{
//            cout<<"enter another number!"<<endl;
//        }
//
//    }
//    cout << "Program exited." << endl;
//
//
//    return 0;
//}
}