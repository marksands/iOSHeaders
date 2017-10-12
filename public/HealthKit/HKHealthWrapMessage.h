//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_HKStreamingDestination.h"

@class HKHealthWrapCodablePayloadHeader, HKHealthWrapEncryptor, HKHealthWrapMessageConfiguration, NSError, NSObject<OS_dispatch_queue>, NSOutputStream, NSURL, NSUUID, _HKCompressionEngine;

@interface HKHealthWrapMessage : NSObject <_HKStreamingDestination>
{
    HKHealthWrapCodablePayloadHeader *_payloadHeader;
    NSUUID *_studyUUID;
    struct __SecCertificate *_certificate;
    _HKCompressionEngine *_compressionEngine;
    HKHealthWrapEncryptor *_encryptor;
    NSURL *_outputURL;
    NSOutputStream *_outputStream;
    NSObject<OS_dispatch_queue> *_encryptQueue;
    _Bool _compressionEnabled;
    _Bool _lastSuccess;
    NSError *_lastError;
    HKHealthWrapMessageConfiguration *_configuration;
}

+ (id)newOutputFileURLInDirectory:(id)arg1;
+ (id)newOutputFileURL;
@property(readonly, nonatomic) HKHealthWrapMessageConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)sinkContentFinished;
- (void)receiveSinkContent:(id)arg1;
- (void)_cleanup;
- (void)_writeDataToCompressor:(id)arg1;
- (_Bool)_run:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (void)reset;
- (id)finalizeWithError:(id *)arg1;
- (void)_finalize;
- (_Bool)appendData:(id)arg1 error:(id *)arg2;
- (_Bool)appendDataFromFileURL:(id)arg1 error:(id *)arg2;
- (_Bool)startWithOutputFileURL:(id)arg1 error:(id *)arg2;
- (_Bool)startWithError:(id *)arg1;
- (id)_codableKeyValuePairsFromDictionary:(id)arg1;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithSenderUUID:(id)arg1 studyUUID:(id)arg2 channel:(id)arg3 payloadType:(id)arg4 startDate:(id)arg5 endDate:(id)arg6 payloadIdentifier:(id)arg7 applicationData:(id)arg8 certificate:(struct __SecCertificate *)arg9;

@end
