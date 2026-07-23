//#include<iostream>
// using namespace std;
// int main(){
//     char ch = 'A';
//     char ch2 = 'a';
//     cout<<(int)ch<<endl; //character in the form of integer
//     cout<<(int)ch2<<endl; 
//     return 0;
// }

// =================To find the position of any char====================
// #include<iostream>
// using namespace std;
// int main(){
//     char ch = 'f';
//     int position = ch-'a';
//     cout<<position<<endl; 
    
//     return 0;
// }

// =============initialisation of character array=======================
// #include<iostream>
// using namespace std;
// int main(){
//     // 1. 
//     char work1[] = "code";
//     // 2.
// char work2[5]="code"; //1 for null char
//     // 3.
//     char work3[]={'c','o','d','e','\0'};
//     // 4.  array size is greater than string size --> Garbage value will stored in empty spaces
//     char work4[50]={'c','o','d','e'};
//     cout<<work1<<endl;
//     cout<<work2<<endl;
//     cout<<work3<<endl;
//     cout<<work4<<endl;

//     return 0;
// }

// ===========Printing the string length===========================
// #include<iostream>
// #include<cstring>
// using namespace std;
// int main(){
//    char work[6]= {'h','e','l','l','o','\0'};
//    cout<<strlen(work)<<endl;
//     return 0;
// }

// //====behavior of cin in string input===========================//
// #include<iostream>
// #include<cstring>
// using namespace std;
// int main(){
//    char work[50];
//    cin>>work;   //ignored withespaces
//    cout<<strlen(work)<<endl;
//     return 0;
// }

// //==========getline function=====================================
// #include<iostream>
// #include<cstring>
// using namespace std;
// int main(){
//    char sentence[30];
//    cin.getline(sentence, 30, '.'); 
//    cout<<"your sentence is : "<<sentence<<endl;
//    cout<<"you can print any character also like  : "<<sentence[1]<<endl;
//    cout<<"length : "<<strlen(sentence)<<endl;
//     return 0;
// }

// //=====================Strings are begin==================
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str = "Hello";
//     cout<<str<<endl;
//     str = "yellow"; //not available in array
//     cout<<str<<endl;
//     return 0;
// }

// //===============getline==================
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str;
//     getline(cin,str,'*'); // no need to pass size
//     cout<<str[0]<<endl;
//     cout<<str[1]<<endl;
//     cout<<str[2]<<endl;
//     return 0;
// }

// ===========Loop on string=========
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str = "PRACHI SUSHIR";
//    for(int i =0; i<str.length(); i++){
//     cout<<str[i]<<" ";
//    }
//    cout<<"\n";
//     return 0;
// }

// // ============For each loop on string=================
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str = "PRACHI SUSHIR";
//    for(char ch:str){
//     cout<<ch<<" ";
//    }
//    cout<<"\n";
//     return 0;
// }

// ============Member functions of string=================
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str = "PRACHI SUSHIR";
//     // 1. lenth
//     cout<<str.length()<<endl;
//     // 2. at
//     cout<<str.at(2)<<endl;
//     // 3. substr
//     cout<<str.substr(1,5)<<endl;
//     // 4. find
//     cout<<str.find("USHIR")<<endl;

//     return 0;
// }



