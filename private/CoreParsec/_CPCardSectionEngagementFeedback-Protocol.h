//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString, _CPCardSectionForFeedback, _CPPunchoutForFeedback;

@protocol _CPCardSectionEngagementFeedback <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) _Bool hasResultId;
@property(copy, nonatomic) NSString *resultId;
@property(readonly, nonatomic) _Bool hasCardSectionId;
@property(copy, nonatomic) NSString *cardSectionId;
@property(readonly, nonatomic) _Bool hasParPunchoutActionTarget;
@property(copy, nonatomic) NSString *parPunchoutActionTarget;
@property(readonly, nonatomic) _Bool hasDestinationWasPARPunchout;
@property(nonatomic) _Bool destinationWasPARPunchout;
@property(readonly, nonatomic) _Bool hasCardSection;
@property(retain, nonatomic) _CPCardSectionForFeedback *cardSection;
@property(readonly, nonatomic) _Bool hasActionCardType;
@property(nonatomic) int actionCardType;
@property(readonly, nonatomic) _Bool hasTriggerEvent;
@property(nonatomic) int triggerEvent;
@property(readonly, nonatomic) _Bool hasDestination;
@property(retain, nonatomic) _CPPunchoutForFeedback *destination;
@property(readonly, nonatomic) _Bool hasTimestamp;
@property(nonatomic) unsigned long long timestamp;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

