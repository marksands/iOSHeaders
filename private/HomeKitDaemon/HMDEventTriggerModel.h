//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDTriggerModel.h>

@class NSData, NSNumber;

@interface HMDEventTriggerModel : HMDTriggerModel
{
}

+ (id)properties;
- (id)createPayload;

// Remaining properties
@property(retain, nonatomic) NSData *evaluationCondition; // @dynamic evaluationCondition;
@property(retain, nonatomic) NSNumber *executeOnce; // @dynamic executeOnce;
@property(retain, nonatomic) NSData *recurrences; // @dynamic recurrences;

@end

