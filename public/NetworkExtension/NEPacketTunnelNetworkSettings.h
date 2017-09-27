//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NetworkExtension/NETunnelNetworkSettings.h>

@class NEIPv4Settings, NEIPv6Settings, NSNumber;

@interface NEPacketTunnelNetworkSettings : NETunnelNetworkSettings
{
    NEIPv4Settings *_IPv4Settings;
    NEIPv6Settings *_IPv6Settings;
    NSNumber *_tunnelOverheadBytes;
    NSNumber *_MTU;
}

+ (_Bool)supportsSecureCoding;
@property(copy) NSNumber *MTU; // @synthesize MTU=_MTU;
@property(copy) NSNumber *tunnelOverheadBytes; // @synthesize tunnelOverheadBytes=_tunnelOverheadBytes;
@property(copy) NEIPv6Settings *IPv6Settings; // @synthesize IPv6Settings=_IPv6Settings;
@property(copy) NEIPv4Settings *IPv4Settings; // @synthesize IPv4Settings=_IPv4Settings;
- (void).cxx_destruct;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

