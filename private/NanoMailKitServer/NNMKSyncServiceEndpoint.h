//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface NNMKSyncServiceEndpoint : NSObject
{
    id <NNMKSyncServiceTransport> _serviceTransport;
    NSString *_idsServiceName;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    NSMutableDictionary *_repeatPreventionRecords;
    NSObject<OS_dispatch_source> *_repeatPreventionCleanupTimer;
}

@property(retain, nonatomic) NSObject<OS_dispatch_source> *repeatPreventionCleanupTimer; // @synthesize repeatPreventionCleanupTimer=_repeatPreventionCleanupTimer;
@property(retain, nonatomic) NSMutableDictionary *repeatPreventionRecords; // @synthesize repeatPreventionRecords=_repeatPreventionRecords;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue; // @synthesize serviceQueue=_serviceQueue;
@property(retain, nonatomic) NSString *idsServiceName; // @synthesize idsServiceName=_idsServiceName;
@property(retain, nonatomic) id <NNMKSyncServiceTransport> serviceTransport; // @synthesize serviceTransport=_serviceTransport;
- (void).cxx_destruct;
- (void)_removeExpiredRepeatPreventionRecords;
- (void)_storeRepeatPreventionId:(id)arg1 priority:(unsigned long long)arg2;
- (_Bool)_willIdRepeat:(id)arg1;
@property(readonly, nonatomic) unsigned long long connectivityState;
- (void)syncServiceTransportDidChangeConnectivity:(id)arg1;
- (void)syncServiceTransportDidReportSpaceBecameAvailable:(id)arg1;
- (void)syncServiceTransport:(id)arg1 didFailSendingProtobufWithIdentifier:(id)arg2 errorCode:(long long)arg3;
- (void)syncServiceTransport:(id)arg1 didSendProtobufSuccessfullyWithIdentifier:(id)arg2;
- (void)syncServiceTransport:(id)arg1 didReadProtobufData:(id)arg2 type:(unsigned long long)arg3;
- (id)sendProtobufData:(id)arg1 type:(unsigned long long)arg2 priority:(unsigned long long)arg3 repeatPreventionId:(id)arg4 shortTimeout:(_Bool)arg5 allowCloudDelivery:(_Bool)arg6;
- (id)sendProtobufData:(id)arg1 type:(unsigned long long)arg2 priority:(unsigned long long)arg3 shortTimeout:(_Bool)arg4 allowCloudDelivery:(_Bool)arg5;
- (id)sendProtobufData:(id)arg1 type:(unsigned long long)arg2 priority:(unsigned long long)arg3 timeout:(double)arg4 allowCloudDelivery:(_Bool)arg5;
- (void)spaceBecameAvailable;
- (void)connectivityChanged;
- (void)readProtobufData:(id)arg1 type:(unsigned long long)arg2;
- (void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2;
- (void)successfullySentProtobufWithIDSIdentifier:(id)arg1;
- (void)resetRepeatPreventionHistory;
- (void)_initializeServiceTransport;
- (void)dealloc;
- (id)initWithIDSServiceName:(id)arg1 queue:(id)arg2;

@end

