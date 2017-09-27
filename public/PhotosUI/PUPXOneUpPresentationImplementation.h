//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PUOneUpPresentationHelperAssetDisplayDelegate.h"
#import "PUOneUpPresentationHelperDelegate.h"

@class NSString, PUOneUpPresentationHelper, PXOneUpPresentation;

__attribute__((visibility("hidden")))
@interface PUPXOneUpPresentationImplementation : NSObject <PUOneUpPresentationHelperDelegate, PUOneUpPresentationHelperAssetDisplayDelegate>
{
    PUOneUpPresentationHelper *__helper;
    PXOneUpPresentation *__oneUpPresentation;
}

+ (id)implementationForOneUpPresentation:(id)arg1;
@property(readonly, nonatomic) __weak PXOneUpPresentation *_oneUpPresentation; // @synthesize _oneUpPresentation=__oneUpPresentation;
@property(readonly, nonatomic) PUOneUpPresentationHelper *_helper; // @synthesize _helper=__helper;
- (void).cxx_destruct;
- (void)oneUpPresentationHelper:(id)arg1 shouldHideAssetReferences:(id)arg2;
- (void)oneUpPresentationHelper:(id)arg1 scrollAssetReferenceToVisible:(id)arg2;
- (id)oneUpPresentationHelper:(id)arg1 currentImageForAssetReference:(id)arg2;
- (struct CGRect)oneUpPresentationHelper:(id)arg1 rectForAssetReference:(id)arg2 cropInsets:(struct UIEdgeInsets *)arg3 contentsRect:(struct CGRect *)arg4;
- (_Bool)oneUpPresentationHelperShouldAutoPlay:(id)arg1;
- (id)oneUpPresentationHelperViewController:(id)arg1;
- (_Bool)handlePresentingPinchGestureRecognizer:(id)arg1;
- (void)invalidatePresentingGeometry;
- (void)stopAnimated:(_Bool)arg1;
@property(readonly, nonatomic) _Bool canStop;
- (void)commitPreviewViewController:(id)arg1;
- (void)didDismissPreviewViewController:(id)arg1 committing:(_Bool)arg2;
- (id)previewViewControllerAllowingActions:(_Bool)arg1;
- (_Bool)startAnimated:(_Bool)arg1 interactiveMode:(long long)arg2;
@property(readonly, nonatomic) _Bool canStart;
- (void)presentingViewControllerViewDidDisappear:(_Bool)arg1;
- (void)presentingViewControllerViewWillDisappear:(_Bool)arg1;
- (void)presentingViewControllerViewDidAppear:(_Bool)arg1;
- (void)presentingViewControllerViewWillAppear:(_Bool)arg1;
- (id)_initWithOneUpPresentation:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

