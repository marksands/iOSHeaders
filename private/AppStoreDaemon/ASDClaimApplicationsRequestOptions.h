//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSArray, NSData, NSDictionary, NSNumber;

@interface ASDClaimApplicationsRequestOptions : ASDRequestOptions
{
    _Bool _establishesActiveAccount;
    _Bool _ignoresPreviousClaimAttempts;
    _Bool _suppressErrorDialogs;
    NSNumber *_accountID;
    NSData *_clientAuditTokenData;
    NSArray *_bundleIdentifiers;
    long long _claimStyle;
    NSDictionary *_httpHeaders;
    NSNumber *_purchaseID;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool suppressErrorDialogs; // @synthesize suppressErrorDialogs=_suppressErrorDialogs;
@property(copy, nonatomic) NSNumber *purchaseID; // @synthesize purchaseID=_purchaseID;
@property(nonatomic) _Bool ignoresPreviousClaimAttempts; // @synthesize ignoresPreviousClaimAttempts=_ignoresPreviousClaimAttempts;
@property(copy, nonatomic) NSDictionary *httpHeaders; // @synthesize httpHeaders=_httpHeaders;
@property(nonatomic) _Bool establishesActiveAccount; // @synthesize establishesActiveAccount=_establishesActiveAccount;
@property(readonly, nonatomic) long long claimStyle; // @synthesize claimStyle=_claimStyle;
@property(readonly, nonatomic) NSArray *bundleIdentifiers; // @synthesize bundleIdentifiers=_bundleIdentifiers;
@property(copy, nonatomic) NSData *clientAuditTokenData; // @synthesize clientAuditTokenData=_clientAuditTokenData;
@property(copy, nonatomic) NSNumber *accountID; // @synthesize accountID=_accountID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBundleIdentifiers:(id)arg1;
- (id)initWithClaimStyle:(long long)arg1;

@end

