//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FCFeedTransforming.h"

@class NSMapTable, NSString;

@interface FCFeedTransformationPersonalizedSort : NSObject <FCFeedTransforming>
{
    id <FCFeedPersonalizing> _feedPersonalizer;
    NSMapTable *_feedItemScores;
    long long _sortOptions;
}

+ (id)transformationWithPersonalizer:(id)arg1;
+ (id)transformationWithPersonalizer:(id)arg1 sortOptions:(long long)arg2;
+ (id)transformationWithPersonalizer:(id)arg1 feedItemScores:(id)arg2;
+ (id)transformationWithPersonalizer:(id)arg1 feedItemScores:(id)arg2 sortOptions:(long long)arg3;
@property(nonatomic) long long sortOptions; // @synthesize sortOptions=_sortOptions;
@property(retain, nonatomic) NSMapTable *feedItemScores; // @synthesize feedItemScores=_feedItemScores;
@property(retain, nonatomic) id <FCFeedPersonalizing> feedPersonalizer; // @synthesize feedPersonalizer=_feedPersonalizer;
- (void).cxx_destruct;
- (id)transformHeadlines:(id)arg1;
- (id)transformFeedItems:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

