//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HMDDataStreamDelegate.h"
#import "HMFLogging.h"

@class HMDDataStream, HMDDataStreamSetup, HMDHAPAccessory, HMDNotificationRegistration, HMDService, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface HMDDataStreamController : NSObject <HMDDataStreamDelegate, HMFLogging>
{
    _Bool _supportsDataStreamOverTCP;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDHAPAccessory *_accessory;
    HMDService *_transferManagementService;
    HMDDataStream *_defaultDataStream;
    NSMutableArray *_activeProtocols;
    HMDNotificationRegistration *_notificationRegistration;
    HMDDataStreamSetup *_setupInProgress;
}

+ (id)logCategory;
@property(retain, nonatomic) HMDDataStreamSetup *setupInProgress; // @synthesize setupInProgress=_setupInProgress;
@property(nonatomic) _Bool supportsDataStreamOverTCP; // @synthesize supportsDataStreamOverTCP=_supportsDataStreamOverTCP;
@property(readonly, nonatomic) HMDNotificationRegistration *notificationRegistration; // @synthesize notificationRegistration=_notificationRegistration;
@property(retain, nonatomic) NSMutableArray *activeProtocols; // @synthesize activeProtocols=_activeProtocols;
@property(retain, nonatomic) HMDDataStream *defaultDataStream; // @synthesize defaultDataStream=_defaultDataStream;
@property(nonatomic) __weak HMDService *transferManagementService; // @synthesize transferManagementService=_transferManagementService;
@property(nonatomic) __weak HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void).cxx_destruct;
- (void)dataStreamDidOpen:(id)arg1;
- (void)dataStreamDidClose:(id)arg1;
- (void)dataStream:(id)arg1 didFailWithError:(id)arg2;
- (void)_createBulkStreamProtocol;
- (void)_cancelStreamTransportWithError:(id)arg1;
- (void)_finishStreamTransport;
- (void)_continueStreamSetupWithResponse:(id)arg1;
- (void)_generateStreamKeys;
- (void)_initiateStreamSetup;
- (void)removeBulkSendListener:(id)arg1;
- (void)addBulkSendListener:(id)arg1 fileType:(id)arg2;
- (_Bool)canAcceptBulkSendListeners;
- (id)_getActiveProtocolWithClass:(Class)arg1;
- (void)handleAccessoryIsNotReachable:(id)arg1;
- (void)handleAccessoryIsReachable:(id)arg1;
- (void)registerForMessages;
- (id)initWithAccessory:(id)arg1 service:(id)arg2 workQueue:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

