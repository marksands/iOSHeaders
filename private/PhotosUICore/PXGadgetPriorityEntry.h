//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface PXGadgetPriorityEntry : NSObject
{
    id <PXForYouRankable> _rankable;
    NSDate *_cachedPriorityDate;
    long long _currentRank;
}

@property(nonatomic) long long currentRank; // @synthesize currentRank=_currentRank;
@property(retain, nonatomic) NSDate *cachedPriorityDate; // @synthesize cachedPriorityDate=_cachedPriorityDate;
@property(retain, nonatomic) id <PXForYouRankable> rankable; // @synthesize rankable=_rankable;
- (void).cxx_destruct;

@end

