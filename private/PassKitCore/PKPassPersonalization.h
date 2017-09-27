//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface PKPassPersonalization : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long _requiredPersonalizationFields;
    NSString *_termsAndConditions;
    NSString *_localizedDescription;
}

+ (_Bool)supportsSecureCoding;
+ (id)passPersonalizationWithPassBundle:(id)arg1;
@property(readonly, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property(readonly, nonatomic) NSString *termsAndConditions; // @synthesize termsAndConditions=_termsAndConditions;
@property(readonly, nonatomic) unsigned long long requiredPersonalizationFields; // @synthesize requiredPersonalizationFields=_requiredPersonalizationFields;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;

@end

