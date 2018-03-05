//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_UIRemoteViewController.h"

#import "QLPreviewCollectionProtocol.h"

@class QLPreviewCollectionHostContext;

__attribute__((visibility("hidden")))
@interface QLRemotePreviewCollection : _UIRemoteViewController <QLPreviewCollectionProtocol>
{
    id <QLPreviewControllerStateProtocolHostOnly> _stateManager;
    _Bool _isAvailable;
    _Bool _allowInteractiveTransitions;
    id _request;
    QLRemotePreviewCollection *_accessoryViewController;
    QLPreviewCollectionHostContext *_hostContext;
}

@property(nonatomic) _Bool allowInteractiveTransitions; // @synthesize allowInteractiveTransitions=_allowInteractiveTransitions;
@property _Bool isAvailable; // @synthesize isAvailable=_isAvailable;
@property(retain) QLPreviewCollectionHostContext *hostContext; // @synthesize hostContext=_hostContext;
@property(retain) QLRemotePreviewCollection *accessoryViewController; // @synthesize accessoryViewController=_accessoryViewController;
@property(retain) id request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)setSourceIsManaged:(_Bool)arg1;
- (void)hostViewControlerTransitionToState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)setLoadingString:(id)arg1;
- (void)notifyFirstTimeAppearanceWithActions:(unsigned long long)arg1;
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;
- (void)tearDownTransition:(_Bool)arg1;
- (void)startTransitionWithSourceViewProvider:(id)arg1 transitionController:(id)arg2 presenting:(_Bool)arg3 useInteractiveTransition:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)keyCommandWasPerformed:(id)arg1;
- (void)keyCommandsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)prepareForActionSheetPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)toolbarButtonPressedWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)toolbarButtonsForTraitCollection:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)hostApplicationDidBecomeActive;
- (void)hostApplicationDidEnterBackground:(_Bool)arg1;
- (void)setCurrentPreviewItemIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)configureWithNumberOfItems:(long long)arg1 currentPreviewItemIndex:(unsigned long long)arg2 itemProvider:(id)arg3 stateManager:(id)arg4;
- (void)invalidatePreviewCollection;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)_presentViewControllerForError:(id)arg1;
- (void)getPreviewCollectionUUIDWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)configureAsAccessoryViewContainerForPreviewCollection:(id)arg1;
- (id)accessoryView;
- (_Bool)isRemote;

@end

