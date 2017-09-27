//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSData;

@interface SBFCredentialSet : NSObject <NSSecureCoding>
{
    _Bool _ownsContext;
    NSData *_cachedCredentials;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)serializedCredentialSet;
- (void)dealloc;
- (id)initWithSerializedCredentialSet:(id)arg1;
- (id)init;

@end

