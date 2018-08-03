//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CATOperation.h"

#import "SFAirDropClassroomTransferDelegate.h"

@class CRKAirDropTransferInfo, NSData, NSSet, NSString, SFAirDropClassroomTransferManager;

@interface CRKShowOpenDialogOperation : CATOperation <SFAirDropClassroomTransferDelegate>
{
    NSSet *mURLs;
    _Bool mKeepOriginalFiles;
    NSData *mPreviewImageData;
    NSString *mSenderName;
    _Bool mAutoAccept;
    NSString *mSourceBundleIdentifier;
    NSString *mFilesDescription;
    NSSet *mAirDropItems;
    SFAirDropClassroomTransferManager *mTransferManager;
    NSString *mTransferIdentifier;
    CRKAirDropTransferInfo *mTransferInfo;
    _Bool mTransferAccepted;
    _Bool mTransferFinished;
}

+ (id)fakeBundleID;
- (void).cxx_destruct;
- (void)failWithError:(id)arg1;
- (void)succeedIfNeeded;
- (void)transferWithIdentifierWasDeclined:(id)arg1 withFailureReason:(unsigned long long)arg2;
- (void)transferWithIdentifierWasAccepted:(id)arg1;
- (void)transferDidFinishWithSuccess:(_Bool)arg1 destinationPath:(id)arg2 error:(id)arg3;
- (void)transferDidProgressWithSuccess:(_Bool)arg1 destinationPath:(id)arg2 error:(id)arg3;
- (void)transferDidStartWithSuccess:(_Bool)arg1 destinationPath:(id)arg2 error:(id)arg3;
- (void)startTransfer;
- (void)main;
- (void)cancel;
- (_Bool)isAsynchronous;
- (id)initWithFileURLs:(id)arg1 keepOriginalFiles:(_Bool)arg2 previewImageData:(id)arg3 senderName:(id)arg4 autoAccept:(_Bool)arg5 sourceBundleIdentifier:(id)arg6 filesDescription:(id)arg7;
- (id)initWithFileURLs:(id)arg1 keepOriginalFiles:(_Bool)arg2 previewImageData:(id)arg3 senderName:(id)arg4 autoAccept:(_Bool)arg5 sourceBundleIdentifier:(id)arg6;
- (id)initWithFileURLs:(id)arg1 keepOriginalFiles:(_Bool)arg2 previewImageData:(id)arg3 senderName:(id)arg4 autoAccept:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

