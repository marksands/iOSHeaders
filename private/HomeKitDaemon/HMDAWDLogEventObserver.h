//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMDLogEventObserver.h"

@class NSMutableDictionary, NSString;

@interface HMDAWDLogEventObserver : HMFObject <HMDLogEventObserver>
{
    _Bool _uploadMaximumDelayReached;
    _Bool _hasDecryptionFailed;
    _Bool _lastDecryptionFailed;
    unsigned int _pushCount;
    unsigned int _fetchCount;
    unsigned int _uploadCount;
    unsigned int _uploadErrorCount;
    unsigned int _homeManagerFetchCount;
    unsigned int _homeZoneFetchCount;
    unsigned int _homeManagerUploadCount;
    unsigned int _homeZoneUploadCount;
    unsigned long long _dataSyncState;
    NSMutableDictionary *_reasonToCountMap;
    NSMutableDictionary *_errorToCountMap;
}

+ (void)_submitAWDMetric:(id)arg1 type:(unsigned int)arg2;
+ (id)stringForMetricType:(unsigned int)arg1;
+ (id)sharedAWDServerConnection;
+ (void)initialize;
@property(retain, nonatomic) NSMutableDictionary *errorToCountMap; // @synthesize errorToCountMap=_errorToCountMap;
@property(retain, nonatomic) NSMutableDictionary *reasonToCountMap; // @synthesize reasonToCountMap=_reasonToCountMap;
@property(nonatomic) unsigned int homeZoneUploadCount; // @synthesize homeZoneUploadCount=_homeZoneUploadCount;
@property(nonatomic) unsigned int homeManagerUploadCount; // @synthesize homeManagerUploadCount=_homeManagerUploadCount;
@property(nonatomic) unsigned int homeZoneFetchCount; // @synthesize homeZoneFetchCount=_homeZoneFetchCount;
@property(nonatomic) unsigned int homeManagerFetchCount; // @synthesize homeManagerFetchCount=_homeManagerFetchCount;
@property(nonatomic) unsigned long long dataSyncState; // @synthesize dataSyncState=_dataSyncState;
@property(nonatomic) _Bool lastDecryptionFailed; // @synthesize lastDecryptionFailed=_lastDecryptionFailed;
@property(nonatomic) _Bool hasDecryptionFailed; // @synthesize hasDecryptionFailed=_hasDecryptionFailed;
@property(nonatomic) unsigned int uploadErrorCount; // @synthesize uploadErrorCount=_uploadErrorCount;
@property(nonatomic) _Bool uploadMaximumDelayReached; // @synthesize uploadMaximumDelayReached=_uploadMaximumDelayReached;
@property(nonatomic) unsigned int uploadCount; // @synthesize uploadCount=_uploadCount;
@property(nonatomic) unsigned int fetchCount; // @synthesize fetchCount=_fetchCount;
@property(nonatomic) unsigned int pushCount; // @synthesize pushCount=_pushCount;
- (void).cxx_destruct;
- (void)dispatcher:(id)arg1 didReceiveEvent:(id)arg2;
- (void)processCloudEvent:(id)arg1;
- (id)getTop:(long long)arg1 dictionary:(id)arg2;
- (void)submitCloudSyncMetric;
- (void)clearCloudSyncMetrics;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

