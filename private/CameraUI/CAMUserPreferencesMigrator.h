//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CAMUserPreferencesMigrator : NSObject
{
}

+ (long long)_previewViewAspectModeForLegacyAspectMode:(long long)arg1;
+ (long long)_HDRModeForLegacyHDRMode:(long long)arg1;
+ (long long)_captureModeForLegacyCameraMode:(long long)arg1;
+ (long long)_flashModeForLegacyFlashMode:(long long)arg1;
+ (void)migrateLegacyPreferences;

@end

