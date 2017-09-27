//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDate, NSDictionary, NSString, NSURL, NSUUID;

@interface PKPlugInCore : NSObject
{
    _Bool _onSystemVolume;
    NSDictionary *_plugInDictionary;
    NSString *_identifier;
    NSString *_originalIdentifier;
    NSURL *_url;
    NSURL *_containingUrl;
    NSDictionary *_bundleInfoDictionary;
    NSDictionary *_entitlements;
    unsigned long long _hubProtocolVersion;
    NSString *_localizedName;
    NSString *_localizedShortName;
    NSString *_localizedContainingName;
    NSDictionary *_annotations;
    long long _lastModified;
    NSUUID *_uuid;
    NSData *_cdhash;
    NSString *_requirement;
    NSURL *_dataContainerURL;
}

+ (id)readSDKDictionary:(id)arg1;
@property(readonly, nonatomic) NSURL *dataContainerURL; // @synthesize dataContainerURL=_dataContainerURL;
@property(retain) NSString *requirement; // @synthesize requirement=_requirement;
@property(retain) NSData *cdhash; // @synthesize cdhash=_cdhash;
@property(retain) NSUUID *uuid; // @synthesize uuid=_uuid;
@property long long lastModified; // @synthesize lastModified=_lastModified;
@property(retain) NSDictionary *annotations; // @synthesize annotations=_annotations;
@property(retain) NSString *localizedContainingName; // @synthesize localizedContainingName=_localizedContainingName;
@property(retain) NSString *localizedShortName; // @synthesize localizedShortName=_localizedShortName;
@property(retain) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property unsigned long long hubProtocolVersion; // @synthesize hubProtocolVersion=_hubProtocolVersion;
@property(retain) NSDictionary *entitlements; // @synthesize entitlements=_entitlements;
@property(retain) NSDictionary *bundleInfoDictionary; // @synthesize bundleInfoDictionary=_bundleInfoDictionary;
@property _Bool onSystemVolume; // @synthesize onSystemVolume=_onSystemVolume;
@property(retain) NSURL *containingUrl; // @synthesize containingUrl=_containingUrl;
@property(retain) NSURL *url; // @synthesize url=_url;
@property(retain) NSString *originalIdentifier; // @synthesize originalIdentifier=_originalIdentifier;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)localizedInfoDictionaryForKeys:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)augmentInterface:(id)arg1;
- (id)attribute:(id)arg1;
- (id)pluginKey:(id)arg1;
- (id)infoKey:(id)arg1;
@property(readonly) NSDate *timestamp;
@property(readonly) _Bool isData;
@property(readonly) _Bool isDedicated;
@property(readonly) _Bool isHybrid;
@property(readonly) _Bool isMultiplexed;
@property(readonly) _Bool isAppExtension;
- (id)embeddedProtocolSpec;
- (id)embeddedCodePath;
@property(readonly) NSString *sdkSpec;
@property(readonly) NSString *principalSpec;
@property(readonly) id protocolSpec;
@property(readonly) NSString *version;
@property(readonly) NSDictionary *attributes;
@property(readonly) NSString *containingPath;
@property(readonly) NSString *path;
@property(readonly) _Bool oldStyle;
@property(retain) NSDictionary *plugInDictionary; // @synthesize plugInDictionary=_plugInDictionary;
- (void)setAnnotation:(id)arg1 value:(id)arg2;
- (void)updateFromForm:(id)arg1;
- (id)diagnose;
- (id)export:(id *)arg1;
- (id)mergeSharedResources:(id)arg1 into:(id)arg2;
- (_Bool)sdkOverridesKey:(id)arg1;
- (id)mergeDictionary:(id)arg1 into:(id)arg2;
- (void)resolveSDK;
- (void)canonicalize;
- (_Bool)setupWithForm:(id)arg1;
- (id)normalizeInfoDictionary:(id)arg1;
- (_Bool)setDictionaries:(id)arg1;
- (_Bool)setupWithName:(id)arg1 url:(id)arg2 bundleInfo:(id)arg3 info:(id)arg4 uuid:(id)arg5;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithForm:(id)arg1;
- (id)initWithName:(id)arg1 url:(id)arg2 bundleInfo:(id)arg3 info:(id)arg4 uuid:(id)arg5;
- (id)init;

@end

