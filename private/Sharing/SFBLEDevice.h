//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSData, NSDictionary, NSString, NSUUID, SFProximityEstimator;

@interface SFBLEDevice : NSObject <NSSecureCoding>
{
    char _rssiHistory[8];
    unsigned char _rssiCount;
    unsigned char _rssiIndex;
    _Bool _insideBubble;
    _Bool _paired;
    _Bool _triggered;
    int _rssiEstimate;
    unsigned int _connectedServices;
    NSData *_advertisementData;
    NSDictionary *_advertisementFields;
    NSData *_bluetoothAddress;
    NSUUID *_counterpartIdentifier;
    long long _distance;
    unsigned long long _foundTicks;
    NSUUID *_identifier;
    NSString *_name;
    long long _rssi;
    long long _rssiCeiling;
    long long _rssiFloor;
    long long _smoothedRSSI;
    SFProximityEstimator *_infoProximityEstimator;
    double _lastSeen;
    double _pairCheckTime;
    SFProximityEstimator *_setupProximityEstimator;
}

+ (_Bool)supportsSecureCoding;
+ (void)setRSSIEstimatorInfo:(id)arg1;
@property(nonatomic) _Bool triggered; // @synthesize triggered=_triggered;
@property(retain, nonatomic) SFProximityEstimator *setupProximityEstimator; // @synthesize setupProximityEstimator=_setupProximityEstimator;
@property(nonatomic) _Bool paired; // @synthesize paired=_paired;
@property(nonatomic) double pairCheckTime; // @synthesize pairCheckTime=_pairCheckTime;
@property(nonatomic) double lastSeen; // @synthesize lastSeen=_lastSeen;
@property(retain, nonatomic) SFProximityEstimator *infoProximityEstimator; // @synthesize infoProximityEstimator=_infoProximityEstimator;
@property(nonatomic) unsigned int connectedServices; // @synthesize connectedServices=_connectedServices;
@property(nonatomic) long long smoothedRSSI; // @synthesize smoothedRSSI=_smoothedRSSI;
@property(nonatomic) long long rssiFloor; // @synthesize rssiFloor=_rssiFloor;
@property(nonatomic) long long rssiCeiling; // @synthesize rssiCeiling=_rssiCeiling;
@property(nonatomic) int rssiEstimate; // @synthesize rssiEstimate=_rssiEstimate;
@property(nonatomic) long long rssi; // @synthesize rssi=_rssi;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool insideBubble; // @synthesize insideBubble=_insideBubble;
@property(copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned long long foundTicks; // @synthesize foundTicks=_foundTicks;
@property(nonatomic) long long distance; // @synthesize distance=_distance;
@property(copy, nonatomic) NSUUID *counterpartIdentifier; // @synthesize counterpartIdentifier=_counterpartIdentifier;
@property(copy, nonatomic) NSData *bluetoothAddress; // @synthesize bluetoothAddress=_bluetoothAddress;
@property(copy, nonatomic) NSDictionary *advertisementFields; // @synthesize advertisementFields=_advertisementFields;
@property(copy, nonatomic) NSData *advertisementData; // @synthesize advertisementData=_advertisementData;
- (void).cxx_destruct;
- (_Bool)updateRSSI:(long long)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

