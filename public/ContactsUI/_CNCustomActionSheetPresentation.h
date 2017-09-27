//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNCustomPresentation.h"
#import "UIActionSheetPresentationControllerDelegate.h"
#import "UIViewControllerTransitioningDelegate.h"

@class NSString, UIView, UIViewController;

__attribute__((visibility("hidden")))
@interface _CNCustomActionSheetPresentation : NSObject <UIActionSheetPresentationControllerDelegate, UIViewControllerTransitioningDelegate, CNCustomPresentation>
{
    UIView *_sourceView;
    CDUnknownBlockType _dismissHandler;
    UIViewController *_viewController;
    unsigned long long _permittedArrowDirections;
    struct CGRect _sourceRect;
}

@property(nonatomic) unsigned long long permittedArrowDirections; // @synthesize permittedArrowDirections=_permittedArrowDirections;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(copy, nonatomic) CDUnknownBlockType dismissHandler; // @synthesize dismissHandler=_dismissHandler;
@property(nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
- (void).cxx_destruct;
- (void)actionSheetPresentationControllerDidDismissActionSheet:(id)arg1;
- (id)presentedViewController;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)prepareForPresentationOfController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

