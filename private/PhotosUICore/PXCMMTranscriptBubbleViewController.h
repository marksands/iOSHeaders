//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXTranscriptBubbleViewController.h>

#import "PXChangeObserver.h"
#import "PXPhotoLibraryUIChangeObserver.h"
#import "PXTouchingUIGestureRecognizerDelegate.h"

@class NSError, NSString, NSURL, PHFetchResult, PHMomentShare, PHPhotoLibrary, PXCMMAssetsProgressListener, PXCMMPreviewAsset, PXCMMPreviewUIImageProvider, PXCMMSpecManager, PXCMMTranscriptBubbleStatusView, PXCMMTranscriptBubbleView;

@interface PXCMMTranscriptBubbleViewController : PXTranscriptBubbleViewController <PXPhotoLibraryUIChangeObserver, PXChangeObserver, PXTouchingUIGestureRecognizerDelegate>
{
    PHPhotoLibrary *_photoLibrary;
    PHFetchResult *_backingFetchResult;
    PHFetchResult *_keyAssetFetch;
    PXCMMAssetsProgressListener *_progressListener;
    long long _saveInProgressTotal;
    PXCMMTranscriptBubbleView *_bubbleView;
    PXCMMTranscriptBubbleStatusView *_errorStatusView;
    PXCMMTranscriptBubbleStatusView *_loadingStatusView;
    id <PXUIImageProvider> _mediaProvider;
    PXCMMSpecManager *_specManager;
    PXCMMPreviewAsset *_previewAsset;
    PXCMMPreviewUIImageProvider *_previewImageProvider;
    _Bool _readyForBubbleStateTransitions;
    _Bool _isSender;
    _Bool _isPending;
    _Bool _highlighted;
    NSURL *_url;
    id <PXCMMTranscriptBubbleTouchDelegate> _touchDelegate;
    long long _bubbleState;
    long long _targetState;
    NSError *_error;
}

+ (_Bool)_isPermanentFailureURL:(id)arg1;
+ (void)_registerPermanentFailureURL:(id)arg1;
@property(retain, nonatomic) PXCMMAssetsProgressListener *progressListener; // @synthesize progressListener=_progressListener;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) long long targetState; // @synthesize targetState=_targetState;
@property(nonatomic) long long bubbleState; // @synthesize bubbleState=_bubbleState;
@property(nonatomic) __weak id <PXCMMTranscriptBubbleTouchDelegate> touchDelegate; // @synthesize touchDelegate=_touchDelegate;
@property(readonly, nonatomic) _Bool isPending; // @synthesize isPending=_isPending;
@property(readonly, nonatomic) _Bool isSender; // @synthesize isSender=_isSender;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (void)touchingUIGestureRecognizerDidEndTouching:(id)arg1;
- (void)touchingUIGestureRecognizerDidBeginTouching:(id)arg1;
- (void)_readyForStateTransition;
- (void)_ensureBubbleStateTransition;
- (void)_updateBubbleState;
- (void)_updateProgressListener;
- (void)_updateContent;
- (void)_updateBubbleView;
- (_Bool)_shouldShowContent;
- (void)viewDidLoad;
- (void)_longPressGesture:(id)arg1;
- (void)_doubleTapGesture:(id)arg1;
- (void)_panGesture:(id)arg1;
- (void)_tapGesture:(id)arg1;
- (_Bool)_shouldNavigateToContent;
- (void)_acceptMomentShareIfNeeded:(id)arg1;
- (void)_autoAcceptMomentShareIfNeeded:(id)arg1;
- (void)_momentShareURL:(id)arg1 fetchDidFailWithError:(id)arg2;
- (void)_fetchMomentShareFromNetworkURL:(id)arg1;
- (id)_fetchKeyAssetsFromBackingCollection;
- (_Bool)_canFetchAssetsFromMomentShare:(id)arg1;
- (id)_debugStatusDescription;
- (id)_secondaryDescription;
- (id)_primaryDescription;
@property(readonly, nonatomic) PHMomentShare *momentShare;
- (struct CGSize)contentSizeThatFits:(struct CGSize)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;
- (id)initWithURL:(id)arg1 isSender:(_Bool)arg2 isPending:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

