#ifndef INSTAGRAM_H
#define INSTAGRAM_H
#include "soicalmedia.h"
template<class A>
    class Instagram: public  SocialMediaAccount<A>{
public:

    Instagram(A Handler, bool isPrivate = true ):
    SocialMediaAccount<A>(Handler, isPrivate),likeCount(0){}
    int getLikeCount() {
        return likeCount;
    }
    void setLikeCount(int lc) {
        likeCount = lc;
    }
void Like() {
        likeCount++;
    }

private:
    int likeCount;
};

#endif //INSTAGRAM_H
