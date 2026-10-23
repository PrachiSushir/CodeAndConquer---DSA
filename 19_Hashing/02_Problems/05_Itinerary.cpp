#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;
void printItinerary(unordered_map<string, string>tickets){
    // find starting point
    unordered_set<string> to;

    for(pair<string, string>ticket : tickets){
        to.insert(ticket.second);
    }

    string start = "";

    for(pair<string, string>ticket : tickets){
        if(to.find(ticket.first) == to.end()){  //starting point
      start = ticket.first;
        }
    }
    // print plan
    cout<<start<<"->";
    while(tickets.count(start)){  //loop until we found the start val
      cout<<tickets[start] <<"->";   //printing the val of start

      start = tickets[start];
    }
    cout<<"Destination\n";
}
int main(){
    unordered_map<string, string>tickets;
    tickets["Chennai"] = "Bengaluru";
    tickets["Mumbai"]  = "Delhi";
    tickets["Goa"] = "Chennai";
    tickets["Delhi"] = "Goa";

    printItinerary(tickets);
    return 0;
}