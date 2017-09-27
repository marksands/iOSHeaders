//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <QuickLook/QLItemViewController.h>

#import "QLPreviewScrollViewZoomDelegate.h"

@class NSString, QLPreviewScrollView, UITapGestureRecognizer, UIView;

__attribute__((visibility("hidden")))
@interface QLScrollableContentItemViewController : QLItemViewController <QLPreviewScrollViewZoomDelegate>
{
    QLPreviewScrollView *_scrollView;
    UIView *_contentView;
    UITapGestureRecognizer *_doubleTapGesture;
    _Bool _isVisible;
    _Bool _shouldFit;
}

@property(nonatomic) _Bool shouldFit; // @synthesize shouldFit=_shouldFit;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (double)previewScrollView:(id)arg1 extraMinimumZoomForMinimumZoomScale:(double)arg2 maximumZoomScale:(double)arg3;
- (void)previewScrollView:(id)arg1 didEndZoomingAtScale:(double)arg2;
- (void)previewScrollViewWillBeginZooming:(id)arg1;
- (id)parallaxView;
- (id)scrollView;
- (id)registeredKeyCommands;
- (_Bool)canPinchToDismiss;
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;
- (void)previewDidDisappear:(_Bool)arg1;
- (void)previewDidAppear:(_Bool)arg1;
- (void)previewWillAppear:(_Bool)arg1;
- (void)didEndZoomingAtScale:(double)arg1;
- (void)willBeginZooming;
- (void)transitionWillFinish:(_Bool)arg1 didComplete:(_Bool)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)_doubleTapRecognized:(id)arg1;
- (void)loadView;
- (struct CGSize)imageSize;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

