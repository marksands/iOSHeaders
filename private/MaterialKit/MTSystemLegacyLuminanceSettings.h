//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MaterialKit/MTSystemModuleMaterialSettings.h>

#import "_MTLuminanceMapConfiguring.h"

@class NSString;

@interface MTSystemLegacyLuminanceSettings : MTSystemModuleMaterialSettings <_MTLuminanceMapConfiguring>
{
}

+ (id)sharedMaterialSettings;
@property(readonly, copy, nonatomic, getter=_luminanceColorMapName) NSString *luminanceColorMapName;
- (double)brightness;
- (double)saturation;
- (double)luminanceAlpha;
- (double)blurRadius;
- (long long)materialVersion;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

