//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HKHealthService, NSData, NSString, NSUUID, _HKFitnessMachine;

@interface HDFitnessMachineSession : NSObject
{
    _Bool _notifyStateOnFirstData;
    _Bool _dataTransferPermitted;
    _Bool _waitingOnMFA;
    _Bool _waitingOnBluetoothConnection;
    NSUUID *_fitnessMachineSessionUUID;
    NSData *_nfcSessionIDData;
    unsigned long long _healthServiceSessionIdentifier;
    HKHealthService *_healthService;
    long long _serviceStatus;
    _HKFitnessMachine *_fitnessMachine;
    NSData *_oobData;
    unsigned long long _machineStateOnConnection;
    unsigned long long _connectionState;
    unsigned long long _machineState;
}

@property(readonly, nonatomic) _Bool waitingOnBluetoothConnection; // @synthesize waitingOnBluetoothConnection=_waitingOnBluetoothConnection;
@property(readonly, nonatomic) _Bool waitingOnMFA; // @synthesize waitingOnMFA=_waitingOnMFA;
@property(readonly, nonatomic) _Bool dataTransferPermitted; // @synthesize dataTransferPermitted=_dataTransferPermitted;
@property(nonatomic) unsigned long long machineState; // @synthesize machineState=_machineState;
@property(nonatomic) unsigned long long connectionState; // @synthesize connectionState=_connectionState;
@property(nonatomic) unsigned long long machineStateOnConnection; // @synthesize machineStateOnConnection=_machineStateOnConnection;
@property(nonatomic) _Bool notifyStateOnFirstData; // @synthesize notifyStateOnFirstData=_notifyStateOnFirstData;
@property(retain, nonatomic) NSData *oobData; // @synthesize oobData=_oobData;
@property(retain, nonatomic) _HKFitnessMachine *fitnessMachine; // @synthesize fitnessMachine=_fitnessMachine;
@property(nonatomic) long long serviceStatus; // @synthesize serviceStatus=_serviceStatus;
@property(retain, nonatomic) HKHealthService *healthService; // @synthesize healthService=_healthService;
@property(nonatomic) unsigned long long healthServiceSessionIdentifier; // @synthesize healthServiceSessionIdentifier=_healthServiceSessionIdentifier;
@property(readonly, nonatomic) NSData *nfcSessionIDData; // @synthesize nfcSessionIDData=_nfcSessionIDData;
@property(readonly, nonatomic) NSUUID *fitnessMachineSessionUUID; // @synthesize fitnessMachineSessionUUID=_fitnessMachineSessionUUID;
- (void).cxx_destruct;
- (void)markMFAAuthenticated;
- (void)markDataTransferPermitted;
- (void)markBluetoothConnectionComplete;
@property(readonly, nonatomic) NSString *nfcSessionID;
@property(readonly, nonatomic) _Bool connectionRequirementsComplete;
- (void)setFitnessMachineName:(id)arg1 type:(unsigned long long)arg2 identifier:(id)arg3;
- (id)initWithSessionConfiguration:(id)arg1;
- (id)init;
- (id)initWithNFCSessionIDData:(id)arg1;
- (id)_initWithFitnessMachineSessionUUID:(id)arg1;

@end

