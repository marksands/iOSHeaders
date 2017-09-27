//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKModularTemplateView.h>

@class CLKProgressProvider, NTKColoringImageView, NTKColoringLabel, UIView<NTKComplicationImageView>;

@interface NTKModularSmallRingTemplateView : NTKModularTemplateView
{
    NTKColoringLabel *_label;
    NTKColoringImageView *_stateRing;
    UIView<NTKComplicationImageView> *_imageView;
    float _level;
    CLKProgressProvider *_progressProvider;
    struct NSNumber *_progressUpdateToken;
}

+ (void)load;
+ (id)supportedTemplateClasses;
+ (_Bool)supportsComplicationFamily:(long long)arg1;
+ (_Bool)handlesComplicationTemplate:(id)arg1;
- (void).cxx_destruct;
- (void)_enumerateForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_layoutContentView;
- (void)updateRingWithRingDescription:(id)arg1;
- (void)updateRingWithProgressProvider:(id)arg1;
- (void)_update;
- (void)setIsXL:(_Bool)arg1;
- (void)_configureContentSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

