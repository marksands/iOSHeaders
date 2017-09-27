//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVOutputSettingsAssistantInternal, NSDictionary, NSString;

@interface AVOutputSettingsAssistant : NSObject
{
    AVOutputSettingsAssistantInternal *_internal;
}

+ (id)outputSettingsAssistantWithPreset:(id)arg1;
+ (id)availableOutputSettingsPresets;
+ (id)_allOutputSettingsPresets;
+ (_Bool)validatesSourceVideoMinFrameDuration;
+ (id)videoEncoderCapabilities;
+ (id)videoSettingsAdjusterForPreset:(id)arg1;
+ (id)baseSettingsProviderForPreset:(id)arg1;
- (void)setSourceVideoMinFrameDuration:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)sourceVideoMinFrameDuration;
- (void)setSourceVideoAverageFrameDuration:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)sourceVideoAverageFrameDuration;
- (void)setSourceVideoFormat:(struct opaqueCMFormatDescription *)arg1;
- (const struct opaqueCMFormatDescription *)sourceVideoFormat;
- (void)setSourceAudioFormat:(struct opaqueCMFormatDescription *)arg1;
- (const struct opaqueCMFormatDescription *)sourceAudioFormat;
@property(readonly, nonatomic) NSDictionary *videoSettings;
@property(readonly, nonatomic) NSDictionary *audioSettings;
@property(readonly, nonatomic) NSString *outputFileType;
- (void)finalize;
- (void)dealloc;
- (id)initWithPreset:(id)arg1;
- (id)init;

@end

