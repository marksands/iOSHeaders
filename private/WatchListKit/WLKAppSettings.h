//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface WLKAppSettings : NSObject <NSSecureCoding>
{
    _Bool _obsolete;
    NSString *_channelID;
    NSString *_displayName;
    unsigned long long _accessStatus;
    NSString *_externalID;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)isExternalID:(id)arg1 equalToExternalID:(id)arg2;
@property(nonatomic) _Bool obsolete; // @synthesize obsolete=_obsolete;
@property(readonly, nonatomic) NSString *externalID; // @synthesize externalID=_externalID;
@property(nonatomic) unsigned long long accessStatus; // @synthesize accessStatus=_accessStatus;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_statusStrings;
- (id)JSONDictionary;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqualToAppSettings:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithChannelID:(id)arg1 accessStatus:(unsigned long long)arg2 displayName:(id)arg3 externalID:(id)arg4;

@end

