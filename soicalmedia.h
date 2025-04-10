#ifndef SOICALMEDIA_H
#define SOICALMEDIA_H
#include <iostream>
using namespace std;
//2a
const int maxFollowers= 1000;
const int maxFollwed= 1000;
template<class A>
//2b
class SocialMediaAccount {
    public:
    SocialMediaAccount();
    SocialMediaAccount(A Handler, bool isPrivate = true ) {
        handler = Handler;
        privateAccount = isPrivate;

    }
    //getters and setters
    void setHandler(A handler);
    void setFollowers(A followers);
    void setFollowed(A followed);
    void setFollowersCount(int followersCount);
    void setFollowedCount(int followedCount);
    A getHandler() {
        return handler;
    }

    int getFollowersCount() {
        return followersCount;
    }
    int getFollowedCount() {
        return followedCount;
    }
    //adding followers
    void addFollower(A user) {
        if (followersCount < maxFollowers) {
            followers[followersCount++] = user;
        }

    }
    // add following
    void addFollowed(A user) {
        if (followedCount < maxFollowers) {
            followed[followedCount++] = user;
        }
    }
    // display followers
    void displayFollowers() {
        if (!privateAccount){
            for (int i = 0; i < followersCount; i++) {
                cout << followers[i] << " ";
            }
        }

    }
    // display following
    void displayFollowed() {
        if (!privateAccount){
            for (int i = 0; i < followedCount; i++) {
                cout << followed[i] << " ";
            }
        }
    }

private:
   A handler;
    A followers[maxFollowers];
    A followed[maxFollwed];
    int followersCount;
    int followedCount;
    bool privateAccount;

};

#endif //SOICALMEDIA_H
