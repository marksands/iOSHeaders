//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FMCore/IDSServiceDelegate-Protocol.h>

@class IDSService, NSArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface FMNanoIDSManager : NSObject <IDSServiceDelegate>
{
    unsigned int _minVersion;
    IDSService *_service;
    NSString *_serviceId;
    NSMutableDictionary *_outstandingRequests;
    NSMutableDictionary *_registeredRequestHandlers;
    NSObject<OS_dispatch_queue> *_outstandingRequestsModQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *outstandingRequestsModQueue; // @synthesize outstandingRequestsModQueue=_outstandingRequestsModQueue;
@property(retain, nonatomic) NSMutableDictionary *registeredRequestHandlers; // @synthesize registeredRequestHandlers=_registeredRequestHandlers;
@property(retain, nonatomic) NSMutableDictionary *outstandingRequests; // @synthesize outstandingRequests=_outstandingRequests;
@property(nonatomic) unsigned int minVersion; // @synthesize minVersion=_minVersion;
@property(retain, nonatomic) NSString *serviceId; // @synthesize serviceId=_serviceId;
@property(retain, nonatomic) IDSService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (_Bool)_checkMinVersionDeviceID:(id)arg1;
- (id)_sendProtobuf:(id)arg1 priority:(long long)arg2 responseIdentifier:(id)arg3 expectsResponse:(_Bool)arg4 bypassingDuet:(_Bool)arg5 deviceID:(id)arg6;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handleRequestsOfType:(unsigned short)arg1 withHandler:(CDUnknownBlockType)arg2;
- (_Bool)cancelMessageWithId:(id)arg1;
- (id)_sendMessageWithProtobuf:(id)arg1 inResponseToRequest:(id)arg2 withPriority:(long long)arg3 timeout:(double)arg4 bypassingDuet:(_Bool)arg5 deviceID:(id)arg6 responseHandler:(CDUnknownBlockType)arg7;
- (void)sendMessageWithProtobuf:(id)arg1 inResponseToRequest:(id)arg2 withPriority:(long long)arg3 timeout:(double)arg4 bypassingDuet:(_Bool)arg5 deviceID:(id)arg6 requestAcceptedHandler:(CDUnknownBlockType)arg7 responseHandler:(CDUnknownBlockType)arg8;
- (void)sendMessageWithProtobuf:(id)arg1 inResponseToRequest:(id)arg2 withPriority:(long long)arg3 timeout:(double)arg4 bypassingDuet:(_Bool)arg5 requestAcceptedHandler:(CDUnknownBlockType)arg6 responseHandler:(CDUnknownBlockType)arg7;
@property(readonly, copy, nonatomic) NSArray *devices;
- (void)start;
- (id)initWithServiceId:(id)arg1 minimumVersion:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
