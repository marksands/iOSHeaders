//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MTMaterialOverlaySettings.h"
#import "MTMaterialSettings.h"
#import "MTZooming.h"

@class MTVibrantStylingProvider, NSString, UIColor;

@interface MTPreviewBackgroundMaterialSettings : NSObject <MTMaterialSettings, MTMaterialOverlaySettings, MTZooming>
{
}

+ (id)sharedMaterialSettings;
- (void)updateWithSettingsFromArchive:(id)arg1;
@property(readonly, nonatomic) __weak MTVibrantStylingProvider *vibrantStylingProvider;
@property(nonatomic) double secondaryOverlayTintAlpha;
@property(readonly, copy, nonatomic) UIColor *secondaryOverlayTintColor;
@property(nonatomic) double primaryOverlayTintAlpha;
@property(readonly, copy, nonatomic) UIColor *primaryOverlayTintColor;
@property(nonatomic) double baseOverlayTintAlpha;
@property(readonly, copy, nonatomic) UIColor *baseOverlayColor;
@property(readonly, nonatomic) double zoom;
@property(nonatomic) double blurRadius;
@property(nonatomic) _Bool usesLuminanceMap;
@property(nonatomic) double tintAlpha;
@property(nonatomic) double brightness;
@property(nonatomic) double saturation;
@property(nonatomic) double luminanceAlpha;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

