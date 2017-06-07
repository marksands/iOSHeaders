//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveML/PMLTrackerAdapterProtocol-Protocol.h>

@class NSMutableArray, NSString;

@interface PMLTrackerMockAdapter : NSObject <PMLTrackerAdapterProtocol>
{
    NSMutableArray *_trackedMessages;
}

- (void).cxx_destruct;
- (id)trackedMessagesByClass:(Class)arg1;
- (void)clearAllTrackedMessages;
- (void)postMetricId:(unsigned int)arg1 message:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

