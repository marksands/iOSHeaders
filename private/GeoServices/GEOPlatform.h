//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GEOPlatform : NSObject
{
}

+ (id)sharedPlatform;
+ (void)setIsRunningInGeod:(_Bool)arg1;
- (double)deviceScreenScale;
- (long long)deviceScreenHeightInPixels;
- (long long)deviceScreenWidthInPixels;
- (id)clientCapabilities;
- (_Bool)supportsForceTouch;
- (_Bool)supportsNewiOS9Features;
- (_Bool)supportsNavigation;
- (_Bool)supportsRealisticTiles;
- (_Bool)mapsFeatureFreedomEnabled;
- (_Bool)_deviceSupportsNavigation;
- (id)hardwareModel;
- (id)hardwareIdentifier;
- (id)buildVersion;
- (id)osVersion;
- (id)productName;
- (_Bool)isInternalInstall;

@end

