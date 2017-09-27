//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ICProgressIndicatorTrackerDelegate.h"

@class ICAttachmentPreviewGeneratorOperationQueue, ICProgressIndicatorTracker, NSMapTable, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface ICAttachmentPreviewGenerator : NSObject <ICProgressIndicatorTrackerDelegate>
{
    // Error parsing type: AB, name: _shouldGenerateAttachmentsWhenReachable
    ICAttachmentPreviewGeneratorOperationQueue *_asyncGeneratorQueue;
    ICAttachmentPreviewGeneratorOperationQueue *_costlyGeneratorQueue;
    ICAttachmentPreviewGeneratorOperationQueue *_generatorQueue;
    NSMapTable *_lastOperationForAttachmentID;
    NSMutableSet *_attachmentIDsPending;
    NSMutableDictionary *_attachmentIDsProgress;
    ICProgressIndicatorTracker *_progressTracker;
    unsigned long long _previewGenerationState;
    NSObject<OS_dispatch_queue> *_previewQueue;
    NSObject<OS_dispatch_queue> *_previewProgressQueue;
}

+ (id)sharedGenerator;
// Error parsing type for property shouldGenerateAttachmentsWhenReachable:
// Property attributes: TAB,N,V_shouldGenerateAttachmentsWhenReachable

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *previewProgressQueue; // @synthesize previewProgressQueue=_previewProgressQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *previewQueue; // @synthesize previewQueue=_previewQueue;
@property unsigned long long previewGenerationState; // @synthesize previewGenerationState=_previewGenerationState;
@property(retain, nonatomic) ICProgressIndicatorTracker *progressTracker; // @synthesize progressTracker=_progressTracker;
@property(retain, nonatomic) NSMutableDictionary *attachmentIDsProgress; // @synthesize attachmentIDsProgress=_attachmentIDsProgress;
@property(retain, nonatomic) NSMutableSet *attachmentIDsPending; // @synthesize attachmentIDsPending=_attachmentIDsPending;
@property(retain, nonatomic) NSMapTable *lastOperationForAttachmentID; // @synthesize lastOperationForAttachmentID=_lastOperationForAttachmentID;
@property(retain, nonatomic) ICAttachmentPreviewGeneratorOperationQueue *generatorQueue; // @synthesize generatorQueue=_generatorQueue;
@property(retain, nonatomic) ICAttachmentPreviewGeneratorOperationQueue *costlyGeneratorQueue; // @synthesize costlyGeneratorQueue=_costlyGeneratorQueue;
@property(retain, nonatomic) ICAttachmentPreviewGeneratorOperationQueue *asyncGeneratorQueue; // @synthesize asyncGeneratorQueue=_asyncGeneratorQueue;
- (void).cxx_destruct;
- (void)cancelIfNeededForAttachment:(id)arg1;
- (void)generatePendingPreviewForAttachment:(id)arg1;
- (void)generatePendingPreviews;
- (id)progressForObjectID:(id)arg1;
- (void)setProgress:(id)arg1 forObjectID:(id)arg2;
- (void)operationComplete:(id)arg1;
- (void)resume;
- (void)suspend;
- (void)disableAutomaticPreviewGeneration;
- (void)enableAutomaticPreviewGeneration;
- (void)cancelGenerationOfPendingPreviews;
- (void)reachabilityChanged:(id)arg1;
- (void)managedObjectContextDidSave:(id)arg1;
- (void)mediaDidLoad:(id)arg1;
- (void)attachmentWillBeDeleted:(id)arg1;
- (void)attachmentNeedsPreviewGenerationNotification:(id)arg1;
- (void)attachmentDidLoad:(id)arg1;
- (void)generatePreviewIfNeededForAttachmentWithObjectID:(id)arg1;
- (void)generatePreviewIfNeededForAttachment:(id)arg1;
- (void)generatePreviewsIfNeeded;
- (_Bool)isPreviewGenerationSupported;
- (void)progressIndicatorTrackerStopAnimation;
- (void)progressIndicatorTrackerStartAnimation;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

