//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSString, UIKBGeometry;

@interface UIKBMergeAction : NSObject <NSCopying>
{
    NSString *_remainingKeyName;
    NSString *_disappearingKeyName;
    NSArray *_orderedKeyList;
    UIKBGeometry *_factors;
}

+ (id)mergeActionWithOrderedKeyList:(id)arg1 factors:(id)arg2;
+ (id)mergeActionWithRemainingKeyName:(id)arg1 disappearingKeyName:(id)arg2 factors:(id)arg3;
@property(retain, nonatomic) UIKBGeometry *factors; // @synthesize factors=_factors;
@property(retain, nonatomic) NSArray *orderedKeyList; // @synthesize orderedKeyList=_orderedKeyList;
@property(retain, nonatomic) NSString *disappearingKeyName; // @synthesize disappearingKeyName=_disappearingKeyName;
@property(retain, nonatomic) NSString *remainingKeyName; // @synthesize remainingKeyName=_remainingKeyName;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

