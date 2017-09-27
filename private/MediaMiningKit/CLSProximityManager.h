//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SFAirDropBrowserDelegate.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString, NSUUID, SFAirDropBrowser;

@interface CLSProximityManager : NSObject <SFAirDropBrowserDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _minimumDelayReached;
    _Bool _isBrowsing;
    NSMutableArray *_pendingBlocks;
    SFAirDropBrowser *_browser;
    NSUUID *_shutdownUUID;
}

+ (id)defaultManager;
- (void).cxx_destruct;
- (void)browserDidChangePeople:(id)arg1;
- (void)browser:(id)arg1 didDeletePersonAtIndex:(unsigned long long)arg2;
- (void)browser:(id)arg1 didInsertPersonAtIndex:(unsigned long long)arg2;
- (void)browserWillChangePeople:(id)arg1;
- (id)_peopleNames;
- (void)_dispatchProximityPendingBlocks;
- (id)currentPeople;
- (void)proximityResults:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

