//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FLExtensionHostContextInterface.h"

@class FLExtensionWrapper, FLFollowUpItem, NSString, UIViewController;

@interface FLFollowUpActionHandler : NSObject <FLExtensionHostContextInterface>
{
    FLFollowUpItem *_followUpItem;
    FLExtensionWrapper *_extensionLoader;
    UIViewController *_remoteViewController;
    CDUnknownBlockType _handlerCompletion;
    CDUnknownBlockType _extensionRequestedViewControllerPresentation;
}

+ (id)handlerWithItem:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType extensionRequestedViewControllerPresentation; // @synthesize extensionRequestedViewControllerPresentation=_extensionRequestedViewControllerPresentation;
- (void).cxx_destruct;
- (void)dealloc;
- (void)extensionDidFinishWithError:(id)arg1;
- (void)extensionDidFinish;
- (void)_processFollowUpAction:(id)arg1;
- (id)extensionLoader;
- (void)_loadUrlForAction:(id)arg1;
- (void)silentHandleAction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleAction:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

