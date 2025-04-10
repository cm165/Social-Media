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
        cout <<"_____________________________________________________________________" << endl;
       p1.addFollower("jasondabest");

        cout<< "Following: "<< endl;
        p1.addFollowed("jmoney_cold");
        p1.addFollowed("jimmyjohns");
        p1.addFollowed("worldstar");
        cout <<"_____________________________________________________________________" << endl;
        p1.displayFollowed();
cout <<endl<<"_____________________________________________________________________" << endl;
        //twitter
        Twitter<string> t1("Cassidy", false);
        t1.addFollower("selena.see");
        t1.addFollowed("superman.isreal");
        t1.RT();
        t1.getRetweetCount();
        t1.displayFollowers();
        t1.displayFollowed();
        //insta
        Instagram<string> I1("moonloight", false);
        I1.addFollower("make.moneyfast");
        I1.addFollowed("someoneover_rainbow");
        I1.Like();

        I1.displayFollowed();
        return 0;
    }

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.