//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSMutableSet, NSSet;

@interface HFSetDiff : NSObject <NSCopying, NSMutableCopying>
{
    NSSet *_fromSet;
    NSMutableSet *_toSet;
    NSMutableSet *_additions;
    NSMutableSet *_deletions;
    NSMutableSet *_updates;
}

+ (id)diffFromSet:(id)arg1 toSet:(id)arg2;
@property(readonly, nonatomic) NSSet *toSet; // @synthesize toSet=_toSet;
@property(readonly, nonatomic) NSSet *fromSet; // @synthesize fromSet=_fromSet;
@property(readonly, nonatomic) NSSet *updates; // @synthesize updates=_updates;
@property(readonly, nonatomic) NSSet *deletions; // @synthesize deletions=_deletions;
@property(readonly, nonatomic) NSSet *additions; // @synthesize additions=_additions;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_initWithFromSet:(id)arg1 toSet:(id)arg2 additions:(id)arg3 deletions:(id)arg4 updates:(id)arg5;

@end

