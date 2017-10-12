//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOApplicationAuditToken, GEOResourceManifestConfiguration, GEOTileKeyList, GEOTileKeyMap, NSLocale, NSString;

__attribute__((visibility("hidden")))
@interface GEOTileRequest : NSObject
{
    GEOTileKeyList *_keyList;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    NSLocale *_locale;
    GEOTileKeyMap *_cachedEtags;
    GEOTileKeyMap *_cachedData;
    GEOTileKeyMap *_priorities;
    GEOTileKeyMap *_additionalInfos;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    GEOApplicationAuditToken *_auditToken;
    _Bool _requireWiFi;
}

@property(readonly, nonatomic) _Bool requireWiFi; // @synthesize requireWiFi=_requireWiFi;
@property(readonly, nonatomic) GEOApplicationAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(readonly, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) GEOTileKeyMap *additionalInfos; // @synthesize additionalInfos=_additionalInfos;
@property(readonly, nonatomic) GEOTileKeyMap *priorities; // @synthesize priorities=_priorities;
@property(readonly, nonatomic) GEOTileKeyMap *cachedData; // @synthesize cachedData=_cachedData;
@property(readonly, nonatomic) GEOTileKeyMap *cachedEtags; // @synthesize cachedEtags=_cachedEtags;
@property(readonly, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(readonly, nonatomic) GEOResourceManifestConfiguration *manifestConfiguration; // @synthesize manifestConfiguration=_manifestConfiguration;
@property(readonly, nonatomic) GEOTileKeyList *keyList; // @synthesize keyList=_keyList;
- (void).cxx_destruct;
- (id)description;
- (id)initWithKeyList:(id)arg1 manifestConfiguration:(id)arg2 locale:(id)arg3;
- (id)initWithKeyList:(id)arg1 manifestConfiguration:(id)arg2 locale:(id)arg3 cachedEtags:(id)arg4 cachedData:(id)arg5 priorities:(id)arg6 additionalInfos:(id)arg7 bundleIdentifier:(id)arg8 bundleVersion:(id)arg9 auditToken:(id)arg10 requireWiFi:(_Bool)arg11;
- (id)init;

@end
