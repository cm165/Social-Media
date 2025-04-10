#ifndef TWITTER_H
#define TWITTER_H
#include "soicalmedia.h"
//3
template<class A>
class Twitter : public SocialMediaAccount<A> {
public:
    Twitter( A Handler, bool isPrivate = true):
    SocialMediaAccount<A>(Handler, isPrivate),retweetCount(0) {}
//3b
    void RT() {
        retweetCount++;
    }
    int getRetweetCount() {
        return retweetCount;
    }
    void setRetweetCount(int count) {
        retweetCount = count;
    }

private:
    int retweetCount;


};
#endif //TWITTER_H
