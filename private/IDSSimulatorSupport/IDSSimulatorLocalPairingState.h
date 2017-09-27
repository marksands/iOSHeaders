//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSUUID;

@interface IDSSimulatorLocalPairingState : NSObject
{
    NSUUID *_activePairedDeviceSimulatorID;
    NSObject<OS_dispatch_queue> *_didSwitchActivePairedDeviceCallbackQueue;
    CDUnknownBlockType _didSwitchActivePairedDeviceCallback;
    NSUUID *_pendingQuickSwitchAcknowledgementID;
}

+ (id)sharedInstance;
@property(retain) NSUUID *pendingQuickSwitchAcknowledgementID; // @synthesize pendingQuickSwitchAcknowledgementID=_pendingQuickSwitchAcknowledgementID;
@property(copy, nonatomic) CDUnknownBlockType didSwitchActivePairedDeviceCallback; // @synthesize didSwitchActivePairedDeviceCallback=_didSwitchActivePairedDeviceCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *didSwitchActivePairedDeviceCallbackQueue; // @synthesize didSwitchActivePairedDeviceCallbackQueue=_didSwitchActivePairedDeviceCallbackQueue;
@property(retain) NSUUID *activePairedDeviceSimulatorID; // @synthesize activePairedDeviceSimulatorID=_activePairedDeviceSimulatorID;
- (void).cxx_destruct;

@end

