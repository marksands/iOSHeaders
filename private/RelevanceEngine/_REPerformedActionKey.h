//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface _REPerformedActionKey : NSObject
{
    id <REDonatedActionIdentifierProviding> _identifier;
    NSString *_bundleIdentifier;
}

+ (id)keyForBundleIdentifier:(id)arg1 identifier:(id)arg2;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) id <REDonatedActionIdentifierProviding> identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

