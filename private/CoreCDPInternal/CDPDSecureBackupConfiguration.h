//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CDPContext, NSDictionary, NSURLSession;

@interface CDPDSecureBackupConfiguration : NSObject
{
    CDPContext *_context;
    NSDictionary *_configurationURLs;
    NSDictionary *_escrowConfigurationURLs;
    NSURLSession *_session;
}

+ (id)_configurationRequestWithURLString:(id)arg1;
+ (id)configurationWithContext:(id)arg1 andSession:(id)arg2;
+ (id)configurationWithContext:(id)arg1;
- (void).cxx_destruct;
- (id)_fetchConfigurationWithRequest:(id)arg1;
- (id)_fetchConfigurationDictionary;
- (id)_fetchEscrowConfigurationBag;
- (id)_configurationInfoURLRequest;
- (id)_escrowProxyConfigurationURLRequest;
- (id)_escrowConfigurationBagFull;
- (id)_setupConfigurationURLs;
- (id)_escrowConfigurationBag;
- (id)_escrowProxyConfigurationURL;
- (id)_escrowProxyURL;
- (id)_iCloudEnvironment;
- (id)accountInfoFetchSetupDictionary;
- (id)escrowAuthInfo;

@end

