//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet;

@interface NNMKSyncSessionController : NSObject
{
    NSMutableSet *_messageIdsToIgnoreStatusUpdates;
    NSMutableDictionary *_notificationPayloadAcks;
}

@property(retain, nonatomic) NSMutableDictionary *notificationPayloadAcks; // @synthesize notificationPayloadAcks=_notificationPayloadAcks;
@property(retain, nonatomic) NSMutableSet *messageIdsToIgnoreStatusUpdates; // @synthesize messageIdsToIgnoreStatusUpdates=_messageIdsToIgnoreStatusUpdates;
- (void).cxx_destruct;
- (id)init;

@end

