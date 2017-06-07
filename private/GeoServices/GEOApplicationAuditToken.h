//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface GEOApplicationAuditToken : NSObject <NSSecureCoding>
{
    NSData *_tokenData;
    NSString *_bundleId;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
- (id)backingTokenData;
- (id)init;
- (id)description;
- (id)initWithApplicationBundleId:(id)arg1;
- (id)initWithAuditTokenData:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCConnection:(id)arg1;

@end

