//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DAAccount.h"

#import "SubCalValidationTaskDelegate.h"

@class DACoreDAVTaskManager, NSData, NSDictionary, NSString, NSURL;

@interface SubCalAccount : DAAccount <SubCalValidationTaskDelegate>
{
    _Bool _isManagedCalendar;
    _Bool _isHolidaySubscribedCalendar;
    _Bool _didTrySSL;
    int _subCalAccountVersion;
    NSData *_tmpICSData;
}

@property(retain, nonatomic) NSData *tmpICSData; // @synthesize tmpICSData=_tmpICSData;
@property(nonatomic) _Bool didTrySSL; // @synthesize didTrySSL=_didTrySSL;
@property(nonatomic) int subCalAccountVersion; // @synthesize subCalAccountVersion=_subCalAccountVersion;
@property(nonatomic) _Bool isHolidaySubscribedCalendar; // @synthesize isHolidaySubscribedCalendar=_isHolidaySubscribedCalendar;
@property(nonatomic) _Bool isManagedCalendar; // @synthesize isManagedCalendar=_isManagedCalendar;
- (void).cxx_destruct;
- (void)handleTrustChallenge:(id)arg1 forTask:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)handleTrustChallenge:(id)arg1 forTask:(id)arg2;
- (_Bool)hasSubscribedCalendarAtURL:(id)arg1;
- (id)onBehalfOfBundleIdentifier;
- (id)localizedInvalidPasswordMessage;
- (id)localizedIdenticalAccountFailureMessage;
- (void)removeDBSyncData;
- (_Bool)accountHasSignificantPropertyChangesFromOldAccountInfo:(id)arg1;
- (_Bool)isEqualToAccount:(id)arg1;
- (void)refreshAllCalendars:(_Bool)arg1;
@property(nonatomic) _Bool shouldRemoveAlarms;
@property(retain, nonatomic) NSDictionary *externalRepresentation;
@property(retain, nonatomic) NSString *syncId;
- (void)setHost:(id)arg1;
- (void)upgradeAccountSpecificPropertiesOnAccount:(id)arg1 inStore:(id)arg2 parentAccount:(id)arg3;
- (void)clearTmpICSData;
- (void)saveTmpICSData;
- (id)_tmpICSCalendarPath;
- (void)subCalValidationTask:(id)arg1 finishedWithError:(id)arg2 calendarName:(id)arg3 calendarData:(id)arg4;
- (void)quickValidate:(id)arg1;
- (void)discoverInitialPropertiesWithConsumer:(id)arg1;
- (void)_checkValidityWithConsumer:(id)arg1 quickValidate:(_Bool)arg2;
- (void)_checkValidityWithConsumer:(id)arg1 quickValidate:(_Bool)arg2 forceSSL:(_Bool)arg3;
@property(readonly, nonatomic) DACoreDAVTaskManager *taskManager;
@property(readonly, nonatomic) NSString *calendarExternalId;
@property(retain, nonatomic) NSString *calDAVURLString;
@property(readonly, nonatomic) NSURL *subscriptionURL;
- (void)setAccountDescription:(id)arg1;
- (id)accountDescription;
- (_Bool)isSubscribedCalendarAccount;
- (id)initWithBackingAccountInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

