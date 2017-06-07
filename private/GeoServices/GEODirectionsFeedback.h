//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSData, NSMutableArray;

@interface GEODirectionsFeedback : PBCodable <NSCopying>
{
    NSMutableArray *_alightNotificationFeedbacks;
    NSData *_directionResponseID;
    NSMutableArray *_stepFeedbacks;
    NSMutableArray *_trafficRerouteFeedbacks;
}

+ (Class)alightNotificationFeedbackType;
+ (Class)trafficRerouteFeedbackType;
+ (Class)stepFeedbackType;
@property(retain, nonatomic) NSMutableArray *alightNotificationFeedbacks; // @synthesize alightNotificationFeedbacks=_alightNotificationFeedbacks;
@property(retain, nonatomic) NSMutableArray *trafficRerouteFeedbacks; // @synthesize trafficRerouteFeedbacks=_trafficRerouteFeedbacks;
@property(retain, nonatomic) NSMutableArray *stepFeedbacks; // @synthesize stepFeedbacks=_stepFeedbacks;
@property(retain, nonatomic) NSData *directionResponseID; // @synthesize directionResponseID=_directionResponseID;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)alightNotificationFeedbackAtIndex:(unsigned long long)arg1;
- (unsigned long long)alightNotificationFeedbacksCount;
- (void)addAlightNotificationFeedback:(id)arg1;
- (void)clearAlightNotificationFeedbacks;
- (id)trafficRerouteFeedbackAtIndex:(unsigned long long)arg1;
- (unsigned long long)trafficRerouteFeedbacksCount;
- (void)addTrafficRerouteFeedback:(id)arg1;
- (void)clearTrafficRerouteFeedbacks;
- (id)stepFeedbackAtIndex:(unsigned long long)arg1;
- (unsigned long long)stepFeedbacksCount;
- (void)addStepFeedback:(id)arg1;
- (void)clearStepFeedbacks;
@property(readonly, nonatomic) _Bool hasDirectionResponseID;

@end

