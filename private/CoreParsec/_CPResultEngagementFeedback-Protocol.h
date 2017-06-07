//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, _CPSearchResultForFeedback;

@protocol _CPResultEngagementFeedback <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) _Bool hasResultHadTitle;
@property(nonatomic) _Bool resultHadTitle;
@property(readonly, nonatomic) _Bool hasTitleTextForResultEngagement;
@property(copy, nonatomic) NSString *titleTextForResultEngagement;
@property(readonly, nonatomic) _Bool hasResult;
@property(retain, nonatomic) _CPSearchResultForFeedback *result;
@property(readonly, nonatomic) _Bool hasActionTarget;
@property(nonatomic) int actionTarget;
@property(readonly, nonatomic) _Bool hasDestination;
@property(nonatomic) int destination;
@property(readonly, nonatomic) _Bool hasTriggerEvent;
@property(nonatomic) int triggerEvent;
@property(readonly, nonatomic) _Bool hasActionEngaged;
@property(nonatomic) _Bool actionEngaged;
@property(readonly, nonatomic) _Bool hasTimestamp;
@property(nonatomic) unsigned long long timestamp;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

