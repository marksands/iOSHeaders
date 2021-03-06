//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIStatusBarDisplayItemPlacementGroup : NSObject
{
    NSArray *_placements;
    long long _minimumPriority;
    long long _maximumPriority;
}

+ (id)groupWithPriority:(long long)arg1 placements:(id)arg2;
@property(readonly, nonatomic) long long maximumPriority; // @synthesize maximumPriority=_maximumPriority;
@property(readonly, nonatomic) long long minimumPriority; // @synthesize minimumPriority=_minimumPriority;
@property(copy, nonatomic) NSArray *placements; // @synthesize placements=_placements;
- (void).cxx_destruct;
@property(nonatomic) _Bool enabled;

@end

