//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface PBOutlineBulletKey : NSObject <NSCopying>
{
    unsigned int mSlideId;
    int mTextType;
    unsigned int mPlaceholderIndex;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSlideId:(unsigned int)arg1 textType:(int)arg2 placeholderIndex:(unsigned int)arg3;
- (id)initWithOutlineBullet:(id)arg1;

@end

