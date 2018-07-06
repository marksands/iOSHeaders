//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CameraUI/CAMCaptureCommand.h>

@class CAMCaptureGraphConfiguration, NSError;

@interface CAMModeAndDeviceCommand : CAMCaptureCommand
{
    int __requestID;
    CAMCaptureGraphConfiguration *__desiredGraphConfiguration;
    CAMCaptureGraphConfiguration *__resolvedGraphConfiguration;
    double __minimumExecutionTime;
    NSError *__configurationError;
}

@property(retain, nonatomic, setter=_setConfigurationError:) NSError *_configurationError; // @synthesize _configurationError=__configurationError;
@property(readonly, nonatomic) int _requestID; // @synthesize _requestID=__requestID;
@property(readonly, nonatomic) double _minimumExecutionTime; // @synthesize _minimumExecutionTime=__minimumExecutionTime;
@property(retain, nonatomic, setter=_setResolvedGraphConfiguration:) CAMCaptureGraphConfiguration *_resolvedGraphConfiguration; // @synthesize _resolvedGraphConfiguration=__resolvedGraphConfiguration;
@property(readonly, nonatomic) CAMCaptureGraphConfiguration *_desiredGraphConfiguration; // @synthesize _desiredGraphConfiguration=__desiredGraphConfiguration;
- (void).cxx_destruct;
- (_Bool)_wantsLowLightBoostForMode:(long long)arg1 device:(long long)arg2;
- (_Bool)_wantsQuadraHighResolutionForMode:(long long)arg1 device:(long long)arg2;
- (_Bool)_shouldEnableLivePhotoCaptureForMode:(long long)arg1 device:(long long)arg2;
- (_Bool)_isStillImageMode:(long long)arg1;
- (void)_performPostConfigurationSanityCheckForGraphConfiguration:(id)arg1 withContext:(id)arg2;
- (void)_performPostConfigurationSetupForGraphConfiguration:(id)arg1 withContext:(id)arg2;
- (id)_specificPreparePhotoSettingsCommandForGraphConfiguration:(id)arg1;
- (id)_specificEncodingBehaviorCommandForGraphConfiguration:(id)arg1;
- (id)_specificFramerateCommandForGraphConfiguration:(id)arg1 withContext:(id)arg2;
- (id)_existingOutputsWithContext:(id)arg1 without:(id)arg2;
- (id)_desiredOutputsWithContext:(id)arg1 shouldUseThumbnailOutputForFilters:(_Bool)arg2;
- (id)_existingInputsWithContext:(id)arg1 without:(id)arg2;
- (id)_desiredInputsWithContext:(id)arg1;
- (id)userInfo;
- (void)executeWithContext:(id)arg1;
- (void)_sanitizeDeviceUsingContext:(id)arg1;
- (id)sessionModificationLogReason;
- (_Bool)requiresSessionModification;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGraphConfiguration:(id)arg1 minimumExecutionTime:(double)arg2 requestID:(int)arg3;

@end

