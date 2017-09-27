//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CXCopying.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSData, NSSet, NSString, NSURL;

@interface CXProviderConfiguration : NSObject <NSSecureCoding, CXCopying, NSCopying>
{
    _Bool _includesCallsInRecents;
    _Bool _supportsVideo;
    _Bool _supportsAudioOnly;
    _Bool _supportsEmergency;
    _Bool _supportsVoicemail;
    _Bool _supportsCurrentPlatform;
    unsigned int _audioSessionID;
    NSString *_localizedName;
    NSData *_iconTemplateImageData;
    unsigned long long _maximumCallGroups;
    unsigned long long _maximumCallsPerCallGroup;
    NSSet *_supportedHandleTypes;
    NSArray *_emergencyHandles;
    NSArray *_emergencyLabeledHandles;
    NSArray *_handoffIdentifiers;
    NSURL *_ringtoneSoundURL;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool supportsCurrentPlatform; // @synthesize supportsCurrentPlatform=_supportsCurrentPlatform;
@property(nonatomic) _Bool supportsVoicemail; // @synthesize supportsVoicemail=_supportsVoicemail;
@property(nonatomic) _Bool supportsEmergency; // @synthesize supportsEmergency=_supportsEmergency;
@property(nonatomic) _Bool supportsAudioOnly; // @synthesize supportsAudioOnly=_supportsAudioOnly;
@property(copy, nonatomic) NSURL *ringtoneSoundURL; // @synthesize ringtoneSoundURL=_ringtoneSoundURL;
@property(copy, nonatomic) NSArray *handoffIdentifiers; // @synthesize handoffIdentifiers=_handoffIdentifiers;
@property(copy, nonatomic) NSArray *emergencyLabeledHandles; // @synthesize emergencyLabeledHandles=_emergencyLabeledHandles;
@property(copy, nonatomic) NSArray *emergencyHandles; // @synthesize emergencyHandles=_emergencyHandles;
@property(nonatomic) unsigned int audioSessionID; // @synthesize audioSessionID=_audioSessionID;
@property(copy, nonatomic) NSSet *supportedHandleTypes; // @synthesize supportedHandleTypes=_supportedHandleTypes;
@property(nonatomic) _Bool supportsVideo; // @synthesize supportsVideo=_supportsVideo;
@property(nonatomic) _Bool includesCallsInRecents; // @synthesize includesCallsInRecents=_includesCallsInRecents;
@property(nonatomic) unsigned long long maximumCallsPerCallGroup; // @synthesize maximumCallsPerCallGroup=_maximumCallsPerCallGroup;
@property(nonatomic) unsigned long long maximumCallGroups; // @synthesize maximumCallGroups=_maximumCallGroups;
@property(copy, nonatomic) NSData *iconTemplateImageData; // @synthesize iconTemplateImageData=_iconTemplateImageData;
@property(copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1;
- (id)sanitizedCopy;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
@property(retain, nonatomic) NSString *ringtoneSound;
@property(readonly, copy) NSString *description;
- (id)initWithLocalizedName:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

