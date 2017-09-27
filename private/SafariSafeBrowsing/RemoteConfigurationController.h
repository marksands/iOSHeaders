//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, ProviderConfiguration;

__attribute__((visibility("hidden")))
@interface RemoteConfigurationController : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSDictionary *_currentConfiguration;
    NSObject<OS_dispatch_source> *_updateTimer;
    _Bool _googleConfigurationDidChange;
    _Bool _tencentConfigurationDidChange;
    ProviderConfiguration *_googleProviderConfiguration;
    ProviderConfiguration *_tencentProviderConfiguration;
}

+ (id)sharedController;
@property(readonly, nonatomic) ProviderConfiguration *tencentProviderConfiguration; // @synthesize tencentProviderConfiguration=_tencentProviderConfiguration;
@property(readonly, nonatomic) ProviderConfiguration *googleProviderConfiguration; // @synthesize googleProviderConfiguration=_googleProviderConfiguration;
- (void).cxx_destruct;
- (_Bool)forceUpdateConfigurationFromServer;
- (_Bool)forceLoadConfigurationFromDisk;
- (void)_scheduleConfigurationUpdateDaily;
- (void)_setCurrentDateAsLastConfigurationUpdateAttemptDate;
- (id)_lastConfigurationUpdateAttemptDate;
- (_Bool)_shouldUpdateConfigurationGivenLastConfigurationUpdateAttemptDate:(id)arg1;
- (void)_didReceiveConfigurationData:(id)arg1;
- (void)_updateConfigurationIfNecessary;
- (void)_downloadConfigurationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_notifyProviderConfigurationsDidChangeIfNecessary;
- (void)_setCurrentConfiguration:(id)arg1;
- (void)_writeConfigurationToDisk:(id)arg1;
- (void)_loadConfigurationFromDiskIfNecessary;
- (id)_urlOfDownloadedConfiguration;
- (void)_resetProviderConfigurationsDidChange;
- (void)_initializeProviderConfigurationsWithConfiguration:(id)arg1;
- (void)_simplifyProviderConfigurations;
- (void)_initializeToDefaultProviderConfigurations;
- (id)_providerToTurnOffFromProviderDictionary:(id)arg1;
@property(readonly, nonatomic, getter=isSafeBrowsingOff) _Bool safeBrowsingOff;
- (void)dealloc;
- (id)init;

@end

