//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DEDFinisher.h"
#import "DEDSeedingClientDelegate.h"
#import "NSSecureCoding.h"

@class DEDBugSession, DEDBugSessionConfiguration, DEDSeedingClient, NSMutableDictionary, NSObject<OS_dispatch_source>, NSObject<OS_os_log>, NSObject<OS_os_transaction>, NSString;

@interface DEDSeedingFinisher : NSObject <DEDFinisher, DEDSeedingClientDelegate, NSSecureCoding>
{
    NSObject<OS_dispatch_source> *_timerSource;
    NSMutableDictionary *_promises;
    DEDBugSessionConfiguration *_config;
    NSMutableDictionary *_uploads;
    unsigned long long _totalUploadSize;
    NSObject<OS_os_log> *_log;
    DEDBugSession *_session;
    NSObject<OS_os_transaction> *_transaction;
    DEDSeedingClient *_client;
}

+ (_Bool)supportsSecureCoding;
@property(retain) DEDSeedingClient *client; // @synthesize client=_client;
@property(retain) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property __weak DEDBugSession *session; // @synthesize session=_session;
@property(retain) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property unsigned long long totalUploadSize; // @synthesize totalUploadSize=_totalUploadSize;
@property(retain) NSMutableDictionary *uploads; // @synthesize uploads=_uploads;
@property(retain) DEDBugSessionConfiguration *config; // @synthesize config=_config;
@property(retain) NSMutableDictionary *promises; // @synthesize promises=_promises;
- (void).cxx_destruct;
- (id)attachmentHandler;
- (void)save;
- (id)archiveItemsInDirectory:(id)arg1;
- (id)prepareUpload:(id)arg1 forSubmissionWithSession:(id)arg2 metadata:(id)arg3;
- (id)prepareSessionDirectoryForSubmission:(id)arg1;
- (_Bool)uploadsAreComplete;
- (void)startProgressNotifier;
- (void)updateSessionUploadProgress;
- (void)uploadTask:(id)arg1 didSendBytes:(long long)arg2;
- (void)uploadTask:(id)arg1 didCompleteWithError:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)cleanup;
- (void)didAdoptAttachmentGroup:(id)arg1;
- (void)didCancelCollectionOnExtension:(id)arg1;
- (void)didCollectAttachmentGroup:(id)arg1;
- (void)didStartCollectingDiagnosticExtensionWithIdentifier:(id)arg1;
- (id)initWithConfiguration:(id)arg1 session:(id)arg2;
- (void)finishSession:(id)arg1 withConfiguration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

