////Binary search code
//
//#include<iostream>
//
//int main() {
//    int a[5] = {1, 8, 18, 21, 30};
//    int first = 0, last = 4, mid, num;
//
//    std::cout << "Enter the value to search: ";
//    std::cin >> num;
//
//    while (first <= last) {
//        mid = (first + last) / 2;
//
//        if (a[mid] == num) {
//            std::cout << "Found at location " << mid + 1 << std::endl;
//            break;
//        } else if (a[mid] < num) {
//            first = mid + 1;
//        } else {
//            last = mid - 1;
//        }
//    }
//
//    if (first > last) {
//        std::cout << "Element not found" << std::endl;
//    }
//
//    return 0;
//}
#include<iostream>
int main()
{
	int a[5]={1,2,3,4,5};
	int first=0,last=4,mid,num;
	std::cout<<"Enter the value to search:-";
	std::cin>>num;
	while(first<=last)
	{
		mid=(first+last)/2;
		if(a[mid]==num)
		{
			std::cout<<"Found at location :-"<<mid+1<<std::endl;
			break;
		}else if(a[mid]<num)
		{
			first=mid+1;
		}else{
			last=mid-1;
		}
	}
	if (first>last)
	{
		std::cout<<"Element not found "<<std::endl;
	}return 0;
}
