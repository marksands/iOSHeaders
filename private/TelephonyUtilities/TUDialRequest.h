//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "TUCallRequest.h"
#import "TUVideoRequest.h"

@class CNContactStore, IDSDestination, NSArray, NSDate, NSString, NSURL, NSUUID, NSUserActivity, TUCallProvider, TUCallProviderManager, TUHandle, TUSenderIdentityClient;

@interface TUDialRequest : NSObject <TUCallRequest, TUVideoRequest, NSSecureCoding, NSCopying>
{
    _Bool _video;
    _Bool _performDialAssist;
    _Bool _performLocalDialAssist;
    _Bool _dialAssisted;
    _Bool _showUIPrompt;
    _Bool _hostOnCurrentDevice;
    _Bool _endpointOnCurrentDevice;
    _Bool _sos;
    _Bool _redial;
    _Bool _shouldSuppressInCallUI;
    NSString *_uniqueProxyIdentifier;
    TUSenderIdentityClient *_senderIdentityClient;
    TUCallProvider *_provider;
    long long _dialType;
    TUHandle *_handle;
    NSString *_contactIdentifier;
    NSString *_providerCustomIdentifier;
    NSString *_audioSourceIdentifier;
    long long _ttyType;
    TUCallProviderManager *_providerManager;
    CDUnknownBlockType _isEmergencyNumberBlock;
    CDUnknownBlockType _isEmergencyNumberOrIsWhitelistedBlock;
    NSDate *_dateDialed;
    NSString *_endpointIDSDestinationURI;
    NSUUID *_localSenderIdentityUUID;
    long long _originatingUIType;
    struct CGSize _localPortraitAspectRatio;
    struct CGSize _localLandscapeAspectRatio;
}

