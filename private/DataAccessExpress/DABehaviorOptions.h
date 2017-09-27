//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DABehaviorOptions : NSObject
{
}

+ (void)removeDAManagedDefaults:(id)arg1;
+ (_Bool)addDAManagedDefaults:(id)arg1;
+ (id)DAManagedDefaultForKey:(id)arg1;
+ (_Bool)setDAManagedDefaults:(id)arg1;
+ (id)DAManagedDefaults;
+ (id)_daManagedDefaultsPath;
+ (_Bool)orphanCheckEnabled;
+ (_Bool)isEASParsingLogEnabled;
+ (int)numForgivable401s;
+ (_Bool)isAppleInternalInstall;
+ (_Bool)isCustomerInstall;
+ (double)holidayCalendarRefreshInterval;
+ (id)holidayCalendarURL;
+ (_Bool)customAutoDV2UserAgentEnabled;
+ (_Bool)earlyPingEnabled;
+ (_Bool)alwaysUseCalendarHomeSync;
+ (_Bool)babysitterEnabled;
+ (_Bool)isInHoldingPattern;
+ (_Bool)sendMeCardEverywhere;
+ (_Bool)writeOutBrokenCancelationRequests;
+ (_Bool)completelyIgnoreNotes;
+ (_Bool)allIMAPServersSupportNotesSearch;
+ (id)APSEnv;
+ (_Bool)CFNetworkLogging;
+ (_Bool)perfLogging;
+ (_Bool)useThunderhillBetaServers;
+ (_Bool)compressRequests;
+ (_Bool)enablePromptForServerTrust;
+ (_Bool)promptForAllCerts;
+ (_Bool)calDAVRemindersForAll;
+ (_Bool)cookiesEnabled;
+ (_Bool)_shouldForceCookies:(_Bool *)arg1;
+ (id)whitelistedEASProtocols;
+ (double)defaultDAVProbeTimeout;
+ (double)defaultEASTaskTimeoutOutWasFound:(_Bool *)arg1;
+ (_Bool)ignoreBadLDAPCerts;
+ (int)refreshThrottleTime;
+ (_Bool)ignoreSupportedCommands;
+ (void)initialize;
+ (void)_startListeningForNotifications;

@end

