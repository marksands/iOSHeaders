//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SGPreferenceStorage : NSObject
{
}

+ (id)defaultsForTests;
+ (void)setUseMLModelForSelfIdForTests:(_Bool)arg1;
+ (void)setMessagesToProcessImmediatelyForTests:(long long)arg1;
+ (void)setSyncHistoryToCloudForTests:(_Bool)arg1;
+ (void)setAllowGeocodeForTests:(_Bool)arg1;
+ (void)setShowEventsFoundInMailForTests:(_Bool)arg1;
+ (void)setShowContactsFoundInMailForTests:(_Bool)arg1;
+ (void)setContactsDetectionEnabledForTests:(_Bool)arg1;
+ (void)setStructuredEventsDetectionEnabledForTests:(_Bool)arg1;
+ (void)setNLEventsDetectionEnabledForTests:(_Bool)arg1;
+ (void)setProactiveEnabledForTests:(_Bool)arg1;
+ (void)setShowCancelledEventsForTests:(_Bool)arg1;
+ (void)setHidePastEventsForTests:(_Bool)arg1;
+ (void)setCloudKitPersistedState:(id)arg1;
+ (id)cloudKitPersistedState;
+ (_Bool)shouldHarvestEvents;
+ (void)setFirstPartyMailAppIsInstalled:(_Bool)arg1;
+ (void)setFirstPartyCalendarAppIsInstalled:(_Bool)arg1;
+ (void)setDetectContacts:(_Bool)arg1;
+ (void)setDetectNLEvents:(_Bool)arg1;
+ (void)setDetectStructuredEvents:(_Bool)arg1;
+ (_Bool)detectStructuredEvents;
+ (_Bool)detectNLEvents;
+ (_Bool)detectContacts;
+ (void)setUseMLModelForSelfId:(_Bool)arg1;
+ (_Bool)useMLModelForSelfId;
+ (void)setUseMLModelForContacts:(_Bool)arg1;
+ (_Bool)useMLModelForContacts;
+ (void)setAllowAgeBasedPruning:(_Bool)arg1;
+ (_Bool)allowAgeBasedPruning;
+ (void)setAllowGeocode:(_Bool)arg1;
+ (_Bool)allowGeocode;
+ (void)setShowEventsFoundInMail:(_Bool)arg1;
+ (void)setShowContactsFoundInMail:(_Bool)arg1;
+ (void)setSyncHistoryToCloud:(_Bool)arg1;
+ (_Bool)syncHistoryToCloud;
+ (void)setMessagesToProcessImmediately:(long long)arg1;
+ (long long)messagesToProcessImmediately;
+ (id)defaults;
+ (void)removeDeprecatedDefaults;
+ (void)registerBlockOnSuggestionsSettingsChange:(CDUnknownBlockType)arg1;
+ (_Bool)showSuggestionsCalendar;
+ (void)setHashedSessionsLogging:(int)arg1;
+ (long long)hashedSessionsLogging;
+ (_Bool)showEventsFoundInMail;
+ (_Bool)showContactsFoundInMail;
+ (void)setHarvestNLEvents:(_Bool)arg1;
+ (_Bool)harvestNLEvents;
+ (void)setOnlyShowSignificantNLEvents:(_Bool)arg1;
+ (_Bool)onlyShowSignificantNLEvents;
+ (void)setOnlyShowSignificantPseudoContacts:(_Bool)arg1;
+ (_Bool)onlyShowSignificantPseudoContacts;
+ (void)updateIntSettingKey:(id)arg1 withValue:(int)arg2;
+ (void)updateBoolSettingKey:(id)arg1 withValue:(_Bool)arg2;
+ (void)setAlwaysShowCancelledEvents:(_Bool)arg1;
+ (_Bool)alwaysShowCancelledEvents;
+ (void)setShowPastEvents:(_Bool)arg1;
+ (_Bool)showPastEvents;
+ (long long)suggestionsLogLevel;
+ (void)resetAllPreferences;

@end

