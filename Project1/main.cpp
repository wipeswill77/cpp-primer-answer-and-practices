#include "headers.h"
#include "Sales_data.h"

/*
 * 界面系统，存储（json），查询
 */

//int main()
//{
//	Sales_data total;
//	vector<Sales_data> allData;
//	cout << "0 : exit." << endl;
//	cout << "1 : add new book." << endl;
//	cout << "2 : delete data." << endl;
//	cout << "3 : check book data." << endl;
//	cout << "4 : combine book data." << endl;
//
//	while (1) {
//		cout << "Please select an action you want:" << endl;
//		int mode_select = 0;
//		cin >> mode_select;
//		if (mode_select == 0) {
//			break;
//		}
//		else if (mode_select == 1) {
//			cout << "Please enter bookNo:" << endl;
//			cin >> total.bookNo;
//			cout << "Please enter units_sold:" << endl;
//			cin >> total.units_sold;
//			cout << "Please enter revenue:" << endl;
//			cin >> total.revenue;
//			
//			allData.push_back(total);
//		}
//		else if (mode_select == 2) {
//			cout << "Please enter the bookNo you want to delete:" << endl;
//			string ndelete;
//			cin >> ndelete;
//			int i = 0;
//			while ( i < allData.size()) {
//				if (allData[i].bookNo == ndelete) {
//					allData.erase(allData.begin() + i - 1);
//					break;
//				}
//				i++;
//			}
//			if (i == allData.size()) {
//				cout << "the bookNo you entered has not been found. Please enter another bookNo." << endl;
//			}
//			else if (allData[i].bookNo != ndelete) {//检测是否删除成功
//				cout << "Delete successfully!" << endl;
//			}
//			else {
//				cout << "Delete failed!" << endl;
//			}
//		}
//		else if (mode_select == 3) {
//			cout << "Please enter the bookNo you want to check:" << endl;
//			string ncheck;
//			for (int i = 0; i < allData.size(); i++) {
//				
//			}
//
//		}
//		else if (mode_select == 4) {
//			if (cin >> total.bookNo >> total.units_sold >> total.revenue)
//			{
//				Sales_data trans;
//				while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue) {
//					if (total.isbn() == trans.isbn())
//						total.combine(trans);
//					else {
//						cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
//						total = trans;
//					}
//				}
//				cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
//			}
//			else
//			{
//				std::cerr << "No data?!" << std::endl;
//				return -1;
//			}
//		}
//
//	}
//	cout << "Program exited." << endl;
//
//
//	return 0;
//}
istream& f1(istream& s) {
    string string1;
    while (s >> string1)
        cout << string1 << endl;
    s.clear();
    return s;
}

int main() {
    f1(cin);
    return 0;
}