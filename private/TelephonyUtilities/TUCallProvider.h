//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSData, NSOrderedSet, NSSet, NSString, NSURL, TUSandboxExtendedURL;

@interface TUCallProvider : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _supportsAudioOnly;
    _Bool _supportsAudioAndVideo;
    _Bool _supportsEmergency;
    _Bool _supportsVoicemail;
    _Bool _supportsRecents;
    _Bool _supportsCurrentPlatform;
    unsigned int _audioSessionID;
    NSString *_identifier;
    NSString *_localizedName;
    NSSet *_supportedHandleTypes;
    NSURL *_bundleURL;
    NSString *_bundleIdentifier;
    NSArray *_emergencyLabeledHandles;
    NSArray *_handoffIdentifiers;
    NSOrderedSet *_prioritizedSenderIdentities;
    TUSandboxExtendedURL *_sandboxExtendedRingtoneSoundURL;
    NSURL *_originalRingtoneSoundURL;
    NSData *_iconTemplateImageData;
    unsigned long long _maximumCallGroups;
    unsigned long long _maximumCallsPerCallGroup;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned int audioSessionID; // @synthesize audioSessionID=_audioSessionID;
@property(nonatomic) _Bool supportsCurrentPlatform; // @synthesize supportsCurrentPlatform=_supportsCurrentPlatform;
@property(nonatomic) _Bool supportsRecents; // @synthesize supportsRecents=_supportsRecents;
@property(nonatomic) unsigned long long maximumCallsPerCallGroup; // @synthesize maximumCallsPerCallGroup=_maximumCallsPerCallGroup;
@property(nonatomic) unsigned long long maximumCallGroups; // @synthesize maximumCallGroups=_maximumCallGroups;
@property(copy, nonatomic) NSData *iconTemplateImageData; // @synthesize iconTemplateImageData=_iconTemplateImageData;
@property(retain, nonatomic) NSURL *originalRingtoneSoundURL; // @synthesize originalRingtoneSoundURL=_originalRingtoneSoundURL;
@property(retain, nonatomic) TUSandboxExtendedURL *sandboxExtendedRingtoneSoundURL; // @synthesize sandboxExtendedRingtoneSoundURL=_sandboxExtendedRingtoneSoundURL;
@property(copy, nonatomic) NSOrderedSet *prioritizedSenderIdentities; // @synthesize prioritizedSenderIdentities=_prioritizedSenderIdentities;
@property(copy, nonatomic) NSArray *handoffIdentifiers; // @synthesize handoffIdentifiers=_handoffIdentifiers;
@property(copy, nonatomic) NSArray *emergencyLabeledHandles; // @synthesize emergencyLabeledHandles=_emergencyLabeledHandles;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) NSURL *bundleURL; // @synthesize bundleURL=_bundleURL;
@property(copy, nonatomic) NSSet *supportedHandleTypes; // @synthesize supportedHandleTypes=_supportedHandleTypes;
@property(nonatomic) _Bool supportsVoicemail; // @synthesize supportsVoicemail=_supportsVoicemail;
@property(nonatomic) _Bool supportsEmergency; // @synthesize supportsEmergency=_supportsEmergency;
@property(nonatomic) _Bool supportsAudioAndVideo; // @synthesize supportsAudioAndVideo=_supportsAudioAndVideo;
@property(nonatomic) _Bool supportsAudioOnly; // @synthesize supportsAudioOnly=_supportsAudioOnly;
@property(copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToCallProvider:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)senderIdentities;
- (void)setSenderIdentities:(id)arg1;
@property(retain, nonatomic) NSURL *ringtoneSoundURL;
- (id)inCallUIBundleIdentifier;
- (id)displayAppBundleIdentifier;
- (id)senderIdentityForHandle:(id)arg1;
- (id)senderIdentityForAccountUUID:(id)arg1;
- (_Bool)hasRestrictionsInRetailEnvironment;
- (_Bool)prefersShowingInCallUI;
- (_Bool)supportsShowingInCallUI;
- (_Bool)isSystemProvider;
- (_Bool)isTinCanProvider;
@property(readonly, nonatomic, getter=isFaceTimeProvider) _Bool faceTimeProvider;
@property(readonly, nonatomic, getter=isTelephonyProvider) _Bool telephonyProvider;
- (_Bool)supportsHandleType:(long long)arg1;
- (id)description;
- (id)init;
- (id)initWithIdentifier:(id)arg1;

@end

