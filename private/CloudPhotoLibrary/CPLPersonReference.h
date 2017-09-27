//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CPLReference.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDictionary, NSString;

@interface CPLPersonReference : NSObject <NSSecureCoding, NSCopying, CPLReference>
{
    NSDictionary *_extraProperties;
    NSString *_personIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *personIdentifier; // @synthesize personIdentifier=_personIdentifier;
@property(copy, nonatomic) NSDictionary *extraProperties; // @synthesize extraProperties=_extraProperties;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)serializedString;
- (id)initWithSerializedString:(id)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCPLArchiver:(id)arg1;
- (id)plistArchiveWithCPLArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

