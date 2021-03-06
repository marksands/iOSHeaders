//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<VUIMediaEntityIdentifier>, VUIMediaEntityAssetControllerState, VUIMediaEntityType;

@protocol VUIMediaEntityAssetController <NSObject>
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueue;
@property(readonly, copy, nonatomic) VUIMediaEntityAssetControllerState *state;
@property(readonly, nonatomic) _Bool supportsStartingDownload;
@property(nonatomic) __weak id <VUIMediaEntityAssetControllerDelegate> delegate;
@property(readonly, copy, nonatomic) VUIMediaEntityType *mediaEntityType;
@property(readonly, copy, nonatomic) NSObject<VUIMediaEntityIdentifier> *mediaEntityIdentifier;
- (void)removeDownloadWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)resumeDownload;
- (void)pauseDownload;
- (void)cancelDownload;
- (void)startDownloadWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)invalidate;
@end

