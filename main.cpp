#include "soicalmedia.h"
#include "Twitter.h"
#include "Instagram.h"
#include <iostream>
using namespace std;
//5
struct Profile {
    int userID;
    string username;

    friend ostream& operator<<(ostream& os, const Profile& p) {
        os << p.username << " (ID: " << p.userID << ")";
        return os;
    }

};

//6
    int main() {
        SocialMediaAccount<string> p1("Jonny",  false);
        cout<< "Followers: "<<endl;
        p1.addFollower("jasondabest");
        p1.displayFollowers();
        cout<< endl;
        cout <<"_____________________________________________________________________" << endl;

        cout<< "Following: "<< endl;
        p1.addFollowed("jmoney_cold");
        p1.addFollowed("jimmyjohns");
        p1.addFollowed("worldstar");

        p1.displayFollowed();
cout <<endl<<"_____________________________________________________________________" << endl;
        //twitter
        cout << "Twitter: ";
        cout << endl;
        Twitter<string> t1("Cassidy", false);
        t1.addFollower("selena.see");
        t1.addFollowed("superman.isreal");
        t1.RT();
        t1.getRetweetCount();
        cout<< "Followers: "<<endl;
        t1.displayFollowers();
        cout<< endl;
        cout <<"_____________________________________________________________________" << endl;
        cout<< "Following: "<< endl;
        t1.displayFollowed();
        cout<< endl;
        cout <<"_____________________________________________________________________" << endl;
        //insta
        cout<< "Instagram: "<< endl<< endl;
        Instagram<string> I1("moonloight", false);
        I1.addFollower("make.moneyfast");
        I1.addFollowed("someoneover_rainbow");
        I1.Like();
        cout<< "Followers: "<< endl;
        I1.displayFollowers();
        cout<< endl;
        cout <<"_____________________________________________________________________" << endl;
        cout<< "Following: "<< endl;
        I1.displayFollowed();
        cout<< endl;
        cout <<"_____________________________________________________________________" << endl;
        return 0;
    }
