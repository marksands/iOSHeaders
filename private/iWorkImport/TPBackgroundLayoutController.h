//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TPBGLayoutState, TPDocumentRoot, TSUDelayTimer;
@protocol OS_dispatch_queue, TPBackgroundLayoutControllerDelegate;

__attribute__((visibility("hidden")))
@interface TPBackgroundLayoutController : NSObject
{
    _Bool _isTornDown;
    NSObject<OS_dispatch_queue> *_queue;
    double _fullDelay;
    double _shortDelay;
    double _batchProcessingTime;
    TSUDelayTimer *_interruptTimer;
    TPBGLayoutState *_protectedState;
    TPDocumentRoot *_documentRoot;
    id <TPBackgroundLayoutControllerDelegate> _delegate;
}

@property __weak id <TPBackgroundLayoutControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak TPDocumentRoot *documentRoot; // @synthesize documentRoot=_documentRoot;
- (void).cxx_destruct;
- (void)p_performBackgroundLayout;
- (void)p_scheduleTimerAfterDelay:(double)arg1;
- (void)interruptAndScheduleAfterDelay;
- (void)scheduleNow;
- (void)resume;
- (void)suspend;
@property(readonly, nonatomic) _Bool isBackgroundLayoutPending;
@property(readonly, nonatomic, getter=isBackgroundLayoutSuspended) _Bool backgroundLayoutSuspended;
- (void)teardown;
- (id)initWithDocumentRoot:(id)arg1 delegate:(id)arg2;

@end

