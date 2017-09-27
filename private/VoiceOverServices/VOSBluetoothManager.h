//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface VOSBluetoothManager : NSObject
{
    struct BTLocalDeviceImpl *_localDevice;
    struct BTSessionImpl *_session;
    long long _available;
    unsigned int _authorizedServices;
    _Bool _audioConnected;
    _Bool _scanningEnabled;
    struct BTDiscoveryAgentImpl *_discoveryAgent;
    struct BTPairingAgentImpl *_pairingAgent;
    NSMutableDictionary *_btAddrDict;
    NSMutableDictionary *_btDeviceDict;
    _Bool _wantsScanningEnabled;
    _Bool _wantsDiscoveryEnabled;
}

+ (int)lastInitError;
+ (id)sharedInstance;
@property(nonatomic) unsigned int authorizedServices; // @synthesize authorizedServices=_authorizedServices;
- (void).cxx_destruct;
- (unsigned int)authorizedServicesForDevice:(id)arg1;
- (_Bool)isServiceSupported:(unsigned int)arg1;
- (void)setAudioConnected:(_Bool)arg1;
- (_Bool)audioConnected;
- (void)_connectabilityChanged;
- (void)_connectedStatusChanged;
- (_Bool)connected;
- (_Bool)_onlySensorsConnected;
- (id)connectingDevices;
- (void)setConnectable:(_Bool)arg1;
- (_Bool)connectable;
- (void)connectDevice:(id)arg1;
- (void)connectDevice:(id)arg1 withServices:(unsigned int)arg2;
- (void)acceptSSP:(int)arg1 forDevice:(id)arg2;
- (void)setPincode:(id)arg1 forDevice:(id)arg2;
- (id)pairedDevices;
- (void)unpairDevice:(id)arg1;
- (void)cancelPairing;
- (void)setDevicePairingEnabled:(_Bool)arg1;
- (_Bool)devicePairingEnabled;
- (void)setDiscoverable:(_Bool)arg1;
- (_Bool)isDiscoverable;
- (void)_discoveryStateChanged;
- (void)_restartScan;
- (void)_setDiscoveryAgentScanning:(_Bool)arg1;
- (void)setDeviceScanningEnabled:(_Bool)arg1;
- (_Bool)deviceScanningEnabled;
- (id)deviceForAddressString:(id)arg1;
- (void)resetDeviceScanning;
- (_Bool)wasDeviceDiscovered:(id)arg1;
- (void)_removeDevice:(id)arg1;
- (id)addDeviceIfNeeded:(struct BTDeviceImpl *)arg1;
- (_Bool)isAnyoneScanning;
- (_Bool)setEnabled:(_Bool)arg1;
- (_Bool)enabled;
- (void)_powerChanged;
- (_Bool)setPowered:(_Bool)arg1;
- (_Bool)powered;
- (long long)powerState;
- (void)postNotificationName:(id)arg1 object:(id)arg2 error:(id)arg3;
- (void)postNotificationName:(id)arg1 object:(id)arg2;
- (void)postNotification:(id)arg1;
- (void)_postNotification:(id)arg1;
- (void)_postNotificationWithArray:(id)arg1;
- (void)dealloc;
- (void)_cleanup:(_Bool)arg1;
- (_Bool)_setup:(struct BTSessionImpl *)arg1;
- (_Bool)_attach:(id)arg1;
- (id)init;
- (_Bool)available;

@end

