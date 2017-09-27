//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSNumber, NSString;

@interface HKSource : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_name;
    NSString *_bundleIdentifier;
    _Bool _localDevice;
    NSNumber *_sourceID;
    NSString *_productType;
    unsigned long long _options;
}

+ (_Bool)supportsSecureCoding;
+ (id)_sourceWithBundleIdentifier:(id)arg1 name:(id)arg2 productType:(id)arg3 options:(unsigned long long)arg4;
+ (id)_generateIdentifierForAppleDeviceWithUUID:(id)arg1;
+ (id)_generateIdentifierForAppleDevice;
+ (id)_sourceNameWithRepresentsCurrentDevice:(_Bool)arg1 defaultSource:(_Bool)arg2;
+ (id)_currentSourceProductType:(_Bool)arg1;
+ (id)_sourceBundleIdentifierWithEntitlements:(id)arg1 processBundleIdentifier:(id)arg2 isExtension:(_Bool)arg3;
+ (_Bool)_representsCurrentDeviceWithBundleIdentifier:(id)arg1;
+ (id)_connectedGymSource;
+ (id)_localDeviceSource;
+ (id)defaultSource;
@property(nonatomic, getter=_options, setter=_setOptions:) unsigned long long options; // @synthesize options=_options;
@property(retain, nonatomic, getter=_productType, setter=_setProductType:) NSString *productType; // @synthesize productType=_productType;
@property(nonatomic, getter=_isLocalDevice, setter=_setLocalDevice:) _Bool localDevice; // @synthesize localDevice=_localDevice;
@property(retain, nonatomic, getter=_sourceID, setter=_setSourceID:) NSNumber *sourceID; // @synthesize sourceID=_sourceID;
- (void).cxx_destruct;
- (_Bool)_isConnectedGymSource;
- (_Bool)_isConnectedGymBundleID;
- (_Bool)_hasFirstPartyBundleID;
- (_Bool)_isAppleDevice;
- (_Bool)_isAppleWatch;
- (void)_setBundleIdentifier:(id)arg1;
@property(readonly) NSString *bundleIdentifier;
- (void)_setName:(id)arg1;
@property(readonly) NSString *name;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_init;
- (id)init;
- (_Bool)_isHidden;
- (_Bool)_requiresAuthorization;
- (_Bool)_isPreferredSource;
- (_Bool)_isApplication;

@end

