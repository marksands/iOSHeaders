//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TLAlertConfiguration;

@interface TLAlert : NSObject
{
    long long _instanceIndex;
    TLAlertConfiguration *_configuration;
    long long _type;
    NSString *_toneIdentifier;
    NSString *_vibrationIdentifier;
}

+ (void)_queueAudioEventBlockIfNecessary:(CDUnknownBlockType)arg1;
+ (_Bool)_stopAllAlerts;
+ (void)_setWatchPrefersSalientToneAndVibration:(_Bool)arg1;
+ (_Bool)_watchPrefersSalientToneAndVibration;
+ (id)alertWithConfiguration:(id)arg1;
+ (void)playToneAndVibrationForType:(long long)arg1;
+ (void)_playToneAndVibrationForType:(long long)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3 shouldOverrideMasterSwitches:(_Bool)arg4;
@property(readonly, nonatomic) NSString *vibrationIdentifier; // @synthesize vibrationIdentifier=_vibrationIdentifier;
@property(readonly, nonatomic) NSString *toneIdentifier; // @synthesize toneIdentifier=_toneIdentifier;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) TLAlertConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)_descriptionForDebugging:(_Bool)arg1;
- (void)_updateAudioVolumeDynamicallyToValue:(float)arg1;
- (void)stopWithOptions:(CDStruct_2418a849)arg1;
- (void)stop;
- (void)playWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_initWithConfiguration:(id)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3;
- (void)stopPlayingRepeatedlyWithOptions:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2 targetQueue:(id)arg3;
- (void)startPlayingRepeatedly;
- (_Bool)playWithCompletionHandler:(CDUnknownBlockType)arg1 targetQueue:(id)arg2;
- (id)initWithType:(long long)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3;
- (id)initWithType:(long long)arg1 accountIdentifier:(id)arg2;
- (id)initWithType:(long long)arg1;

@end
