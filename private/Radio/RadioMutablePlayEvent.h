//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Radio/RadioPlayEvent.h>

@class NSData, NSDate, NSDictionary, NSString;

@interface RadioMutablePlayEvent : RadioPlayEvent
{
}

@property(nonatomic) long long type; // @dynamic type;
@property(copy, nonatomic) NSDictionary *trackInfo; // @dynamic trackInfo;
@property(copy, nonatomic) NSData *timedMetadata; // @dynamic timedMetadata;
@property(nonatomic) long long storeID; // @dynamic storeID;
@property(nonatomic) double startTimeInTrack; // @dynamic startTimeInTrack;
@property(copy, nonatomic) NSString *externalIdentifier; // @dynamic externalIdentifier;
@property(nonatomic) double endTimeInTrack; // @dynamic endTimeInTrack;
@property(nonatomic) long long endReason; // @dynamic endReason;
@property(retain, nonatomic) NSDate *datePlayed; // @dynamic datePlayed;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

