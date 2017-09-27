//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SXVideoPlaybackObserver.h"

@class NSMutableArray, NSString;

@interface SXVideoPlaybackQueue : NSObject <SXVideoPlaybackObserver>
{
    NSMutableArray *_queue;
}

@property(readonly, nonatomic) NSMutableArray *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)prefetchItemAfterCoordinatorIfPossible:(id)arg1;
- (void)playbackCoordinator:(id)arg1 playbackFailedWithError:(id)arg2;
- (void)playbackCoordinator:(id)arg1 timeElapsed:(double)arg2 duration:(double)arg3;
- (void)playbackCoordinator:(id)arg1 loadingProgressed:(double)arg2;
@property(readonly, nonatomic) unsigned long long count;
- (id)advance;
- (void)insertItem:(id)arg1 afterItem:(id)arg2;
- (void)prependItem:(id)arg1;
- (void)appendItem:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

