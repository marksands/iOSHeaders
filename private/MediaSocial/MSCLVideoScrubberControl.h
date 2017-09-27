//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UISlider.h"

#import "MPDetailScrubControllerDelegate.h"
#import "MPDetailedScrubbing.h"

@class MPDetailScrubController, NSString;

@interface MSCLVideoScrubberControl : UISlider <MPDetailScrubControllerDelegate, MPDetailedScrubbing>
{
    MPDetailScrubController *_detailScrubController;
    _Bool _isTracking;
}

+ (id)_trackImageWithColor:(id)arg1 traitCollection:(id)arg2;
- (void).cxx_destruct;
- (void)_reloadAppearance;
- (void)traitCollectionDidChange:(id)arg1;
- (void)tintColorDidChange;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)detailScrubController:(id)arg1 didChangeValue:(float)arg2;
- (void)detailScrubController:(id)arg1 didChangeScrubSpeed:(long long)arg2;
- (struct CGRect)thumbHitRect;
@property(readonly, nonatomic) _Bool usesDetailedScrubbing;
@property(nonatomic) double duration;
@property(readonly, nonatomic) long long currentScrubSpeed;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

