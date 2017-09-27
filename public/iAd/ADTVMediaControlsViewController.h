//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "ADTVMediaControlsViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class ADAdImpressionPublicAttributes, ADTVMediaControlsView, NSString;

@interface ADTVMediaControlsViewController : UIViewController <ADTVMediaControlsViewDelegate, UIGestureRecognizerDelegate>
{
    id <ADTVMediaControlsViewControllerDelegate> _delegate;
    ADTVMediaControlsView *_mediaControlsView;
    ADAdImpressionPublicAttributes *_impressionProperties;
}

@property(retain, nonatomic) ADAdImpressionPublicAttributes *impressionProperties; // @synthesize impressionProperties=_impressionProperties;
@property(retain, nonatomic) ADTVMediaControlsView *mediaControlsView; // @synthesize mediaControlsView=_mediaControlsView;
@property(nonatomic) __weak id <ADTVMediaControlsViewControllerDelegate> delegate;
- (void)adtvMediaControlsViewPrivacyButtonWasPressed:(id)arg1;
- (void)adtvMediaControlsViewActionButtonWasPressed:(id)arg1;
- (void)adtvMediaControlsViewSkipButtonWasPressed:(id)arg1;
- (void)updateElapsedTime:(double)arg1 totalTime:(double)arg2;
- (void)startSkipThresholdTimer;
- (void)_addViewConstraints;
- (void)loadView;
- (id)initWithImpressionProperties:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

