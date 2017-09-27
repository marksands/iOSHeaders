//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BKSAnimationFenceHandle, MSMessage, MSRichLink, NSURL, UIImage, _MSMessageMediaPayload;

@protocol _MSMessageComposeHostProtocol <NSObject>
- (void)_requestResize;
- (void)_openURL:(NSURL *)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)_remoteViewDidBecomeReadyForDisplay;
- (void)_updateSnapshotForNextLaunch:(UIImage *)arg1;
- (void)_dismiss;
- (void)_requestPresentationStyleExpanded:(_Bool)arg1;
- (void)_startDragMediaItem:(_MSMessageMediaPayload *)arg1 frameInRemoteView:(struct CGRect)arg2 fence:(BKSAnimationFenceHandle *)arg3 completionHandler:(void (^)(_Bool, NSError *))arg4;
- (void)_stageRichLink:(MSRichLink *)arg1 skipShelf:(_Bool)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)_stageMediaItem:(_MSMessageMediaPayload *)arg1 skipShelf:(_Bool)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)_stageAppItem:(MSMessage *)arg1 skipShelf:(_Bool)arg2 completionHandler:(void (^)(NSError *))arg3;
@end

