//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVURLAsset;

@interface _MPCURLAssetDownloadCompletionObserver : NSObject
{
    AVURLAsset *_asset;
    CDUnknownBlockType _completionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) __weak AVURLAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)_notifyCompletionHandlerWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)_downloadCompleteFailedNotification:(id)arg1;
- (void)_downloadCompleteSuccessNotification:(id)arg1;
- (void)dealloc;
- (id)initWithAsset:(id)arg1;

@end

