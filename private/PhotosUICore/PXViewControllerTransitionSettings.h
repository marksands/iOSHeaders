//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@class PXViewControllerPinchTransitionSettings, PXViewControllerSwipeDownTransitionSettings, PXViewControllerZoomTransitionSettings;

@interface PXViewControllerTransitionSettings : PXSettings
{
    PXViewControllerZoomTransitionSettings *_zoomTransitionSettings;
    PXViewControllerPinchTransitionSettings *_pinchTransitionSettings;
    PXViewControllerSwipeDownTransitionSettings *_swipeDownTransitionSettings;
}

+ (id)sharedInstance;
+ (id)settingsControllerModule;
@property(retain, nonatomic) PXViewControllerSwipeDownTransitionSettings *swipeDownTransitionSettings; // @synthesize swipeDownTransitionSettings=_swipeDownTransitionSettings;
@property(retain, nonatomic) PXViewControllerPinchTransitionSettings *pinchTransitionSettings; // @synthesize pinchTransitionSettings=_pinchTransitionSettings;
@property(retain, nonatomic) PXViewControllerZoomTransitionSettings *zoomTransitionSettings; // @synthesize zoomTransitionSettings=_zoomTransitionSettings;
- (void).cxx_destruct;
- (void)setDefaultValues;
- (id)parentSettings;

@end