+ (_Bool)supportsSecureCoding;
+ (CDUnknownBlockType)legacyAddressBookIdentifierToContactIdentifierTransformBlock;
+ (void)setLegacyAddressBookIdentifierToContactIdentifierTransformBlock:(CDUnknownBlockType)arg1;
+ (void)setCallProviderManagerGeneratorBlock:(CDUnknownBlockType)arg1;
+ (CDUnknownBlockType)callProviderManagerGeneratorBlock;
+ (long long)originatingUITypeForString:(id)arg1;
+ (id)stringForOriginatingUIType:(long long)arg1;
+ (id)providerForIntentPreferredCallProvider:(long long)arg1 providerManager:(id)arg2;
+ (long long)ttyTypeForIntentTTYType:(long long)arg1;
+ (long long)intentTTYTypeForTTYType:(long long)arg1;
+ (long long)dialRequestTypeForIntentDestinationType:(long long)arg1;
+ (long long)ttyTypeForString:(id)arg1;
+ (id)stringForTTYType:(long long)arg1;
+ (long long)handleTypeForQueryItem:(id)arg1;
+ (id)stringForDialType:(long long)arg1;
@property(nonatomic) _Bool shouldSuppressInCallUI; // @synthesize shouldSuppressInCallUI=_shouldSuppressInCallUI;
@property(nonatomic, getter=isRedial) _Bool redial; // @synthesize redial=_redial;
@property(nonatomic, getter=isSOS, setter=setSOS:) _Bool sos; // @synthesize sos=_sos;
@property(nonatomic) long long originatingUIType; // @synthesize originatingUIType=_originatingUIType;
@property(copy, nonatomic) NSUUID *localSenderIdentityUUID; // @synthesize localSenderIdentityUUID=_localSenderIdentityUUID;
@property(copy, nonatomic) NSString *endpointIDSDestinationURI; // @synthesize endpointIDSDestinationURI=_endpointIDSDestinationURI;
@property(nonatomic) _Bool endpointOnCurrentDevice; // @synthesize endpointOnCurrentDevice=_endpointOnCurrentDevice;
@property(nonatomic) _Bool hostOnCurrentDevice; // @synthesize hostOnCurrentDevice=_hostOnCurrentDevice;
@property(retain, nonatomic) NSDate *dateDialed; // @synthesize dateDialed=_dateDialed;
@property(copy, nonatomic) CDUnknownBlockType isEmergencyNumberOrIsWhitelistedBlock; // @synthesize isEmergencyNumberOrIsWhitelistedBlock=_isEmergencyNumberOrIsWhitelistedBlock;
@property(copy, nonatomic) CDUnknownBlockType isEmergencyNumberBlock; // @synthesize isEmergencyNumberBlock=_isEmergencyNumberBlock;
@property(readonly, nonatomic) TUCallProviderManager *providerManager; // @synthesize providerManager=_providerManager;
@property(nonatomic) _Bool showUIPrompt; // @synthesize showUIPrompt=_showUIPrompt;
@property(nonatomic) long long ttyType; // @synthesize ttyType=_ttyType;
@property(nonatomic, getter=isDialAssisted) _Bool dialAssisted; // @synthesize dialAssisted=_dialAssisted;
@property(nonatomic) _Bool performLocalDialAssist; // @synthesize performLocalDialAssist=_performLocalDialAssist;
@property(nonatomic) _Bool performDialAssist; // @synthesize performDialAssist=_performDialAssist;
@property(copy, nonatomic) NSString *audioSourceIdentifier; // @synthesize audioSourceIdentifier=_audioSourceIdentifier;
@property(nonatomic, getter=isVideo) _Bool video; // @synthesize video=_video;
@property(copy, nonatomic) NSString *providerCustomIdentifier; // @synthesize providerCustomIdentifier=_providerCustomIdentifier;
@property(copy, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(retain, nonatomic) TUHandle *handle; // @synthesize handle=_handle;
@property(nonatomic) long long dialType; // @synthesize dialType=_dialType;
@property(retain, nonatomic) TUCallProvider *provider; // @synthesize provider=_provider;
@property(nonatomic) struct CGSize localLandscapeAspectRatio; // @synthesize localLandscapeAspectRatio=_localLandscapeAspectRatio;
@property(nonatomic) struct CGSize localPortraitAspectRatio; // @synthesize localPortraitAspectRatio=_localPortraitAspectRatio;
@property(copy, nonatomic) NSString *uniqueProxyIdentifier; // @synthesize uniqueProxyIdentifier=_uniqueProxyIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToDialRequest:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)_contactFromINPerson:(id)arg1 bestGuessHandle:(id *)arg2;
- (id)dialRequestByReplacingProvider:(id)arg1;
- (id)validityErrorForSOS;
- (id)validityErrorForUnsupportedHandleType;
- (id)validityErrorForNormalDialTypeWithUnknownDestination;
- (id)validityErrorForVideoUnsupported;
- (id)validityErrorForEmergencyCall;
- (id)validityErrorForEndpointNotOnCurrentDeviceForNonRelayableService;
- (id)validityErrorForNonNormalDialTypeWithoutTelephony;
- (id)validityErrorForDestinationIDWithVoicemail;
- (id)validityErrorForUnspecifiedProvider;
@property(readonly, copy, nonatomic) NSArray *validityErrors;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
@property(readonly, nonatomic) NSUserActivity *userActivity;
- (id)shouldSuppressInCallUIQueryItem;
- (id)endpointIDSDestinationURIQueryItem;
- (id)redialURLQueryItem;
- (id)sosURLQueryItem;
- (id)noPromptURLQueryItem;
- (id)originatingUIURLQueryItem;
- (id)ttyTypeURLQueryItem;
- (id)handleTypeURLQueryItem;
- (id)dialAssistedURLQueryItem;
- (id)suppressAssistURLQueryItem;
- (id)forceAssistURLQueryItem;
- (id)audioSourceIdentifierURLQueryItem;
- (id)localSenderIdentityUUIDURLQueryItem;
- (id)providerCustomIdentifierURLQueryItem;
- (id)contactIdentifierURLQueryItem;
- (id)isVoicemailURLQueryItem;
- (id)URLQueryItems;
- (id)URLHost;
- (id)URLScheme;
@property(readonly, nonatomic) NSURL *URL;
- (id)legacyAddressBookIdentifierQueryItemName;
- (int)legacyAddressBookIdentifierFromURLComponents:(id)arg1;
- (id)contactIdentifierFromURLComponents:(id)arg1;
- (id)handleFromURL:(id)arg1;
- (id)destinationIDFromURL:(id)arg1;
- (id)callProviderFromURLComponents:(id)arg1 video:(_Bool *)arg2;
- (_Bool)boolValueForQueryItemWithName:(id)arg1 inURLComponents:(id)arg2;
@property(readonly, nonatomic) IDSDestination *endpointIDSDestination;
@property(copy, nonatomic) NSString *destinationID;
@property(readonly, nonatomic) TUSenderIdentityClient *senderIdentityClient; // @synthesize senderIdentityClient=_senderIdentityClient;
@property(readonly, nonatomic) CNContactStore *contactStore;
@property(readonly, nonatomic) _Bool useTTY;
@property(readonly, nonatomic) int service;
@property(readonly, copy) NSString *description;
- (id)init;
- (id)initWithDialIntent:(id)arg1 providerManager:(id)arg2;
- (id)initWithUserActivity:(id)arg1 providerManager:(id)arg2;
- (id)initWithUserActivity:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithService:(int)arg1;
- (id)initWithProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

