//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/NTNetworkEventTracker-Protocol.h>

@class NSString, PETScalarEventTracker;

@interface NTNetworkEventTracker : NSObject <NTNetworkEventTracker>
{
    PETScalarEventTracker *_OrderFeedNetworkEventTracker;
    PETScalarEventTracker *_MultiFeedNetworkEventTracker;
    PETScalarEventTracker *_MultiFetchNetworkEventTracker;
}

@property(retain, nonatomic) PETScalarEventTracker *MultiFetchNetworkEventTracker; // @synthesize MultiFetchNetworkEventTracker=_MultiFetchNetworkEventTracker;
@property(retain, nonatomic) PETScalarEventTracker *MultiFeedNetworkEventTracker; // @synthesize MultiFeedNetworkEventTracker=_MultiFeedNetworkEventTracker;
@property(retain, nonatomic) PETScalarEventTracker *OrderFeedNetworkEventTracker; // @synthesize OrderFeedNetworkEventTracker=_OrderFeedNetworkEventTracker;
- (void).cxx_destruct;
- (void)trackNetworkEvents:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

