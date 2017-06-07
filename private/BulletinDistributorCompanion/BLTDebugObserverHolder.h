//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinDistributorCompanion/BBObserverDelegate-Protocol.h>

@class BBObserver, NSString;
@protocol BLTDebugObserverWatchKitAppList;

@interface BLTDebugObserverHolder : NSObject <BBObserverDelegate>
{
    BBObserver *_observer;
    id <BLTDebugObserverWatchKitAppList> _wkAppList;
}

+ (void)startWithWKAppList:(id)arg1;
- (void).cxx_destruct;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 playLightsAndSirens:(_Bool)arg4 withReply:(CDUnknownBlockType)arg5;
- (void)dealloc;
- (id)initWithWKAppList:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

