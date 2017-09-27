//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVOutputSettings.h>

@class NSDictionary, NSString;

@interface AVVideoOutputSettings : AVOutputSettings
{
}

+ (id)defaultVideoOutputSettings;
+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;
+ (id)videoOutputSettingsWithTrustedVideoSettingsDictionary:(id)arg1;
+ (id)videoOutputSettingsWithVideoSettingsDictionary:(id)arg1;
+ (id)_outputSettingsWithOutputSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;
+ (id)registeredOutputSettingsClasses;
+ (id)_validValuesForScalingMode;
- (_Bool)validateUsingOutputSettingsValidator:(id)arg1 reason:(id *)arg2;
@property(readonly, nonatomic) _Bool allowWideColor;
@property(readonly, nonatomic) NSString *frameRateConversionAlgorithm;
@property(readonly, nonatomic) CDStruct_1b6d18a9 minimumFrameDuration;
@property(readonly, nonatomic) _Bool dimensionsAreBoundingBox;
- (void)colorPropertiesConsideringFormatDescriptions:(id)arg1 colorPrimaries:(id *)arg2 transferFunction:(id *)arg3 ycbcrMatrix:(id *)arg4;
@property(readonly, nonatomic) NSDictionary *pixelTransferProperties;
@property(readonly, nonatomic) NSDictionary *videoScalingProperties;
@property(readonly, nonatomic) NSDictionary *cleanApertureDictionary;
@property(readonly, nonatomic) NSDictionary *pixelAspectRatioDictionary;
@property(readonly, nonatomic) int height;
@property(readonly, nonatomic) int width;
@property(readonly, nonatomic) NSDictionary *videoSettingsDictionary;
- (id)compatibleMediaTypes;
- (id)initWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;

@end

