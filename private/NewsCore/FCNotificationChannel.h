//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NTPBNotificationChannel;

@interface FCNotificationChannel : NSObject
{
    NTPBNotificationChannel *_pbNotificationChannel;
    NSString *_channelID;
}

@property(readonly, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithPBNotificationChannel:(id)arg1;
- (id)initWithChannelID:(id)arg1;

@end

