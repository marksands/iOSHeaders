//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CUMobileDevice, NSData, NSDictionary, NSString, NSUUID;

@interface RPDevice : NSObject
{
    unsigned char _deviceActionType;
    _Bool _needsSetup;
    unsigned int _blePaired;
    unsigned int _deviceType;
    int _rawRSSI;
    int _smoothedRSSI;
    unsigned int _systemPairState;
    unsigned int _wifiDeviceIEFlags;
    NSData *_authTag;
    NSData *_bleAdvertisementData;
    NSData *_bleDeviceAddress;
    NSUUID *_identifier;
    NSString *_model;
    NSString *_name;
    NSUUID *_pairingIdentifier;
    NSData *_txtData;
    NSDictionary *_txtDictionary;
    NSString *_udid;
    NSData *_wifiAddress;
    NSData *_wifiBSSID;
    NSData *_wifiDeviceIEDeviceID;
    NSData *_wifiDeviceIEName;
    NSData *_wifiIEData;
    id _wifiPlatformObject;
    NSString *_wifiSSID;
    CUMobileDevice *_mobileDevice;
}

@property(retain, nonatomic) CUMobileDevice *mobileDevice; // @synthesize mobileDevice=_mobileDevice;
@property(copy, nonatomic) NSString *wifiSSID; // @synthesize wifiSSID=_wifiSSID;
@property(retain, nonatomic) id wifiPlatformObject; // @synthesize wifiPlatformObject=_wifiPlatformObject;
@property(copy, nonatomic) NSData *wifiIEData; // @synthesize wifiIEData=_wifiIEData;
@property(copy, nonatomic) NSData *wifiDeviceIEName; // @synthesize wifiDeviceIEName=_wifiDeviceIEName;
@property(readonly, nonatomic) unsigned int wifiDeviceIEFlags; // @synthesize wifiDeviceIEFlags=_wifiDeviceIEFlags;
@property(copy, nonatomic) NSData *wifiDeviceIEDeviceID; // @synthesize wifiDeviceIEDeviceID=_wifiDeviceIEDeviceID;
@property(copy, nonatomic) NSData *wifiBSSID; // @synthesize wifiBSSID=_wifiBSSID;
@property(copy, nonatomic) NSData *wifiAddress; // @synthesize wifiAddress=_wifiAddress;
@property(copy, nonatomic) NSString *udid; // @synthesize udid=_udid;
@property(readonly, copy, nonatomic) NSDictionary *txtDictionary; // @synthesize txtDictionary=_txtDictionary;
@property(readonly, copy, nonatomic) NSData *txtData; // @synthesize txtData=_txtData;
@property(nonatomic) unsigned int systemPairState; // @synthesize systemPairState=_systemPairState;
@property(readonly, nonatomic) int smoothedRSSI; // @synthesize smoothedRSSI=_smoothedRSSI;
@property(readonly, nonatomic) int rawRSSI; // @synthesize rawRSSI=_rawRSSI;
@property(copy, nonatomic) NSUUID *pairingIdentifier; // @synthesize pairingIdentifier=_pairingIdentifier;
@property(readonly, nonatomic) _Bool needsSetup; // @synthesize needsSetup=_needsSetup;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) unsigned int deviceType; // @synthesize deviceType=_deviceType;
@property(readonly, nonatomic) unsigned char deviceActionType; // @synthesize deviceActionType=_deviceActionType;
@property(readonly, nonatomic) unsigned int blePaired; // @synthesize blePaired=_blePaired;
@property(readonly, copy, nonatomic) NSData *bleDeviceAddress; // @synthesize bleDeviceAddress=_bleDeviceAddress;
@property(readonly, copy, nonatomic) NSData *bleAdvertisementData; // @synthesize bleAdvertisementData=_bleAdvertisementData;
@property(readonly, copy, nonatomic) NSData *authTag; // @synthesize authTag=_authTag;
- (void).cxx_destruct;
- (void)updateWithWiFiDevice:(id)arg1 changes:(unsigned int)arg2;
- (void)updateWithSystemInfo:(id)arg1;
- (void)updateWithSFDevice:(id)arg1 changes:(unsigned int)arg2;
- (unsigned int)updateWithMobileDevice:(id)arg1;
- (unsigned int)updateWithBonjourDevice:(id)arg1;
- (void)_updateTXTDictionary:(id)arg1;
- (id)description;
- (id)init;

@end

