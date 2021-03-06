//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFilePresenter.h"

@class NSData, NSError, NSObject<OS_dispatch_queue>, NSOperationQueue, NSSet, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface TSUURLTrackerFilePresenter : NSObject <NSFilePresenter>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    _Bool _hasStarted;
    NSData *_bookmarkDataIfAvailable;
    _Bool _forceEncodingBookmarkData;
    NSError *_latestError;
    id <TSUURLTrackerDelegate> _delegate;
    NSOperationQueue *_presentedItemOperationQueue;
    NSURL *_URLIfAvailable;
}

@property(copy) NSURL *URLIfAvailable; // @synthesize URLIfAvailable=_URLIfAvailable;
@property(readonly, retain) NSOperationQueue *presentedItemOperationQueue; // @synthesize presentedItemOperationQueue=_presentedItemOperationQueue;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)_description;
- (void)presentedItemDidChangeUbiquityAttributes:(id)arg1;
- (void)presentedItemDidMoveToURL:(id)arg1;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)relinquishPresentedItemToWriter:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSURL *presentedItemURL;
- (id)_bookmarkDataAndReturnError:(id *)arg1;
- (id)bookmarkDataAndReturnError:(id *)arg1;
- (void)stop;
- (void)pause;
- (void)startOrResume;
@property(readonly) NSData *bookmarkDataIfAvailable;
- (id)_bookmarkData;
@property(readonly) NSData *bookmarkData;
- (id)_URLAndReturnError:(id *)arg1;
- (id)URLAndReturnError:(id *)arg1;
- (id)initWithURL:(id)arg1 bookmarkData:(id)arg2 delegate:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property(readonly, copy) NSURL *primaryPresentedItemURL;
@property(readonly) Class superclass;

@end

