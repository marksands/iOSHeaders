//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol CKDZoneGatekeeperWaiter;

__attribute__((visibility("hidden")))
@interface CKWaiterWrapper : NSObject
{
    id <CKDZoneGatekeeperWaiter> _waiter;
    NSArray *_zoneIDs;
    CDUnknownBlockType _completionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSArray *zoneIDs; // @synthesize zoneIDs=_zoneIDs;
@property(retain, nonatomic) id <CKDZoneGatekeeperWaiter> waiter; // @synthesize waiter=_waiter;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)description;

@end
