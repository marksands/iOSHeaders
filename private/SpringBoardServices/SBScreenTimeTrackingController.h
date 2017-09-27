//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSDisplayLayoutObserver.h"

@class FBSDisplayLayout, FBSDisplayLayoutMonitor, FBSDisplayLayoutTransitionContext, NSObject<OS_dispatch_queue>, NSString;

@interface SBScreenTimeTrackingController : NSObject <FBSDisplayLayoutObserver>
{
    FBSDisplayLayoutMonitor *_layoutMonitor;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _queue_isScreenOn;
    _Bool _queue_isPhoneOrFaceTimeActive;
    unsigned long long _queue_thisCategoryStartTime;
    double _queue_lastCategoryChangeTime;
    int _queue_activeContext;
    int _queue_activeCategory;
    FBSDisplayLayout *_queue_lastLayout;
    FBSDisplayLayoutTransitionContext *_queue_lastLayoutTransitionContext;
}

- (void).cxx_destruct;
- (void)_queue_setActiveCategory:(int)arg1 context:(int)arg2;
- (void)_queue_setPhoneOrFaceTimeActive:(_Bool)arg1;
- (void)_queue_setScreenOn:(_Bool)arg1 withContext:(id)arg2;
- (void)_queue_handleNewLayout:(id)arg1 withContext:(id)arg2;
- (id)_nameForContext:(int)arg1;
- (void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

